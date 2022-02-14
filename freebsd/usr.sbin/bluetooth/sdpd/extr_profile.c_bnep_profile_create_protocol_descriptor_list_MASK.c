
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ptype ;
typedef int psm ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int const*) ;
 int FUNC_1 (int,int const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int*,int const*,int) ;

int32_t
FUNC_3(
  uint8_t *VAR_5, uint8_t const * const VAR_6,
  uint8_t const *VAR_7, uint32_t VAR_8)
{

 uint16_t VAR_9[] = {
  0x0800,
  0x0806,



 };

 uint16_t VAR_10, VAR_11, VAR_12 = 0x0100,
    VAR_13 = sizeof(VAR_9)/sizeof(VAR_9[0]),
    VAR_14 = VAR_13 * 3;

 if (VAR_8 != 2 || 18 + VAR_14 > 255 ||
     VAR_5 + 20 + VAR_14 > VAR_6)
  return (-1);

 FUNC_2(&VAR_11, VAR_7, sizeof(VAR_11));

 FUNC_1(VAR_0, VAR_5);
 FUNC_1(18 + VAR_14, VAR_5);

 FUNC_1(VAR_0, VAR_5);
 FUNC_1(6, VAR_5);
 FUNC_1(VAR_2, VAR_5);
 FUNC_0(VAR_4, VAR_5);
 FUNC_1(VAR_1, VAR_5);
 FUNC_0(VAR_11, VAR_5);

 FUNC_1(VAR_0, VAR_5);
 FUNC_1(8 + VAR_14, VAR_5);
 FUNC_1(VAR_2, VAR_5);
 FUNC_0(VAR_3, VAR_5);
 FUNC_1(VAR_1, VAR_5);
 FUNC_0(VAR_12, VAR_5);
 FUNC_1(VAR_0, VAR_5);
 FUNC_1(VAR_14, VAR_5);
 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10 ++) {
  FUNC_1(VAR_1, VAR_5);
  FUNC_0(VAR_9[VAR_10], VAR_5);
 }

 return (20 + VAR_14);
}
