
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int,char**,char*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;
 int VAR_4 ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 char* VAR_5 ;
 int VAR_6 ;

int FUNC_12 (int VAR_7, char *VAR_8[]) {
  int VAR_9;
  static int VAR_10 = 0;
  if (FUNC_6 ()) {
    VAR_1 = 10;
  }
  FUNC_9 ();
  while ((VAR_9 = FUNC_5 (VAR_7, VAR_8, "c:hku:v")) != -1) {
    switch (VAR_9) {
    case 'c':
      VAR_1 = FUNC_0 (VAR_2);
      if (VAR_1 <= 0 || VAR_1 > VAR_0) {
       VAR_1 = VAR_0;
      }
    break;
    case 'h':
      FUNC_11 ();
    break;
    case 'k':
      VAR_10 = 1;
      break;
    case 'u':
      VAR_5 = VAR_2;
    break;
    case 'v':
      VAR_6++;
    break;
    default:
      FUNC_4 (VAR_4, "Unimplemented option %c\n", VAR_9);
      FUNC_2 (2);
    break;
    }
  }

  if (VAR_3 + 3 != VAR_7) {
    FUNC_11 ();
  }

  if (FUNC_8 (VAR_1 + 16) < 0) {
    FUNC_7 ("fatal: cannot raise open file limit to %d\n", VAR_1 + 16);
    FUNC_2 (1);
  }

  if (FUNC_1 (VAR_5) < 0) {
    FUNC_7 ("fatal: cannot change user to %s\n", VAR_5 ? VAR_5 : "(none)");
    FUNC_2 (1);
  }

  if (FUNC_3 (VAR_8[VAR_3], VAR_8[VAR_3+1], VAR_8[VAR_3+2]) < 0) {
    if (!VAR_10) {
      if (!FUNC_10 (VAR_8[VAR_3+2])) {
        FUNC_7 ("Bad destination file '%s' was succesfully deleted.\n", VAR_8[VAR_3+2]);
      }
    }
    return 1;
  }

  return 0;
}
