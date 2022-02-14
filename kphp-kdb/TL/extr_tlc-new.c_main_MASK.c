
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct parse {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 () ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int VAR_5 ;
 struct parse* FUNC_5 (char*) ;
 int FUNC_6 (struct tree*) ;
 struct tree* FUNC_7 (struct parse*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (char*) ;

int FUNC_11 (int VAR_7, char **VAR_8) {
  int VAR_9;
  char *VAR_10 = ((void*)0);
  char *VAR_11 = 0;
  FUNC_4 ();
  while ((VAR_9 = FUNC_2 (VAR_7, VAR_8, "Eho:ve:w:")) != -1) {
    switch (VAR_9) {
    case 'E':
      VAR_3++;
      break;
    case 'o':
      VAR_10 = VAR_1;
      break;
    case 'h':
      FUNC_9 ();
      return 2;
    case 'e':
      VAR_11 = VAR_1;
      break;
    case 'w':
      VAR_4 = FUNC_0 (VAR_1);
      break;
    case 'v':
      VAR_6++;
      break;
    }
  }

  VAR_0 = (1 << 30);

  if (VAR_7 != VAR_2 + 1) {
    FUNC_9 ();
  }
  FUNC_3 ();

  struct parse *VAR_12 = FUNC_5 (VAR_8[VAR_2]);
  if (!VAR_12) {
    return 0;
  }
  struct tree *VAR_13;
  if (!(VAR_13 = FUNC_7 (VAR_12))) {
    FUNC_1 (VAR_5, "Error in parse:\n");
    FUNC_8 ();
    return 0;
  } else {
    if (VAR_6) {
      FUNC_1 (VAR_5, "Parse ok\n");
    }
    if (!FUNC_6 (VAR_13)) {
      if (VAR_6) {
        FUNC_1 (VAR_5, "Fail\n");
      }
      return 1;
    } else {
      if (VAR_6) {
        FUNC_1 (VAR_5, "Ok\n");
      }
    }
  }
  if (VAR_11) {
    FUNC_10 (VAR_11);
  }
  return 0;
}
