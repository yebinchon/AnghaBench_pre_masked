
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0 (char *VAR_0, const size_t VAR_1)
{
  char *VAR_2 = VAR_0;

  bool VAR_3 = 0;

  for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  {
    if (VAR_3 == 1)
    {
      VAR_3 = 0;
    }
    else
    {
      if (VAR_0[VAR_4] == '\\')
      {
        VAR_3 = 1;
      }
      else if (VAR_0[VAR_4] == ',')
      {
        VAR_2 = VAR_0 + VAR_4 + 1;
      }
    }
  }

  return VAR_2;
}
