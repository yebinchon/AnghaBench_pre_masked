
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;

void FUNC_1 (char *VAR_0, const char VAR_1, const char VAR_2)
{
  const size_t VAR_3 = FUNC_0 (VAR_0);

  for (size_t VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  {
    const char VAR_5 = VAR_0[VAR_4];

    if (VAR_5 == VAR_1)
    {
      VAR_0[VAR_4] = VAR_2;
    }
  }
}
