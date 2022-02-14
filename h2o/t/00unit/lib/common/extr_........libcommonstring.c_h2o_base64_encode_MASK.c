
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



size_t FUNC_0(char *VAR_0, const void *VAR_1, size_t VAR_2, int VAR_3)
{
    static const char *VAR_4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                             "abcdefghijklmnopqrstuvwxyz"
                             "0123456789+/";
    static const char *VAR_5 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                         "abcdefghijklmnopqrstuvwxyz"
                                         "0123456789-_";

    char *VAR_6 = VAR_0;
    const uint8_t *VAR_7 = VAR_1;
    const char *VAR_8 = VAR_3 ? VAR_5 : VAR_4;
    uint32_t VAR_9;

    for (; VAR_2 >= 3; VAR_7 += 3, VAR_2 -= 3) {
        VAR_9 = ((uint32_t)VAR_7[0] << 16) | ((uint32_t)VAR_7[1] << 8) | VAR_7[2];
        *VAR_6++ = VAR_8[VAR_9 >> 18];
        *VAR_6++ = VAR_8[(VAR_9 >> 12) & 63];
        *VAR_6++ = VAR_8[(VAR_9 >> 6) & 63];
        *VAR_6++ = VAR_8[VAR_9 & 63];
    }
    if (VAR_2 != 0) {
        VAR_9 = (uint32_t)VAR_7[0] << 16;
        *VAR_6++ = VAR_8[VAR_9 >> 18];
        if (VAR_2 == 2) {
            VAR_9 |= (uint32_t)VAR_7[1] << 8;
            *VAR_6++ = VAR_8[(VAR_9 >> 12) & 63];
            *VAR_6++ = VAR_8[(VAR_9 >> 6) & 63];
            if (!VAR_3)
                *VAR_6++ = '=';
        } else {
            *VAR_6++ = VAR_8[(VAR_9 >> 12) & 63];
            if (!VAR_3) {
                *VAR_6++ = '=';
                *VAR_6++ = '=';
            }
        }
    }

    *VAR_6 = '\0';
    return VAR_6 - VAR_0;
}
