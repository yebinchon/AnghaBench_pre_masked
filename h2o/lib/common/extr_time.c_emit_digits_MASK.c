
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(char *VAR_0, int VAR_1, size_t VAR_2)
{
    char *VAR_3 = VAR_0 + VAR_2;


    do {
        *--VAR_3 = '0' + VAR_1 % 10;
        VAR_1 /= 10;
    } while (VAR_3 != VAR_0);

    return VAR_0 + VAR_2;
}
