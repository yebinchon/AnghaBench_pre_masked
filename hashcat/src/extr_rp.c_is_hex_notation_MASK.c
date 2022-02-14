
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char const) ;

bool FUNC_1 (const char *VAR_0, u32 VAR_1, u32 VAR_2)
{
  if ((VAR_2 + 4) > VAR_1) return 0;

  if (VAR_0[VAR_2 + 0] != '\\') return 0;
  if (VAR_0[VAR_2 + 1] != 'x') return 0;

  if (FUNC_0 (VAR_0[VAR_2 + 2]) == 0) return 0;
  if (FUNC_0 (VAR_0[VAR_2 + 3]) == 0) return 0;

  return 1;
}
