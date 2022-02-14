
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(u32 VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = (VAR_3 >> VAR_2) & VAR_1;
 VAR_5 = VAR_3 & VAR_0;
 switch (VAR_4) {
 case 1:
  if (VAR_5 == 0x1e || VAR_5 == 0x1f)
   return 1;
  if (VAR_5 == 0x28 || VAR_5 == 0x2b)
   return 2;
  break;
 case 2:
  if (VAR_5 == 0x20)
   return 1;
  break;
 case 3:
  if (VAR_5 == 0xc || VAR_5 == 0xd)
   return 1;
  if (VAR_5 == 0x11)
   return 2;
  break;
 case 4:
  if (VAR_5 == 0x10)
   return 1;
  break;
 }
 return 0;
}
