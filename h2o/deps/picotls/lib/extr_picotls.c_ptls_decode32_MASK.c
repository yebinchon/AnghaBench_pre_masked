
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;

int FUNC_1(uint32_t *VAR_1, const uint8_t **VAR_2, const uint8_t *VAR_3)
{
    if (VAR_3 - *VAR_2 < 4)
        return VAR_0;
    *VAR_1 = FUNC_0(*VAR_2);
    *VAR_2 += 4;
    return 0;
}
