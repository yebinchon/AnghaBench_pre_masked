
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int* FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 char* FUNC_5 (char*) ;
 char* VAR_3 ;

char *FUNC_6 (char *VAR_4, int VAR_5) {
  if (VAR_5 >= VAR_0 / 4 - 1) {
    return ((void*)0);
  }

  FUNC_4();
  VAR_4 = FUNC_5 (VAR_4);

  int VAR_6;
  int VAR_7 = 0;
  int VAR_8 = -1;
  int VAR_9 = 0;
  int VAR_10 = 0;

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    if (VAR_7 == 0 && VAR_4[VAR_6] == '&') {
      VAR_8 = VAR_10;
      VAR_9 = 0;
      VAR_7++;
    } else if (VAR_7 == 1 && VAR_4[VAR_6] == '#') {
      VAR_7++;
    } else if (VAR_7 == 2 && VAR_4[VAR_6] >= '0' && VAR_4[VAR_6] <= '9') {
      if (VAR_9 < 0x20000) {
        VAR_9 = VAR_4[VAR_6] - '0' + VAR_9 * 10;
      }
    } else if (VAR_7 == 2 && VAR_4[VAR_6] == ';') {
      VAR_7++;
    } else {
      VAR_7 = 0;
    }
    if (VAR_7 == 3 && (VAR_9 >= 32 && VAR_9 != 8232 && VAR_9 != 8233 && VAR_9 < 0x20000)) {
      VAR_10 = VAR_8;
      VAR_1[VAR_10++] = VAR_9;
    } else if (VAR_7 == 3 && VAR_9 >= 0x10000) {
      VAR_1[VAR_10++] = VAR_3[(unsigned char)VAR_4[VAR_6]];
      VAR_1[VAR_8] = '$';
    } else {
      VAR_1[VAR_10++] = VAR_3[(unsigned char)VAR_4[VAR_6]];
    }
    if (VAR_7 == 3) {
      VAR_7 = 0;
    }
  }
  VAR_1[VAR_10] = 0;

  int *VAR_11 = FUNC_2 (VAR_1);
  char *VAR_12 = VAR_2;

  while (*VAR_11 != 0) {
    VAR_12 += FUNC_3 (*VAR_11++, VAR_12);
  }
  *VAR_12++ = 0;
  FUNC_0 (VAR_12 - VAR_2 < VAR_0);

  return FUNC_1 (VAR_2);
}
