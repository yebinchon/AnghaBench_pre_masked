
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;

size_t FUNC_1 (char *VAR_0)
{
  size_t VAR_1 = FUNC_0 (VAR_0);

  while (VAR_1)
  {
    if (VAR_0[VAR_1 - 1] == '\n')
    {
      VAR_1--;

      VAR_0[VAR_1] = 0;

      continue;
    }

    if (VAR_0[VAR_1 - 1] == '\r')
    {
      VAR_1--;

      VAR_0[VAR_1] = 0;

      continue;
    }

    break;
  }

  return VAR_1;
}
