
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;

void FUNC_5 (char *VAR_3, int VAR_4) {
  if (VAR_2 > 2) {
    FUNC_0 (VAR_1, "set %d string <%s>\n", VAR_4, VAR_3);
  }
  int VAR_5 = FUNC_2 (VAR_3);
  char *VAR_6 = VAR_3;
  int VAR_7;
  char VAR_8;
  for (VAR_7 = 0; VAR_7 <= VAR_5; VAR_7++) {
    if (VAR_3[VAR_7] == '\t' || VAR_3[VAR_7] == 0) {
      VAR_8 = VAR_3[VAR_7];
      VAR_3[VAR_7] = 0;
      if (*VAR_6) {
        if (VAR_4) {
          FUNC_4 (VAR_0, FUNC_1 (VAR_6, 1));
        } else {
          FUNC_3 (&VAR_0, FUNC_1 (VAR_6, 1));
        }
      }
      if (VAR_2 > 2) {
        FUNC_0 (VAR_1, " -- <%s>\n", VAR_6);
      }
      VAR_6 = VAR_3 + VAR_7 + 1;
      VAR_3[VAR_7] = VAR_8;
    }
  }
}
