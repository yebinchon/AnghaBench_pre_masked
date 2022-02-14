
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 () ;

int FUNC_1 (void) {
  int VAR_1 = 0, VAR_2;
  for (VAR_2 = 0; VAR_0[VAR_2] && VAR_2 < 20; VAR_2++) {
    VAR_1 += (VAR_0[VAR_2] == '.');
  }
  if (VAR_1 == 0) {
    if (!FUNC_0()) {
      return 0;
    }
  }

  int VAR_3[4], VAR_4 = 0, VAR_5 = 0;
  for (VAR_2 = 0; VAR_0[VAR_2] && VAR_2 < 20; VAR_2++) {
    char VAR_6 = VAR_0[VAR_2];
    if (VAR_6 == '.') {
      if (VAR_4 == 3) {
        return 0;
      }
      VAR_3[VAR_4++] = VAR_5;
      VAR_5 = 0;
    } else if ('0' <= VAR_6 && VAR_6 <= '9') {
      VAR_5 = VAR_5 * 10 + VAR_6 - '0';
      if (VAR_5 > 255) {
        return 0;
      }
    } else {
      return 0;
    }
  }
  VAR_3[VAR_4++] = VAR_5;
  return (VAR_3[0] << 24) | (VAR_3[1] << 16) | (VAR_3[2] << 8) | VAR_3[3];
}
