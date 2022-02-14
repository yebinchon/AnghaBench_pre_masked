
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char const*) ;

int FUNC_3 (char *VAR_0, int VAR_1, const char *VAR_2, char *VAR_3, int VAR_4) {
  char *VAR_5 = VAR_3 + VAR_4;
  int VAR_6 = FUNC_2 (VAR_2);
  while (VAR_3 < VAR_5) {
    char *VAR_7 = VAR_3;
    while (VAR_3 < VAR_5 && (*VAR_3 != '=' && *VAR_3 != '&')) {
      ++VAR_3;
    }
    if (VAR_3 == VAR_5) {
      VAR_0[0] = 0;
      return -1;
    }
    if (*VAR_3 == '=') {
      if (VAR_6 == VAR_3 - VAR_7 && !FUNC_0 (VAR_2, VAR_7, VAR_6)) {
        VAR_7 = ++VAR_3;
        while (VAR_3 < VAR_5 && *VAR_3 != '&') {
          ++VAR_3;
        }
        VAR_1--;
        if (VAR_3 - VAR_7 < VAR_1) {
          VAR_1 = VAR_3 - VAR_7;
        }
        FUNC_1 (VAR_0, VAR_7, VAR_1);
        VAR_0[VAR_1] = 0;
        return VAR_1;
      }
      ++VAR_3;
    }
    while (VAR_3 < VAR_5 && *VAR_3 != '&') {
      ++VAR_3;
    }
    if (VAR_3 < VAR_5) {
      ++VAR_3;
    }
  }
  VAR_0[0] = 0;
  return -1;
}
