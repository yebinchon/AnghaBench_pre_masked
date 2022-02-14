
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



u8 FUNC_0(u32 VAR_0, bool VAR_1)
{
 u8 VAR_2 = 0;




 if (VAR_1)
  VAR_2 = 1;
 VAR_0 >>= 2;
 while (VAR_0 >>= 1)
  VAR_2++;
 return VAR_2;
}
