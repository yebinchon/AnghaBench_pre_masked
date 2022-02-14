
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;


 int* VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(uint8_t* VAR_1, uint32_t VAR_2)
{
 register int VAR_3;
 uint32_t VAR_4;
 register uint32_t VAR_5;
 VAR_5 = ~0;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  VAR_5 = (VAR_5 >> 8) ^ VAR_0[(uint8_t) (VAR_5 & 0xFF) ^ VAR_1[VAR_3]];
 }
 VAR_4 = ~VAR_5;
 return VAR_4;
}
