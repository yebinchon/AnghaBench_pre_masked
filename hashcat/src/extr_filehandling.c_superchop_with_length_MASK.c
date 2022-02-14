
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0 (char *VAR_0, const size_t VAR_1)
{
  size_t VAR_2 = VAR_1;

  while (VAR_2)
  {
    if (VAR_0[VAR_2 - 1] == '\n')
    {
      VAR_2--;

      VAR_0[VAR_2] = 0;

      continue;
    }

    if (VAR_0[VAR_2 - 1] == '\r')
    {
      VAR_2--;

      VAR_0[VAR_2] = 0;

      continue;
    }

    break;
  }

  return VAR_2;
}
