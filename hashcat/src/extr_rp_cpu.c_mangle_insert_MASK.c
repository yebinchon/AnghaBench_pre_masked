
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0 (char VAR_1[VAR_0], int VAR_2, int VAR_3, char VAR_4)
{
  if (VAR_3 > VAR_2) return (VAR_2);

  if ((VAR_2 + 1) >= VAR_0) return (VAR_2);

  int VAR_5;

  for (VAR_5 = VAR_2 - 1; VAR_5 > VAR_3 - 1; VAR_5--)
  {
    VAR_1[VAR_5 + 1] = VAR_1[VAR_5];
  }

  VAR_1[VAR_3] = VAR_4;

  return (VAR_2 + 1);
}
