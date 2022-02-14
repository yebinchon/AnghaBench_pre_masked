
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int const) ;
 size_t FUNC_1 (char const*) ;

bool FUNC_2 (const char *VAR_0)
{
  if (VAR_0 == ((void*)0)) return 0;

  const size_t VAR_1 = FUNC_1 (VAR_0);

  if (VAR_1 == 0) return 0;

  for (size_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  {
    const int VAR_3 = (const int) VAR_0[VAR_2];

    if (FUNC_0 (VAR_3) == 0) return 0;
  }

  return 1;
}
