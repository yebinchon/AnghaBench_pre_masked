
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int security_descr ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int *,int const*,int) ;

int32_t
FUNC_3(
  uint8_t *VAR_1, uint8_t const * const VAR_2,
  uint8_t const *VAR_3, uint32_t VAR_4)
{
 uint16_t VAR_5;

 if (VAR_4 != 2 || VAR_1 + 3 > VAR_2)
  return (-1);

 FUNC_2(&VAR_5, VAR_3, sizeof(VAR_5));

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_5, VAR_1);

        return (3);
}
