
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int64_t FUNC_0(const uint8_t **VAR_3, const uint8_t *VAR_4, unsigned VAR_5)
{
    uint64_t VAR_6;
    unsigned VAR_7;
    uint8_t VAR_8 = (1 << VAR_5) - 1;

    if (*VAR_3 >= VAR_4)
        return VAR_1;

    VAR_6 = *(*VAR_3)++ & VAR_8;
    if (VAR_6 != VAR_8)
        return (int64_t)VAR_6;


    VAR_6 = VAR_8;
    for (VAR_7 = 0; VAR_7 < 56; VAR_7 += 7) {
        if (*VAR_3 == VAR_4)
            return VAR_1;
        VAR_6 += (uint64_t)(**VAR_3 & 127) << VAR_7;
        if ((*(*VAR_3)++ & 128) == 0)
            return (int64_t)VAR_6;
    }

    if (*VAR_3 == VAR_4)
        return VAR_1;
    if ((**VAR_3 & 128) != 0)
        return VAR_0;
    VAR_6 += (uint64_t)(*(*VAR_3)++ & 127) << VAR_7;
    if (VAR_6 > (uint64_t)VAR_2)
        return VAR_0;
    return VAR_6;
}
