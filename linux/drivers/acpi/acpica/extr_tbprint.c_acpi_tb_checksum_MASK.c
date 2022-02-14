
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;



u8 FUNC_0(u8 *VAR_0, u32 VAR_1)
{
 u8 VAR_2 = 0;
 u8 *VAR_3 = VAR_0 + VAR_1;

 while (VAR_0 < VAR_3) {
  VAR_2 = (u8)(VAR_2 + *(VAR_0++));
 }

 return (VAR_2);
}
