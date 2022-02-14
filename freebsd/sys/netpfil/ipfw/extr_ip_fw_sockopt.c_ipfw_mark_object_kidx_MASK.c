
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(uint32_t *VAR_2, uint16_t VAR_3, uint16_t VAR_4)
{
 uint32_t VAR_5;




 VAR_5 = (VAR_3 == VAR_1) ? 0: VAR_0 / 32;
 VAR_5 += VAR_4 / 32;
 if ((VAR_2[VAR_5] & (1 << (VAR_4 % 32))) != 0)
  return (0);

 VAR_2[VAR_5] |= 1 << (VAR_4 % 32);
 return (1);
}
