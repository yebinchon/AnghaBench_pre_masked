
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline void FUNC_0(uint8_t *VAR_0, const uint8_t *VAR_1, size_t VAR_2, uint8_t VAR_3)
{
  uint8_t VAR_4 = VAR_3 / 8;
  uint8_t VAR_5 = VAR_3 & 7;
  uint8_t VAR_6 = (1 << VAR_5) - 1;
  uint8_t VAR_7 = ~VAR_6;
  size_t VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  {
    VAR_0[VAR_8] = (VAR_1[VAR_8 + VAR_4] << VAR_5) & VAR_7;
    VAR_0[VAR_8] |= (VAR_1[VAR_8 + VAR_4 + 1] >> (8 - VAR_5)) & VAR_6;
  }
}
