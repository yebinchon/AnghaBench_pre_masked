
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static inline int FUNC_1(uint8_t *VAR_0, size_t VAR_1)
{
    uint8_t *const VAR_2 = VAR_0 + VAR_1, *VAR_3 = VAR_0;

    if (VAR_0 == VAR_2)
        return 0;

    do {
        size_t VAR_4 = *VAR_0++;
        if (VAR_2 - VAR_0 < VAR_4)
            return 0;
        FUNC_0(VAR_3, VAR_0, VAR_4);
        VAR_3 += VAR_4;
        VAR_0 += VAR_4;
    } while (VAR_0 != VAR_2);
    *VAR_3 = '\0';

    return 1;
}
