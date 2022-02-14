
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int* VAR_0 ;

void
FUNC_0(uint8_t *VAR_1, uint32_t VAR_2, uint32_t *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = *VAR_3 ^ 0xFFFFFFFFUL;
 while (VAR_2--) {
  VAR_4 = VAR_0[(VAR_4 ^ *VAR_1++) & 0xff] ^ (VAR_4 >> 8);
 }
 *VAR_3 = VAR_4 ^ 0xFFFFFFFFUL;
}
