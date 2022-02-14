
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u8 *VAR_0, u8 VAR_1)
{
 int VAR_2;
 u16 VAR_3 = 0xffff;

 while (VAR_1--) {
  VAR_3 ^= *VAR_0++;
  for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
   if (VAR_3 & 0x01) {
    VAR_3 >>= 1;
    VAR_3 ^= 0xA001;
   } else {
    VAR_3 >>= 1;
   }
  }
 }

 return VAR_3;
}
