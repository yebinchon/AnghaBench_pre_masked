
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;

size_t FUNC_0(uint32_t VAR_1, char *VAR_2)
{
 uint8_t VAR_3, VAR_4, VAR_5, VAR_6;
 size_t VAR_7;


 if (VAR_1 > 0x10FFFF)
  VAR_1 = VAR_0;

 if (VAR_1 >= 0xD800 && VAR_1 < 0xE000)
  VAR_1 = VAR_0;

 if (VAR_1 < 0x80) {
  VAR_3 = (uint8_t) (VAR_1 & 0xFF);
  VAR_7 = 1;
  goto done;
 }
 if (VAR_1 < 0x800) {
  VAR_4 = (uint8_t) (VAR_1 & 0x3F);
  VAR_4 |= 0x80;
  VAR_1 >>= 6;
  VAR_3 = (uint8_t) (VAR_1 & 0x1F);
  VAR_3 |= 0xC0;
  VAR_7 = 2;
  goto done;
 }
 if (VAR_1 < 0x10000) {
  VAR_5 = (uint8_t) (VAR_1 & 0x3F);
  VAR_5 |= 0x80;
  VAR_1 >>= 6;
  VAR_4 = (uint8_t) (VAR_1 & 0x3F);
  VAR_4 |= 0x80;
  VAR_1 >>= 6;
  VAR_3 = (uint8_t) (VAR_1 & 0x0F);
  VAR_3 |= 0xE0;
  VAR_7 = 3;
  goto done;
 }

 VAR_6 = (uint8_t) (VAR_1 & 0x3F);
 VAR_6 |= 0x80;
 VAR_1 >>= 6;
 VAR_5 = (uint8_t) (VAR_1 & 0x3F);
 VAR_5 |= 0x80;
 VAR_1 >>= 6;
 VAR_4 = (uint8_t) (VAR_1 & 0x3F);
 VAR_4 |= 0x80;
 VAR_1 >>= 6;
 VAR_3 = (uint8_t) (VAR_1 & 0x07);
 VAR_3 |= 0xF0;
 VAR_7 = 4;

done:
 VAR_2[0] = VAR_3;
 if (VAR_7 > 1)
  VAR_2[1] = VAR_4;
 if (VAR_7 > 2)
  VAR_2[2] = VAR_5;
 if (VAR_7 > 3)
  VAR_2[3] = VAR_6;
 return VAR_7;
}
