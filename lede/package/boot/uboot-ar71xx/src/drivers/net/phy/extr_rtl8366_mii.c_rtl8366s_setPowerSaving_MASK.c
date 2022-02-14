
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int*) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int) ;

int FUNC_2(uint32_t VAR_1, uint32_t VAR_2)
{
    uint16_t VAR_3;

    if (VAR_1 > VAR_0)
        return -1;

    if (FUNC_0(VAR_1, 12, &VAR_3))
        return -1;

    if (VAR_2)
        VAR_3 |= (1 << 12);
    else
        VAR_3 &= ~(1 << 12);

    if (FUNC_1(VAR_1, 12, VAR_3))
        return -1;

    return 0;
}
