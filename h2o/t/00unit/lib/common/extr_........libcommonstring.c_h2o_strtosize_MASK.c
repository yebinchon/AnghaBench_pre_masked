
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;

size_t FUNC_0(const char *VAR_1, size_t VAR_2)
{
    uint64_t VAR_3 = 0, VAR_4 = 1;
    const char *VAR_5 = VAR_1 + VAR_2;

    if (VAR_2 == 0)
        goto Error;

    while (1) {
        int VAR_6 = *--VAR_5;
        if (!('0' <= VAR_6 && VAR_6 <= '9'))
            goto Error;
        VAR_3 += (VAR_6 - '0') * VAR_4;
        if (VAR_5 == VAR_1)
            break;
        VAR_4 *= 10;

        if (VAR_4 == 10000000000000000000ULL)
            goto Error;
    }

    if (VAR_3 >= VAR_0)
        goto Error;
    return VAR_3;

Error:
    return VAR_0;
}
