
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,int,char) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2 (char VAR_1[VAR_0], int VAR_2, int VAR_3)
{
  if (VAR_3 > VAR_2) return (VAR_2);

  if ((VAR_2 + VAR_3) >= VAR_0) return (VAR_2);

  char VAR_4[100] = { 0 };

  FUNC_1 (VAR_4, VAR_1, VAR_3);

  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  {
    char VAR_6 = VAR_4[VAR_5];

    VAR_2 = FUNC_0 (VAR_1, VAR_2, VAR_5, VAR_6);
  }

  return (VAR_2);
}
