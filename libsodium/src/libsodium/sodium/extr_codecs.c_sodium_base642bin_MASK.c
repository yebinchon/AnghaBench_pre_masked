
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char const* const,size_t const,size_t*,char const* const,size_t) ;
 unsigned int FUNC_1 (char) ;
 unsigned int FUNC_2 (char) ;
 int VAR_4 ;
 int FUNC_3 (int const) ;
 int * FUNC_4 (char const* const,char const) ;

int
FUNC_5(unsigned char * const VAR_5, const size_t VAR_6,
                  const char * const VAR_7, const size_t VAR_8,
                  const char * const VAR_9, size_t * const VAR_10,
                  const char ** const VAR_11, const int VAR_12)
{
    size_t VAR_13 = (size_t) 0;
    size_t VAR_14 = (size_t) 0;
    size_t VAR_15 = (size_t) 0;
    int VAR_16;
    int VAR_17 = 0;
    unsigned int VAR_18 = 0U;
    unsigned int VAR_19;
    char VAR_20;

    FUNC_3(VAR_12);
    VAR_16 = ((unsigned int) VAR_12) & VAR_3;
    while (VAR_14 < VAR_8) {
        VAR_20 = VAR_7[VAR_14];
        if (VAR_16) {
            VAR_19 = FUNC_2(VAR_20);
        } else {
            VAR_19 = FUNC_1(VAR_20);
        }
        if (VAR_19 == 0xFF) {
            if (VAR_9 != ((void*)0) && FUNC_4(VAR_9, VAR_20) != ((void*)0)) {
                VAR_14++;
                continue;
            }
            break;
        }
        VAR_18 = (VAR_18 << 6) + VAR_19;
        VAR_13 += 6;
        if (VAR_13 >= 8) {
            VAR_13 -= 8;
            if (VAR_15 >= VAR_6) {
                VAR_4 = VAR_1;
                VAR_17 = -1;
                break;
            }
            VAR_5[VAR_15++] = (VAR_18 >> VAR_13) & 0xFF;
        }
        VAR_14++;
    }
    if (VAR_13 > 4U || (VAR_18 & ((1U << VAR_13) - 1U)) != 0U) {
        VAR_17 = -1;
    } else if (VAR_17 == 0 &&
               (((unsigned int) VAR_12) & VAR_2) == 0U) {
        VAR_17 = FUNC_0(VAR_7, VAR_8, &VAR_14, VAR_9,
                                              VAR_13 / 2);
    }
    if (VAR_17 != 0) {
        VAR_15 = (size_t) 0U;
    } else if (VAR_9 != ((void*)0)) {
        while (VAR_14 < VAR_8 && FUNC_4(VAR_9, VAR_7[VAR_14]) != ((void*)0)) {
            VAR_14++;
        }
    }
    if (VAR_11 != ((void*)0)) {
        *VAR_11 = &VAR_7[VAR_14];
    } else if (VAR_14 != VAR_8) {
        VAR_4 = VAR_0;
        VAR_17 = -1;
    }
    if (VAR_10 != ((void*)0)) {
        *VAR_10 = VAR_15;
    }
    return VAR_17;
}
