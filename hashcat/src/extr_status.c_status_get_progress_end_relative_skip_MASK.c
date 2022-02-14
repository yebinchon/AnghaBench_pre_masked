
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int hashcat_ctx_t ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;

u64 FUNC_2 (const hashcat_ctx_t *VAR_0)
{
  const u64 VAR_1 = FUNC_1 (VAR_0);
  const u64 VAR_2 = FUNC_0 (VAR_0);

  u64 VAR_3 = 0;

  if (VAR_2 > 0)
  {
    VAR_3 = VAR_2 - VAR_1;
  }

  return VAR_3;
}
