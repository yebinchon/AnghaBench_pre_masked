
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



char *FUNC_0(char *VAR_0, const void *VAR_1, size_t VAR_2)
{
    char *VAR_3 = VAR_0;
    const uint8_t *VAR_4 = VAR_1;
    size_t VAR_5;

    for (VAR_5 = 0; VAR_5 != VAR_2; ++VAR_5) {
        *VAR_3++ = "0123456789abcdef"[VAR_4[VAR_5] >> 4];
        *VAR_3++ = "0123456789abcdef"[VAR_4[VAR_5] & 0xf];
    }
    *VAR_3++ = '\0';
    return VAR_0;
}
