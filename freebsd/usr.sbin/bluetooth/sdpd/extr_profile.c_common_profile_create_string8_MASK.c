
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int,int const*) ;
 int FUNC_1 (int const*,int const*,int) ;

int32_t
FUNC_2(
  uint8_t *VAR_1, uint8_t const * const VAR_2,
  uint8_t const *VAR_3, uint32_t VAR_4)
{
 if (VAR_4 == 0 || VAR_4 > 0xff || VAR_1 + 2 + VAR_4 > VAR_2)
  return (-1);

 FUNC_0(VAR_0, VAR_1);
 FUNC_0(VAR_4, VAR_1);
 FUNC_1(VAR_1, VAR_3, VAR_4);

 return (2 + VAR_4);
}
