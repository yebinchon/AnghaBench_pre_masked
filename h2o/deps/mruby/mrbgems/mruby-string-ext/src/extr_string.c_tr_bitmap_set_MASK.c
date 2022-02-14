
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline void
FUNC_0(uint8_t VAR_0[32], uint8_t VAR_1)
{
  uint8_t VAR_2 = VAR_1 / 8;
  uint8_t VAR_3 = VAR_1 % 8;
  VAR_0[VAR_2] |= (1<<VAR_3);
}
