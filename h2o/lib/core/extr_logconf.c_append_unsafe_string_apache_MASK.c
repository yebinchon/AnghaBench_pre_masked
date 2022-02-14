
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(char *VAR_0, const char *VAR_1, size_t VAR_2)
{
    const char *VAR_3 = VAR_1 + VAR_2;

    for (; VAR_1 != VAR_3; ++VAR_1) {
        if (' ' <= *VAR_1 && *VAR_1 < 0x7d && *VAR_1 != '"') {
            *VAR_0++ = *VAR_1;
        } else {
            *VAR_0++ = '\\';
            *VAR_0++ = 'x';
            *VAR_0++ = ("0123456789abcdef")[(*VAR_1 >> 4) & 0xf];
            *VAR_0++ = ("0123456789abcdef")[*VAR_1 & 0xf];
        }
    }

    return VAR_0;
}
