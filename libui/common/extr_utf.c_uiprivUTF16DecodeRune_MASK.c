
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;

const uint16_t *FUNC_0(const uint16_t *VAR_1, size_t VAR_2, uint32_t *VAR_3)
{
 uint16_t VAR_4, VAR_5;

 if (*VAR_1 < 0xD800 || *VAR_1 >= 0xE000) {

  *VAR_3 = *VAR_1;
  VAR_1++;
  return VAR_1;
 }
 if (*VAR_1 >= 0xDC00) {

  *VAR_3 = VAR_0;
  VAR_1++;
  return VAR_1;
 }
 if (VAR_2 == 1) {
  *VAR_3 = VAR_0;
  VAR_1++;
  return VAR_1;
 }
 VAR_4 = *VAR_1;
 VAR_4 &= 0x3FF;
 if (VAR_1[1] < 0xDC00 || VAR_1[1] >= 0xE000) {

  *VAR_3 = VAR_0;
  VAR_1++;
  return VAR_1;
 }
 VAR_1++;
 VAR_5 = *VAR_1;
 VAR_1++;
 VAR_5 &= 0x3FF;
 *VAR_3 = VAR_4;
 *VAR_3 <<= 10;
 *VAR_3 |= VAR_5;
 *VAR_3 += 0x10000;
 return VAR_1;
}
