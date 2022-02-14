
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

uint16_t
FUNC_0(const uint8_t *VAR_3, size_t VAR_4, uint16_t VAR_5)
{
  size_t VAR_6;
  uint32_t VAR_7;
  uint32_t VAR_8 = VAR_5 << 8;

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
    VAR_8 |= *VAR_3++;
    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
      VAR_8 <<= 1;
      if (VAR_8 & VAR_1) {
        VAR_8 ^= VAR_2;
      }
    }
  }
  return (uint16_t)(VAR_8 >> 8);
}
