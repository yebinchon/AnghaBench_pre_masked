
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*) ;
 int VAR_0 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_1 ;

int FUNC_10 (int VAR_2, char *VAR_3[]) {
  int VAR_4;
  FUNC_8 ();
  while ((VAR_4 = FUNC_2 (VAR_2, VAR_3, "hv")) != -1) {
    switch (VAR_4) {
    case 'h':
      FUNC_9 ();
      return 2;
    case 'v':
      VAR_1++;
      break;
    }
  }

  if (VAR_2 != VAR_0 + 1) {
    FUNC_9 ();
  }

  char *VAR_5 = VAR_3[VAR_0];

  FUNC_6 ();
  FUNC_3 ();
  char *VAR_6 = FUNC_5 (VAR_5);
  if (VAR_6 == ((void*)0)) {
    FUNC_7 ("icpl_readfile (\"%s\") fail.\n", VAR_5);
    FUNC_0 (1);
  }

  if (FUNC_4 (VAR_6) < 0) {
    FUNC_1 (VAR_6);
    FUNC_0 (1);
  }

  FUNC_1 (VAR_6);
  return 0;
}
