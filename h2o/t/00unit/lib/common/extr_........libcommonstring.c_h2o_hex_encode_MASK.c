
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(char *VAR_0, const void *VAR_1, size_t VAR_2)
{
    const unsigned char *VAR_3 = VAR_1, *VAR_4 = VAR_3 + VAR_2;
    for (; VAR_3 != VAR_4; ++VAR_3) {
        *VAR_0++ = "0123456789abcdef"[*VAR_3 >> 4];
        *VAR_0++ = "0123456789abcdef"[*VAR_3 & 0xf];
    }
    *VAR_0 = '\0';
}
