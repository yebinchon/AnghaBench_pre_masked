
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint8_t FUNC_0(uint32_t VAR_0)
{
 uint8_t VAR_1;

 if (VAR_0 < 10000) {
  VAR_1 = 0;
 } else if (VAR_0 >= 80000) {
  VAR_1 = 0x0f;
 } else {
  VAR_1 = (uint8_t)((VAR_0 - 10000) / 5000 + 1);
 }

 return VAR_1;
}
