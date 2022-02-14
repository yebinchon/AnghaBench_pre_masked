
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char FUNC_1 (char*,int*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*) ;

char *FUNC_5 (char *VAR_0) {
  int VAR_1 = FUNC_4 (VAR_0);
  char *VAR_2 = FUNC_3 (VAR_1);
  if (VAR_2 != 0) {
    int VAR_3 = 0, VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
      char VAR_5 = FUNC_1 (VAR_0, &VAR_4);
      if (VAR_5 != 0) {
        VAR_2[VAR_3++] = VAR_5;
      }
    }
    VAR_2[VAR_3] = 0;

    char *VAR_6 = FUNC_2 (VAR_3);
    FUNC_0 (VAR_2 == VAR_6);
  }

  return VAR_2;
}
