
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;

const char *FUNC_0(const char *VAR_1, size_t VAR_2, uint32_t *VAR_3)
{
 uint8_t VAR_4, VAR_5;
 uint8_t VAR_6, VAR_7;
 size_t VAR_8, VAR_9;
 int VAR_10;

 VAR_4 = (uint8_t) (*VAR_1);
 if (VAR_4 < 0x80) {
  *VAR_3 = VAR_4;
  VAR_1++;
  return VAR_1;
 }



 if (VAR_4 < 0xC2 || VAR_4 > 0xF4) {
  *VAR_3 = VAR_0;
  VAR_1++;
  return VAR_1;
 }


 VAR_6 = 0x80;
 VAR_7 = 0xBF;
 switch (VAR_4) {
 case 0xE0:

  VAR_6 = 0xA0;
  break;
 case 0xED:

  VAR_7 = 0x9F;
  break;
 case 0xF0:

  VAR_6 = 0x90;
  break;
 case 0xF4:

  VAR_7 = 0x8F;
  break;
 }


 VAR_9 = 1;
 if (VAR_4 >= 0xE0)
  VAR_9++;
 if (VAR_4 >= 0xF0)
  VAR_9++;
 if (VAR_2 != 0) {
  VAR_2--;
  if (VAR_2 < VAR_9) {
   *VAR_3 = VAR_0;
   VAR_1++;
   return VAR_1;
  }
 }



 VAR_10 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_5 = (uint8_t) (VAR_1[1 + VAR_8]);
  if (VAR_5 < VAR_6 || VAR_5 > VAR_7) {
   VAR_10 = 1;
   break;
  }

  VAR_6 = 0x80;
  VAR_7 = 0xBF;
 }
 if (VAR_10) {
  *VAR_3 = VAR_0;
  VAR_1++;
  return VAR_1;
 }


 if (VAR_4 < 0xE0)
  *VAR_3 = VAR_4 & 0x1F;
 else if (VAR_4 < 0xF0)
  *VAR_3 = VAR_4 & 0x0F;
 else
  *VAR_3 = VAR_4 & 0x07;
 VAR_1++;


 for (; VAR_9; VAR_9--) {
  VAR_5 = (uint8_t) (*VAR_1);
  VAR_1++;
  VAR_5 &= 0x3F;
  *VAR_3 <<= 6;
  *VAR_3 |= VAR_5;
 }

 return VAR_1;
}
