
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(char *VAR_0, const char *VAR_1, size_t VAR_2, int VAR_3, int VAR_4)
{
    const char *VAR_5 = VAR_1 + VAR_2;
    int VAR_6;


    if (VAR_3 <= 0 || VAR_4 <= 0)
        return -1;
    for (--VAR_3; VAR_3 != 0; --VAR_3) {
        do {
            if (VAR_1 == VAR_5)
                return -1;
        } while (*VAR_1++ != '\n');
    }


    while (VAR_4 > 40) {
        if (VAR_1 != VAR_5)
            ++VAR_1;
        --VAR_4;
    }


    for (VAR_6 = 1; VAR_6 <= 76; ++VAR_6) {
        if (VAR_1 == VAR_5 || *VAR_1 == '\n')
            break;
        *VAR_0++ = *VAR_1++;
    }
    if (VAR_6 < VAR_4)
        VAR_4 = VAR_6;
    *VAR_0++ = '\n';
    for (VAR_6 = 1; VAR_6 < VAR_4; ++VAR_6)
        *VAR_0++ = ' ';
    *VAR_0++ = '^';
    *VAR_0++ = '\n';
    *VAR_0 = '\0';
    return 0;
}
