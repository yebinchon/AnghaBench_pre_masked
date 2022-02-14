
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (char,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

int FUNC_5 (const char *VAR_2, int VAR_3) {
  int VAR_4;
  int VAR_5 = 0;
  int VAR_6 = -1;
  int VAR_7 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    if (VAR_5 == 0 && VAR_2[VAR_4] == '&') {
      VAR_6 = FUNC_2 ();
      VAR_7 = 0;
      VAR_5 ++;
    } else if (VAR_5 == 1 && VAR_2[VAR_4] == '#') {
      VAR_5 ++;
    } else if (VAR_5 == 2 && VAR_2[VAR_4] >= '0' && VAR_2[VAR_4] <= '9') {
      if (VAR_7 < 0x20000) {
        VAR_7 = VAR_2[VAR_4] - '0' + VAR_7 * 10;
      }
    } else if (VAR_5 == 2 && VAR_2[VAR_4] == ';') {
      VAR_5 ++;
    } else {
      VAR_5 = 0;
    }
    if (VAR_5 == 3 && (VAR_7 >= 32 && VAR_7 != 33 && VAR_7 != 34 && VAR_7 != 36 && VAR_7 != 39 && VAR_7 != 60 && VAR_7 != 62 && VAR_7 != 92 && VAR_7 != 8232 && VAR_7 != 8233 && VAR_7 < 0x20000)) {
      FUNC_3 (VAR_6);
      FUNC_0 (VAR_6 == FUNC_2 ());
      FUNC_4 (VAR_7);
    } else if (VAR_5 == 3 && VAR_7 >= 0x10000) {
      FUNC_4 (VAR_1[(unsigned char)(VAR_2[VAR_4])]);
      FUNC_1 ('$', VAR_6);
    } else {
      FUNC_4 (VAR_1[(unsigned char)(VAR_2[VAR_4])]);
    }
    if (VAR_5 == 3) {
      VAR_5 = 0;
    }
  }
  return VAR_0;
}
