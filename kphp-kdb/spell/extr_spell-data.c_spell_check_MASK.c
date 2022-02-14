
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int res ;
typedef int dyn_mark_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int * VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (char*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (int,char*,...) ;
 char* FUNC_12 (scalar_t__) ;

int FUNC_13 (char *VAR_3, int VAR_4[3], int VAR_5) {
  static char VAR_6[16384];
  FUNC_7 (VAR_4, 0, sizeof (VAR_4));
  char *VAR_7;
  dyn_mark_t VAR_8;
  if (!VAR_5) {
    FUNC_2 (VAR_8);
    VAR_7 = FUNC_12 (FUNC_10 (VAR_3) + 1);
    FUNC_9 (VAR_7, VAR_3);
  } else {
    VAR_7 = VAR_3;
  }
  FUNC_11 (3, "Before filter: %s\n", VAR_7);
  FUNC_4 (VAR_7, &VAR_1);
  FUNC_4 (VAR_7, &VAR_2);
  FUNC_11 (3, "After filter: %s\n", VAR_7);

  while (*VAR_7) {
    int VAR_9 = FUNC_5 (VAR_7);
    if (VAR_9 < 0) {
      break;
    }
    VAR_7 += VAR_9;
    VAR_9 = FUNC_6 (VAR_7);
    if (!VAR_9) {
      continue;
    }
    FUNC_0 (VAR_9 > 0 && VAR_9 < 16383);
    FUNC_8 (VAR_6, VAR_7, VAR_9);
    if (VAR_9 >= 3) {
      int VAR_10 = FUNC_8 (VAR_6, VAR_7, VAR_9);
      int VAR_11 = FUNC_1 (VAR_6, VAR_10);
      FUNC_11 (3, "[%d] check_word: %.*s\n", VAR_11, VAR_10, VAR_6);
      if (VAR_11 >= 0) {
        VAR_0[1]++;
        if (VAR_11) {
          VAR_4[0]++;
          VAR_0[0]++;
        } else {
          VAR_4[1]++;
        }
      } else {
        VAR_4[2]++;
      }
    }
    VAR_7 += VAR_9;
  }
  if (!VAR_5) {
    FUNC_3 (VAR_8);
  }
  return 0;
}
