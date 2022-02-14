
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;



int32_t
FUNC_0(void)
{
 uint32_t VAR_0;
 const uint32_t VAR_1 = 0xFFFF1D;
 static uint32_t VAR_2 = 1;

 if (VAR_2 & 1) {
  VAR_2 += VAR_1;
 }
 VAR_2 /= 2;

 VAR_0 = VAR_2;



 VAR_0 ^= 0x800000;
 if (VAR_0 & 0x800000) {
  VAR_0 |= (-0x800000);
 }
 return VAR_0;
}
