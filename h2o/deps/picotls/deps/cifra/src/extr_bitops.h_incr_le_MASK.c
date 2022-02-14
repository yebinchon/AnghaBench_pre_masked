
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static inline void FUNC_0(uint8_t *VAR_0, size_t VAR_1)
{
  size_t VAR_2 = 0;
  while (1)
  {
    if (++VAR_0[VAR_2] != 0)
      return;
    VAR_2++;
    if (VAR_2 == VAR_1)
      return;
  }
}
