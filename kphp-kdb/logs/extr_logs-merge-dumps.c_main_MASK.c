
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,void*,int) ;
 int FUNC_4 () ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 () ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 char* VAR_8 ;
 int FUNC_10 () ;
 int VAR_9 ;
 int FUNC_11 () ;
 char* VAR_10 ;

int FUNC_12 (int VAR_11, char *VAR_12[]) {
  int VAR_13;

  FUNC_4 ();
  VAR_8 = VAR_12[0];

  if (VAR_11 == 1) {
    FUNC_11();
    return 2;
  }

  while ((VAR_13 = FUNC_8 (VAR_11, VAR_12, "d:hF:N:o:u:")) != -1) {
    switch (VAR_13) {
    case 'd':
      VAR_2 = VAR_5;
      break;
    case 'h':
      FUNC_11 ();
      return 2;
    case 'F':
      VAR_3 = FUNC_1 (VAR_5);
      break;
    case 'N':
      VAR_4 = FUNC_1 (VAR_5);
      break;
    case 'o':
      VAR_7 = VAR_5;
      break;
    case 'u':
      VAR_10 = VAR_5;
      break;
    }
  }

  if (VAR_11 != VAR_6) {
    FUNC_11();
    return 2;
  }

  if (FUNC_2 (VAR_10) < 0) {
    FUNC_7 (VAR_9, "fatal: cannot change user to %s\n", VAR_10 ? VAR_10 : "(none)");
    FUNC_5 (1);
  }

  FUNC_0 (VAR_4 > VAR_3 && VAR_3 >= 0);
  VAR_1 = VAR_4 + 1;

  FUNC_0 (VAR_4 + 1 < VAR_0);

  FUNC_3 (VAR_1, VAR_7, 2);

  FUNC_9();
  FUNC_10();

  FUNC_6();
  return 0;
}
