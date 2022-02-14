
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;

int
FUNC_1(size_t *VAR_2, unsigned char *VAR_3,
           size_t VAR_4, size_t VAR_5, size_t VAR_6)
{
    unsigned char *VAR_7;
    size_t VAR_8;
    size_t VAR_9;
    size_t VAR_10;
    volatile unsigned char VAR_11;
    unsigned char VAR_12;

    if (VAR_5 <= 0U) {
        return -1;
    }
    VAR_9 = VAR_5 - 1U;
    if ((VAR_5 & (VAR_5 - 1U)) == 0U) {
        VAR_9 -= VAR_4 & (VAR_5 - 1U);
    } else {
        VAR_9 -= VAR_4 % VAR_5;
    }
    if ((size_t) VAR_1 - VAR_4 <= VAR_9) {
        FUNC_0();
    }
    VAR_10 = VAR_4 + VAR_9;
    if (VAR_10 >= VAR_6) {
        return -1;
    }
    VAR_7 = &VAR_3[VAR_10];
    if (VAR_2 != ((void*)0)) {
        *VAR_2 = VAR_10 + 1U;
    }
    VAR_11 = 0U;
    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        VAR_12 = (unsigned char) (((VAR_8 ^ VAR_9) - 1U)
           >> ((sizeof(size_t) - 1) * VAR_0));
        *(VAR_7 - VAR_8) = ((*(VAR_7 - VAR_8)) & VAR_11) | (0x80 & VAR_12);
        VAR_11 |= VAR_12;
    }
    return 0;
}
