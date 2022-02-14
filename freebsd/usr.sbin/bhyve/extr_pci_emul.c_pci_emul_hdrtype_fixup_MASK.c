
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_2, int VAR_3, int VAR_4, int VAR_5, uint32_t *VAR_6)
{
 int VAR_7;

 if (VAR_4 <= VAR_1 && VAR_4 + VAR_5 > VAR_1) {
  VAR_7 = FUNC_0(VAR_2, VAR_3);
  switch (VAR_5) {
  case 1:
  case 2:
   *VAR_6 &= ~VAR_0;
   if (VAR_7) {
    *VAR_6 |= VAR_0;
   }
   break;
  case 4:
   *VAR_6 &= ~(VAR_0 << 16);
   if (VAR_7) {
    *VAR_6 |= (VAR_0 << 16);
   }
   break;
  }
 }
}
