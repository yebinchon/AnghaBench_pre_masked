
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u8 VAR_0)
{
 u16 VAR_1 = 0;
 u8 VAR_2 = 0;

 if (VAR_0 < 8)
  return 0;

 VAR_2 = (VAR_0 & 0xf0) >> 4;
 VAR_1 = 0x10 | (VAR_0 & 0x0f);

 if (VAR_2 >= 4)
  return VAR_1 << (VAR_2 - 4);
 return VAR_1 >> (4 - VAR_2);
}
