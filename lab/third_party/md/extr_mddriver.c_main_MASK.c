
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,char*) ;

int FUNC_6(int VAR_0, char *VAR_1[])
{
  int VAR_2;

  if (VAR_0 > 1) {
    for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++) {
      if (VAR_1[VAR_2][0] == '-' && VAR_1[VAR_2][1] == 's')
        FUNC_2(VAR_1[VAR_2] + 2);
      else if (FUNC_5(VAR_1[VAR_2], "-t") == 0)
        FUNC_4();
      else if (FUNC_5(VAR_1[VAR_2], "-x") == 0)
        FUNC_3();
      else
        FUNC_0(VAR_1[VAR_2]);
    }
  } else {
    FUNC_1();
  }

  return (0);
}
