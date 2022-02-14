
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0 (char VAR_1[VAR_0], int VAR_2, char VAR_3)
{
  if ((VAR_2 + 1) >= VAR_0) return (VAR_2);

  int VAR_4;

  for (VAR_4 = VAR_2 - 1; VAR_4 > -1; VAR_4--)
  {
    VAR_1[VAR_4 + 1] = VAR_1[VAR_4];
  }

  VAR_1[0] = VAR_3;

  return (VAR_2 + 1);
}
