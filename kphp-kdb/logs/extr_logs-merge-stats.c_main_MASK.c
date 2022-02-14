
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int) ;
 int ** VAR_4 ;
 int * FUNC_6 (void*,char*) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 () ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 char* VAR_8 ;
 int FUNC_10 () ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_11 () ;
 char* VAR_11 ;

int FUNC_12 (int VAR_12, char *VAR_13[]) {
  int VAR_14;

  FUNC_4 ();
  VAR_8 = VAR_13[0];

  if (VAR_12 == 1) {
    FUNC_11();
    return 2;
  }

  while ((VAR_14 = FUNC_8 (VAR_12, VAR_13, "hF:N:o:u:")) != -1) {
    switch (VAR_14) {
    case 'h':
      FUNC_11 ();
      return 2;
    case 'F':
      VAR_2 = FUNC_1 (VAR_5);
      break;
    case 'N':
      VAR_3 = FUNC_1 (VAR_5);
      break;
    case 'o':
      VAR_7 = VAR_5;
      break;
    case 'u':
      VAR_11 = VAR_5;
      break;
    }
  }

  if (VAR_12 != VAR_6 + 1) {
    FUNC_11();
    return 2;
  }
  VAR_9 = VAR_13[VAR_6];

  if (FUNC_2 (VAR_11) < 0) {
    FUNC_7 (VAR_10, "fatal: cannot change user to %s\n", VAR_11 ? VAR_11 : "(none)");
    FUNC_5 (1);
  }

  FUNC_0 (VAR_3 > VAR_2 && VAR_2 >= 0);
  VAR_1 = VAR_3 + 1;

  FUNC_0 (VAR_3 + 1 < VAR_0);

  VAR_4[VAR_1] = FUNC_6 (VAR_7, "w");
  FUNC_0 (VAR_4[VAR_1] != ((void*)0));

  FUNC_9();
  FUNC_10();
  FUNC_3();

  return 0;
}
