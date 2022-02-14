
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;



__attribute__((used)) static void FUNC_0(int *VAR_0, int VAR_1, uint32_t *VAR_2)
{
 unsigned int VAR_3;
 if (!VAR_0)
  return;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_2[VAR_3 / 32] & (1U << (VAR_3 % 32)))
   VAR_0[VAR_3]++;
}
