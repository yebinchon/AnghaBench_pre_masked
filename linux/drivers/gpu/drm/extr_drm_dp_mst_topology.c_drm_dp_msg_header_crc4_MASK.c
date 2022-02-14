
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(const uint8_t *VAR_0, size_t VAR_1)
{
 u8 VAR_2 = 0x80;
 u8 VAR_3 = 7;
 u8 VAR_4 = 0;
 int VAR_5 = VAR_1 * 4;
 u8 VAR_6 = 0;

 while (VAR_5 != 0) {
  VAR_5--;
  VAR_6 <<= 1;
  VAR_6 |= (VAR_0[VAR_4] & VAR_2) >> VAR_3;
  VAR_2 >>= 1;
  VAR_3--;
  if (VAR_2 == 0) {
   VAR_2 = 0x80;
   VAR_3 = 7;
   VAR_4++;
  }
  if ((VAR_6 & 0x10) == 0x10)
   VAR_6 ^= 0x13;
 }

 VAR_5 = 4;
 while (VAR_5 != 0) {
  VAR_5--;
  VAR_6 <<= 1;
  if ((VAR_6 & 0x10) != 0)
   VAR_6 ^= 0x13;
 }

 return VAR_6;
}
