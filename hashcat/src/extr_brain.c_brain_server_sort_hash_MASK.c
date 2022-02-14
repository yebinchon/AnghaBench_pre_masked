
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;



int FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const u32 *VAR_2 = (const u32 *) VAR_0;
  const u32 *VAR_3 = (const u32 *) VAR_1;

  if (VAR_2[1] > VAR_3[1]) return 1;
  if (VAR_2[1] < VAR_3[1]) return -1;
  if (VAR_2[0] > VAR_3[0]) return 1;
  if (VAR_2[0] < VAR_3[0]) return -1;

  return 0;
}
