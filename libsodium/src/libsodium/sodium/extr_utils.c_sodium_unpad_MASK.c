
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(size_t *VAR_0, const unsigned char *VAR_1,
             size_t VAR_2, size_t VAR_3)
{
    const unsigned char *VAR_4;
    unsigned char VAR_5 = 0U;
    unsigned char VAR_6;
    unsigned char VAR_7 = 0U;
    volatile size_t VAR_8 = 0U;
    size_t VAR_9;
    size_t VAR_10;

    if (VAR_2 < VAR_3 || VAR_3 <= 0U) {
        return -1;
    }
    VAR_4 = &VAR_1[VAR_2 - 1U];

    for (VAR_9 = 0U; VAR_9 < VAR_3; VAR_9++) {
        VAR_6 = *(VAR_4 - VAR_9);
        VAR_10 =
            (( (VAR_5 - 1U) & (VAR_8 - 1U) & ((VAR_6 ^ 0x80) - 1U) ) >> 8) & 1U;
        VAR_5 |= VAR_6;
        VAR_8 |= VAR_9 & (1U + ~VAR_10);
        VAR_7 |= (unsigned char) VAR_10;
    }
    *VAR_0 = VAR_2 - 1U - VAR_8;

    return (int) (VAR_7 - 1U);
}
