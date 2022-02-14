
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;

u16 FUNC_0(u16 VAR_1)
{
 int VAR_2 = VAR_0;
 u16 VAR_3 = VAR_2;

 while (VAR_1 && VAR_2) {
  if (VAR_1 & (1 << (VAR_2 - 1))) {
   VAR_3 = VAR_2;
   break;
  }
  VAR_2--;
 }

 return VAR_3;
}
