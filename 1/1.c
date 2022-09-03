#include<stdio.h>
#include<float.h>

int main(void)
{
	int number_1 = 3, number_2 = 4;
	float number_4 = 3.5, number_5 = 4.7, number_6 , number_7;
	number_7 = number_4 + number_5;
	number_6 = (int)(number_4 + number_5);
	printf("number_7=%f\n,number_6=%f\n,number_5=%f\n", number_7, number_6, number_5);
	return 0;
}