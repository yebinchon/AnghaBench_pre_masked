
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;

size_t FUNC_0(char **VAR_1, size_t VAR_2)
{
    uint64_t VAR_3, VAR_4;
    char *VAR_5 = *VAR_1, *VAR_6 = *VAR_1 + VAR_2;

    if (VAR_2 == 0)
        goto Error;

    int VAR_7 = *VAR_5++;
    if (!('0' <= VAR_7 && VAR_7 <= '9'))
        goto Error;
    VAR_3 = VAR_7 - '0';
    VAR_4 = 1;

    while (1) {
        VAR_7 = *VAR_5;
        if (!('0' <= VAR_7 && VAR_7 <= '9'))
            break;
        VAR_3 *= 10;
        VAR_3 += VAR_7 - '0';
        VAR_5++;
        VAR_4++;
        if (VAR_5 == VAR_6)
            break;

        if (VAR_4 == 20)
            goto Error;
    }

    if (VAR_3 >= VAR_0)
        goto Error;
    *VAR_1 = VAR_5;
    return VAR_3;

Error:
    return VAR_0;
}
