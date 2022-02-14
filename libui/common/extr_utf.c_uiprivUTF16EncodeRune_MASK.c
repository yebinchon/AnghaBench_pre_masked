
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;

size_t FUNC_0(uint32_t VAR_1, uint16_t *VAR_2)
{
 uint16_t VAR_3, VAR_4;


 if (VAR_1 > 0x10FFFF)
  VAR_1 = VAR_0;

 if (VAR_1 >= 0xD800 && VAR_1 < 0xE000)
  VAR_1 = VAR_0;

 if (VAR_1 < 0x10000) {
  VAR_2[0] = (uint16_t) VAR_1;
  return 1;
 }

 VAR_1 -= 0x10000;
 VAR_3 = (uint16_t) (VAR_1 & 0x3FF);
 VAR_1 >>= 10;
 VAR_4 = (uint16_t) (VAR_1 & 0x3FF);
 VAR_2[0] = VAR_4 | 0xD800;
 VAR_2[1] = VAR_3 | 0xDC00;
 return 2;
}
