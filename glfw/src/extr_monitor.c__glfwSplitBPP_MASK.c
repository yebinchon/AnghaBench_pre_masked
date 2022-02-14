
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(int VAR_0, int* VAR_1, int* VAR_2, int* VAR_3)
{
    int VAR_4;


    if (VAR_0 == 32)
        VAR_0 = 24;



    *VAR_1 = *VAR_2 = *VAR_3 = VAR_0 / 3;
    VAR_4 = VAR_0 - (*VAR_1 * 3);
    if (VAR_4 >= 1)
        *VAR_2 = *VAR_2 + 1;

    if (VAR_4 == 2)
        *VAR_1 = *VAR_1 + 1;
}
