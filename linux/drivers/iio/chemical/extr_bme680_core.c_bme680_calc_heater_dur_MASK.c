
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static u8 FUNC_0(u16 VAR_0)
{
 u8 VAR_1, VAR_2 = 0;

 if (VAR_0 >= 0xfc0) {
  VAR_1 = 0xff;
 } else {
  while (VAR_0 > 0x3F) {
   VAR_0 = VAR_0 / 4;
   VAR_2 += 1;
  }
  VAR_1 = VAR_0 + (VAR_2 * 64);
 }

 return VAR_1;
}
