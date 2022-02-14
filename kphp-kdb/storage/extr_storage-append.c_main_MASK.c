
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int VAR_5 ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 char* VAR_6 ;
 int VAR_7 ;

int FUNC_9 (int VAR_8, char *VAR_9[]) {
  int VAR_10;
  while ((VAR_10 = FUNC_3 (VAR_8, VAR_9, "1H:mtuv")) != -1) {
    switch (VAR_10) {
      case 'H':
        VAR_1 = FUNC_0 (VAR_3);
      break;
      case 'm':
        VAR_2 = 1;
      break;
      case 't':
        VAR_5 = 1;
      break;
      case 'u':
        VAR_6 = VAR_3;
      break;
      case 'v':
        VAR_7++;
        break;
      case '1':
        VAR_0 = 0;
        break;
    }
  }
  if (VAR_8 < VAR_4 + 2) {
    FUNC_8 ();
    return 1;
  }

  if (FUNC_1 (VAR_6) < 0) {
    FUNC_4 ("fatal: cannot change user to %s\n", VAR_6 ? VAR_6 : "(none)");
    FUNC_2 (1);
  }

  if (VAR_2) {
    if (FUNC_6 (VAR_9[VAR_4], VAR_9[VAR_4+1]) < 0) {
      FUNC_7 (VAR_9[VAR_4+1]);
      return 1;
    }
    return 0;
  }

  FUNC_5 (VAR_9[VAR_4], VAR_9[VAR_4+1]);
  return 0;
}
