
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



u8 FUNC_0(u32 VAR_0)
{
 u8 VAR_1;

 if ((VAR_0 < 10000) || (VAR_0 > 47500))
  VAR_1 = 0x00;
 else
  VAR_1 = (u8)((VAR_0 - 10000) / 2500);

 return VAR_1;
}
