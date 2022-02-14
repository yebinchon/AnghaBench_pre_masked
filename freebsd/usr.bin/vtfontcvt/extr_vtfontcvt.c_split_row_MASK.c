
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(uint8_t *VAR_2, uint8_t *VAR_3, uint8_t *VAR_4, size_t VAR_5)
{
 size_t VAR_6, VAR_7;

 VAR_6 = VAR_0 * 8 - VAR_1;

 FUNC_0(VAR_2, VAR_4, VAR_0);
 *(VAR_2 + VAR_0 - 1) &= 0xFF << VAR_6;

 if (VAR_5 > VAR_1) {
  uint8_t VAR_8;

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   VAR_8 = *(VAR_4 + VAR_0 + VAR_7 - 1);
   VAR_8 <<= 8 - VAR_6;
   VAR_8 |= *(VAR_4 + VAR_0 + VAR_7) >> VAR_6;
   *(VAR_3 + VAR_7) = VAR_8;
  }
  *(VAR_3 + VAR_0 - 1) &= 0xFF << VAR_6;
 }
 return (0);
}
