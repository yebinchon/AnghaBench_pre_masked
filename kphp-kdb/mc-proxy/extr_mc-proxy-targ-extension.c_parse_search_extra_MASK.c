
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (char const*,int,char,int*,int*) ;

__attribute__((used)) static int FUNC_1 (const char *VAR_0, int VAR_1, int *VAR_2, int *VAR_3, int *VAR_4) {
  int VAR_5;
  int VAR_6 = (VAR_0[VAR_1 - 1] == ')');
  if (VAR_6) {
    int VAR_7 = VAR_1 - 1;
    while (VAR_7 >= 0 && VAR_0[VAR_7] != '#' && VAR_0[VAR_7] != '(') {
      VAR_7 --;
    }
    if (VAR_7 < 0) {
      return -1;
    }
    if (VAR_0[VAR_7] == '#') {
      *VAR_3 = VAR_7;
      VAR_7 ++;
      int VAR_8 = -1;
      *VAR_4 = FUNC_0 (VAR_0 + VAR_7, VAR_1 - VAR_7 - 1, ')', VAR_2, &VAR_8) - VAR_0;
      if (VAR_8 != -1) {
        return VAR_8;
      }
    }
    VAR_7 = 0;
    while (VAR_7 < VAR_1 && VAR_0[VAR_7] != '(') {
      VAR_7 ++;
    }
    if (VAR_7 == VAR_1) {
      return -1;
    }
    int VAR_9 = VAR_7;
    while (VAR_7 >= 0 && VAR_0[VAR_7] != '#') {
      VAR_7 --;
    }
    if (VAR_7 < 0) {
      *VAR_3 = VAR_9;
      *VAR_4 = VAR_9;
      return 0;
    }
    *VAR_3 = VAR_7;
    VAR_7 ++;
    int VAR_10 = -1;
    *VAR_4 = FUNC_0 (VAR_0 + VAR_7, VAR_9 - VAR_7, '(', VAR_2, &VAR_10) - VAR_0;
    if (VAR_10 != -1) {
      return VAR_10;
    }
    return 0;
  } else {
    int VAR_11 = VAR_1 - 1;
    while (VAR_11 >= 0 && VAR_0[VAR_11] != '#') {
      VAR_11 --;
    }
    if (VAR_11 < 0) {
      *VAR_3 = VAR_1;
      *VAR_4 = VAR_1;
      return 0;
    }
    *VAR_3 = VAR_11;
    VAR_11 ++;
    *VAR_4 = FUNC_0 (VAR_0 + VAR_11, VAR_1 - VAR_11, 0, VAR_2, &VAR_5) - VAR_0;
    if (VAR_5 == -1) {
      VAR_5 = 0;
    }
    return VAR_5;
  }
}
