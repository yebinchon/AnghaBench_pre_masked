
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char**,int) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char*) ;

char *FUNC_5 (char *VAR_0, char *VAR_1, int *VAR_2, int *VAR_3) {
  int VAR_4, VAR_5 = 0;
  *VAR_2 = 0;
  *VAR_3 = 0;
  while (VAR_0 < VAR_1) {
    VAR_0 = FUNC_4 (VAR_0, VAR_1);
    VAR_4 = FUNC_3 (VAR_0, VAR_1);
    if (VAR_4 <= 0) {
      return 0;
    }
    if (VAR_5 == 1) {
      if ((*VAR_0 >= 'A' && *VAR_0 <= 'Z') || (*VAR_0 >= 'a' && *VAR_0 <= 'z')) {
        *VAR_2 = VAR_4;
        return VAR_0;
      }
      if (*VAR_0 == '`' && VAR_4 >= 3 && VAR_0[VAR_4-1] == '`') {
        *VAR_2 = VAR_4 - 2;
        return VAR_0 + 1;
      }
      return 0;
    }
    if (VAR_5 == 2) {
      if (*VAR_0 >= '0' && *VAR_0 <= '9' && ((VAR_4 == 3 && VAR_0[1] == '.') || (VAR_4 == 4 && VAR_0[2] == '.'))) {
        char VAR_6[8], *VAR_7;
        FUNC_1 (VAR_6, VAR_0, VAR_4);
        VAR_6[VAR_4 - 2] = VAR_6[VAR_4 - 1];
        VAR_6[VAR_4 - 1] = 0;
        int VAR_8 = FUNC_2 (VAR_6, &VAR_7, 10);
        if (VAR_7 == VAR_6 + VAR_4 - 1 && VAR_8 >= 1 && VAR_8 <= 300) {
          *VAR_3 = VAR_8;
        }
      }
      VAR_5 = 0;
    }
    if ((*VAR_0 >= 'A' && *VAR_0 <= 'Z') || (*VAR_0 >= 'a' && *VAR_0 <= 'z')) {
      VAR_5 = 0;
      if (VAR_4 == 4 && !FUNC_0 (VAR_0, "INTO", 4)) {
        VAR_5 = 1;
      } else if (VAR_4 == 4 && !FUNC_0 (VAR_0, "FROM", 4)) {
        VAR_5 = 1;
      } else if (VAR_4 == 5 && !FUNC_0 (VAR_0, "TABLE", 5)) {
        VAR_5 = 1;
      } else if (VAR_4 == 6 && !FUNC_0 (VAR_0, "UPDATE", 6)) {
        VAR_5 = 1;
      } else if (VAR_4 == 7 && !FUNC_0 (VAR_0, "TIMEOUT", 7)) {
        VAR_5 = 2;
      }
    }
    VAR_0 += VAR_4;
  }
  return 0;
}
