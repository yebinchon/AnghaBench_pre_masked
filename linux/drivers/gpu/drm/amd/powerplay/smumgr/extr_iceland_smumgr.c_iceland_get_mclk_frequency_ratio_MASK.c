
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint8_t FUNC_0(uint32_t VAR_0,
  bool VAR_1)
{
 uint8_t VAR_2;

 if (VAR_1) {
  if (VAR_0 < 12500) {
   VAR_2 = 0x00;
  } else if (VAR_0 > 47500) {
   VAR_2 = 0x0f;
  } else {
   VAR_2 = (uint8_t)((VAR_0 - 10000) / 2500);
  }
 } else {
  if (VAR_0 < 65000) {
   VAR_2 = 0x00;
  } else if (VAR_0 > 135000) {
   VAR_2 = 0x0f;
  } else {
   VAR_2 = (uint8_t)((VAR_0 - 60000) / 5000);
  }
 }

 return VAR_2;
}
