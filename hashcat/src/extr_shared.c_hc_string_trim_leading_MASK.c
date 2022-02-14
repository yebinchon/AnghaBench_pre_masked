
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (char*,char*,int const) ;
 scalar_t__ FUNC_2 (char*) ;

void FUNC_3 (char *VAR_0)
{
  int VAR_1 = 0;

  const int VAR_2 = (int) FUNC_2 (VAR_0);

  for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  {
    const int VAR_4 = (const int) VAR_0[VAR_3];

    if (FUNC_0 (VAR_4) == 0) break;

    VAR_1++;
  }

  if (VAR_1 == 0) return;

  const int VAR_5 = VAR_2 - VAR_1;

  FUNC_1 (VAR_0, VAR_0 + VAR_1, VAR_5);

  VAR_0[VAR_5] = 0;
}
