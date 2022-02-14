
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int* VAR_0 ;

uint32_t FUNC_0(uint32_t VAR_1, uint8_t *VAR_2, size_t VAR_3)
{
 while (VAR_3--)
  VAR_1 = (VAR_1 >> 8) ^ VAR_0[(VAR_1 ^ *VAR_2++) & 0xFF];

 return VAR_1;
}
