
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
 int VAR_2 ;
 int FUNC_0 (int const,int const*) ;
 int FUNC_1 (int,int const*) ;

int32_t
FUNC_2(
  uint8_t *VAR_3, uint8_t const * const VAR_4,
  uint8_t const *VAR_5, uint32_t VAR_6)
{
 int32_t VAR_7 = 8 * (VAR_6 >>= 2);

 if (VAR_7 <= 0 || VAR_7 > 0xff || VAR_3 + 2 + VAR_7 > VAR_4)
  return (-1);

 FUNC_1(VAR_0, VAR_3);
 FUNC_1(VAR_7, VAR_3);

 for (; VAR_6 > 0; VAR_6 --) {
  FUNC_1(VAR_0, VAR_3);
  FUNC_1(6, VAR_3);
  FUNC_1(VAR_2, VAR_3);
  FUNC_0(*((uint16_t const *)VAR_5), VAR_3);
  VAR_5 += sizeof(uint16_t);
  FUNC_1(VAR_1, VAR_3);
  FUNC_0(*((uint16_t const *)VAR_5), VAR_3);
  VAR_5 += sizeof(uint16_t);
 }

 return (2 + VAR_7);
}
