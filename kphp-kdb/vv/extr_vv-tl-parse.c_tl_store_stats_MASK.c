
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int) ;

int FUNC_3 (const char *VAR_1, int VAR_2) {
  int VAR_3, VAR_4 = 0, VAR_5 = 0, VAR_6 = -1;
  for (VAR_3 = 0; VAR_1[VAR_3]; VAR_3++) {
    if (VAR_1[VAR_3] == '\n') {
      if (VAR_6 - VAR_5 > 1 && VAR_6 < VAR_3) {
        VAR_4++;
      }
      VAR_5 = VAR_3 + 1;
      VAR_6 = -1;
    } else if (VAR_1[VAR_3] == '\t') {
      VAR_6 = VAR_6 == -1 ? VAR_3 + 1 : -2;
    }
  }
  if (!VAR_2) {
    FUNC_1 (VAR_0);
  }
  FUNC_1 (VAR_4);
  VAR_5 = 0;
  VAR_6 = -1;
  int VAR_7 = 0;
  for (VAR_3 = 0; VAR_1[VAR_3]; VAR_3++) {
    if (VAR_1[VAR_3] == '\n') {
      if (VAR_6 - VAR_5 > 1 && VAR_6 < VAR_3) {
        FUNC_2 (VAR_1 + VAR_5, VAR_6 - VAR_5 - 1);
        FUNC_2 (VAR_1 + VAR_6, VAR_3 - VAR_6);
        VAR_7++;
      }
      VAR_5 = VAR_3 + 1;
      VAR_6 = -1;
    } else if (VAR_1[VAR_3] == '\t') {
      VAR_6 = VAR_6 == -1 ? VAR_3 + 1 : -2;
    }
  }
  FUNC_0 (VAR_7 == VAR_4);
  return VAR_4;
}
