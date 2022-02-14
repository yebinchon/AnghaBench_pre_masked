
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static int
FUNC_1(uint16_t *VAR_1, uint16_t *VAR_2, int VAR_3)
{
 uint16_t VAR_4, VAR_5;

 while (VAR_3 > 0) {
  VAR_4 = FUNC_0(*VAR_1);
  VAR_5 = FUNC_0(*VAR_2);
  if (VAR_4 == 0 || VAR_5 == 0)
   return VAR_4 == VAR_5;
  if (VAR_4 > 255 || VAR_5 > 255)
   return 0;
  VAR_4 = VAR_0[VAR_4 & 0xff];
  VAR_5 = VAR_0[VAR_5 & 0xff];
  if (VAR_4 != VAR_5)
   return 0;
  ++VAR_1;
  ++VAR_2;
  --VAR_3;
 }

 return 1;
}
