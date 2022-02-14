
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hashcat_ctx_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

double FUNC_2 (const hashcat_ctx_t *VAR_0)
{
  const int VAR_1 = FUNC_1 (VAR_0);
  const int VAR_2 = FUNC_0 (VAR_0);

  if (VAR_2 == 0) return 0;

  return ((double) VAR_1 / (double) VAR_2) * 100;
}
