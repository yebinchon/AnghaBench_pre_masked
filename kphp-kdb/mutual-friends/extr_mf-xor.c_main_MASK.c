
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*,int ) ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_4 ;
 int FUNC_10 () ;
 char* VAR_5 ;

int FUNC_11 (int VAR_6, char *VAR_7[]) {
  int VAR_8;

  FUNC_9 ();
  VAR_3 = VAR_7[0];

  if (VAR_6 == 1) {
    FUNC_10();
    return 2;
  }

  while ((VAR_8 = FUNC_5 (VAR_6, VAR_7, "hu:")) != -1) {
    switch (VAR_8) {
    case 'h':
      FUNC_10 ();
      return 2;
    case 'u':
      VAR_5 = VAR_1;
      break;
    }
  }
  if (VAR_6 != VAR_2 + 2) {
    FUNC_10();
    return 2;
  }

  if (FUNC_0 (VAR_5) < 0) {
    FUNC_3 (VAR_4, "fatal: cannot change user to %s\n", VAR_5 ? VAR_5 : "(none)");
    FUNC_1 (1);
  }

  FUNC_6 (3);

  FUNC_7 (0, VAR_7[VAR_2], 0);
  FUNC_7 (1, VAR_7[VAR_2 + 1], 0);
  VAR_0[2] = 1;

  FUNC_8();

  FUNC_2();
  FUNC_4 (VAR_0[2]);


  return 0;
}
