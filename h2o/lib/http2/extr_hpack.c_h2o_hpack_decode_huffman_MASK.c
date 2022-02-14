
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* FUNC_0 (char*,int const,int*,int*,int*) ;

size_t FUNC_1(char *VAR_7, const uint8_t *VAR_8, size_t VAR_9, int VAR_10, const char **VAR_11)
{
    char *VAR_12 = VAR_7;
    const uint8_t *VAR_13 = VAR_8 + VAR_9;
    uint8_t VAR_14 = 0, VAR_15 = 0;
    int VAR_16 = 1;


    for (; VAR_8 < VAR_13; VAR_8++) {
        if ((VAR_12 = FUNC_0(VAR_12, *VAR_8 >> 4, &VAR_14, &VAR_16, &VAR_15)) == ((void*)0))
            return VAR_3;
        if ((VAR_12 = FUNC_0(VAR_12, *VAR_8 & 0xf, &VAR_14, &VAR_16, &VAR_15)) == ((void*)0))
            return VAR_3;
    }
    if (!VAR_16)
        return VAR_3;


    if (VAR_10) {
        if (VAR_12 == VAR_7)
            return VAR_3;

        if ((VAR_15 & VAR_0) != 0 && VAR_7[0] != ':') {
            if ((VAR_15 & VAR_2) != 0) {
                *VAR_11 = VAR_4;
                return VAR_3;
            } else {
                *VAR_11 = VAR_5;
            }
        }
    } else {
        if ((VAR_15 & VAR_1) != 0)
            *VAR_11 = VAR_6;
    }

    return VAR_12 - VAR_7;
}
