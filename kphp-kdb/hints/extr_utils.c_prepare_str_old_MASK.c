
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 char* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,char*,int) ;
 char* VAR_0 ;

char *FUNC_4 (char *VAR_1) {
  char *VAR_2 = VAR_0;
  int VAR_3=0, VAR_4=0;

  while (VAR_1[VAR_3] && !FUNC_2 (VAR_1[VAR_3])) {
    VAR_3++;
  }

  while (VAR_1[VAR_3]) {
    while (FUNC_2 (VAR_1[VAR_3])) {
      FUNC_0(VAR_1[VAR_3++]);
    }
    while (VAR_1[VAR_3] && !FUNC_2 (VAR_1[VAR_3])) {
      VAR_3++;
    }
    if (!VAR_1[VAR_3])
    {
      FUNC_0('+');
      break;
    }
    FUNC_0('+');
  }

  FUNC_0(0);

  char *VAR_5 = FUNC_1 (VAR_4);
  if (VAR_5 == ((void*)0)) {
    return VAR_5;
  }
  FUNC_3 (VAR_5, VAR_0, VAR_4);

  return VAR_5;
}
