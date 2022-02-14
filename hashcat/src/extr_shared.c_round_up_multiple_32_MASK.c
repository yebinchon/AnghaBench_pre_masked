
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u32 ;



u32 FUNC_0 (const u32 VAR_0, const u32 VAR_1)
{
  if (VAR_1 == 0) return VAR_0;

  const u32 VAR_2 = VAR_0 % VAR_1;

  if (VAR_2 == 0) return VAR_0;

  return VAR_0 + VAR_1 - VAR_2;
}
