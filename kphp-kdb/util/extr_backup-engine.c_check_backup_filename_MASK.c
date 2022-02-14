
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int FUNC_1 (char *VAR_0, int VAR_1, char *VAR_2, int VAR_3) {
  if (VAR_1 <= 10+VAR_3 || FUNC_0 (VAR_0 + VAR_1 - (10+VAR_3), VAR_2, VAR_3)) {
    return -1;
  }
  int VAR_4;
  for (VAR_4 = 1; VAR_4 <= 10; VAR_4++) {
    if (VAR_0[VAR_1-VAR_4] < '0' || VAR_0[VAR_1-VAR_4] > '9') {
      return -1;
    }
  }
  return 0;
}
