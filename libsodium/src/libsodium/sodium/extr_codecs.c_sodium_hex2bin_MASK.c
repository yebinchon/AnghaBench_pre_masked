
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char const* const,unsigned char) ;

int
FUNC_1(unsigned char *const VAR_3, const size_t VAR_4,
               const char *const VAR_5, const size_t VAR_6,
               const char *const VAR_7, size_t *const VAR_8,
               const char **const VAR_9)
{
    size_t VAR_10 = (size_t) 0U;
    size_t VAR_11 = (size_t) 0U;
    int VAR_12 = 0;
    unsigned char VAR_13;
    unsigned char VAR_14 = 0U;
    unsigned char VAR_15, VAR_16;
    unsigned char VAR_17, VAR_18;
    unsigned char VAR_19;
    unsigned char VAR_20 = 0U;

    while (VAR_11 < VAR_6) {
        VAR_13 = (unsigned char) VAR_5[VAR_11];
        VAR_18 = VAR_13 ^ 48U;
        VAR_17 = (VAR_18 - 10U) >> 8;
        VAR_16 = (VAR_13 & ~32U) - 55U;
        VAR_15 = ((VAR_16 - 10U) ^ (VAR_16 - 16U)) >> 8;
        if ((VAR_17 | VAR_15) == 0U) {
            if (VAR_7 != ((void*)0) && VAR_20 == 0U && FUNC_0(VAR_7, VAR_13) != ((void*)0)) {
                VAR_11++;
                continue;
            }
            break;
        }
        VAR_19 = (VAR_17 & VAR_18) | (VAR_15 & VAR_16);
        if (VAR_10 >= VAR_4) {
            VAR_12 = -1;
            VAR_2 = VAR_1;
            break;
        }
        if (VAR_20 == 0U) {
            VAR_14 = VAR_19 * 16U;
        } else {
            VAR_3[VAR_10++] = VAR_14 | VAR_19;
        }
        VAR_20 = ~VAR_20;
        VAR_11++;
    }
    if (VAR_20 != 0U) {
        VAR_11--;
        VAR_2 = VAR_0;
        VAR_12 = -1;
    }
    if (VAR_12 != 0) {
        VAR_10 = (size_t) 0U;
    }
    if (VAR_9 != ((void*)0)) {
        *VAR_9 = &VAR_5[VAR_11];
    } else if (VAR_11 != VAR_6) {
        VAR_2 = VAR_0;
        VAR_12 = -1;
    }
    if (VAR_8 != ((void*)0)) {
        *VAR_8 = VAR_10;
    }
    return VAR_12;
}
