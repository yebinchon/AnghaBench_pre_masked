
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int const*) ;
 int FUNC_1 (int,int const*) ;

int32_t
FUNC_2(
  uint8_t *VAR_2, uint8_t const * const VAR_3,
  uint8_t const *VAR_4, uint32_t VAR_5)
{
 int32_t VAR_6 = 3 * (VAR_5 >>= 1);

 if (VAR_6 <= 0 || VAR_6 > 0xff || VAR_2 + 2 + VAR_6 > VAR_3)
  return (-1);

 FUNC_1(VAR_0, VAR_2);
 FUNC_1(VAR_6, VAR_2);

 for (; VAR_5 > 0; VAR_5 --) {
  FUNC_1(VAR_1, VAR_2);
  FUNC_0(*((uint16_t const *)VAR_4), VAR_2);
  VAR_4 += sizeof(uint16_t);
 }

 return (2 + VAR_6);
}
