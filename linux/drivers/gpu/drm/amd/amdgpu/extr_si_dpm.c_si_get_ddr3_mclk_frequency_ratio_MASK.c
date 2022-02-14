
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static u8 FUNC_0(u32 VAR_0)
{
 u8 VAR_1;

 if (VAR_0 < 10000)
  VAR_1 = 0;
 else if (VAR_0 >= 80000)
  VAR_1 = 0x0f;
 else
  VAR_1 = (u8)((VAR_0 - 10000) / 5000 + 1);
 return VAR_1;
}
