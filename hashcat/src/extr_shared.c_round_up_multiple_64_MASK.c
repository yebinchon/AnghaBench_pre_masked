
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u64 ;



u64 FUNC_0 (const u64 VAR_0, const u64 VAR_1)
{
  if (VAR_1 == 0) return VAR_0;

  const u64 VAR_2 = VAR_0 % VAR_1;

  if (VAR_2 == 0) return VAR_0;

  return VAR_0 + VAR_1 - VAR_2;
}
