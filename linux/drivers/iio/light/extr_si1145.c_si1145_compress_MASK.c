
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static u8 FUNC_0(u16 VAR_0)
{
 u32 VAR_1 = 0;
 u32 VAR_2 = 0;
 u32 VAR_3 = VAR_0;

 if (VAR_0 == 0x0000)
  return 0x00;
 if (VAR_0 == 0x0001)
  return 0x08;

 while (1) {
  VAR_3 >>= 1;
  VAR_1 += 1;
  if (VAR_3 == 1)
   break;
 }

 if (VAR_1 < 5) {
  VAR_2 = VAR_0 << (4 - VAR_1);
  return (VAR_1 << 4) | (VAR_2 & 0xF);
 }

 VAR_2 = VAR_0 >> (VAR_1 - 5);
 if (VAR_2 & 1) {
  VAR_2 += 2;
  if (VAR_2 & 0x0040) {
   VAR_1 += 1;
   VAR_2 >>= 1;
  }
 }

 return (VAR_1 << 4) | ((VAR_2 >> 1) & 0xF);
}
