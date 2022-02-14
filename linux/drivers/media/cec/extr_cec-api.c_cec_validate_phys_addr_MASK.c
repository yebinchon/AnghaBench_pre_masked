
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(u16 VAR_2)
{
 int VAR_3;

 if (VAR_2 == VAR_0)
  return 0;
 for (VAR_3 = 0; VAR_3 < 16; VAR_3 += 4)
  if (VAR_2 & (0xf << VAR_3))
   break;
 if (VAR_3 == 16)
  return 0;
 for (VAR_3 += 4; VAR_3 < 16; VAR_3 += 4)
  if ((VAR_2 & (0xf << VAR_3)) == 0)
   return -VAR_1;
 return 0;
}
