
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int,int,...) ;
 int FUNC_2 (char*,char*,int*,int*) ;

int FUNC_3 (void) {
  int VAR_1;
  for (VAR_1 = 0; VAR_0[VAR_1]; VAR_1++) {
    if ('A' <= VAR_0[VAR_1] && VAR_0[VAR_1] < 'Z') {
      VAR_0[VAR_1] = VAR_0[VAR_1] - 'A' + 'a';
    }
  }
  int VAR_2 = 0, VAR_3 = VAR_1;
  if (VAR_0[0] == ':' && VAR_0[1] == ':') {
    VAR_2++;
  } else {
    if (VAR_3 > 2 && VAR_0[VAR_3 - 1] == ':' && VAR_0[VAR_3 - 2] == ':') {
      VAR_3--;
    }
  }
  VAR_0[VAR_3] = ':';

  char *VAR_4[9];
  int VAR_5 = 0;
  for (VAR_1 = VAR_2; VAR_1 <= VAR_3 && VAR_5 <= 8; VAR_1++) {
    VAR_4[VAR_5++] = VAR_0 + VAR_1;
    while (VAR_0[VAR_1] != ':') {
      VAR_1++;
    }
    VAR_0[VAR_1] = 0;
  }

  if (VAR_5 < 2 || VAR_5 > 8) {
    return 0;
  }
  if (VAR_5 < 8) {
    int VAR_6 = -1;
    for (VAR_1 = 0; VAR_1 < VAR_5; VAR_1++) {
      if (VAR_4[VAR_1][0] == 0) {
        if (VAR_6 >= 0) {
          return 0;
        }
        VAR_6 = VAR_1;
      }
    }
    if (VAR_6 < 0) {
      return 0;
    }
    for (VAR_1 = VAR_5 - 1; VAR_1 > VAR_6; VAR_1--) {
      VAR_4[VAR_1 - VAR_5 + 8] = VAR_4[VAR_1];
    }
    for (VAR_1 = VAR_6 - VAR_5 + 8; VAR_1 >= VAR_6; VAR_1--) {
      VAR_4[VAR_1] = "0";
    }
  }
  int VAR_7[8];
  for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
    int VAR_8 = -1;
    if (FUNC_2 (VAR_4[VAR_1], "%x%n", &VAR_7[VAR_1], &VAR_8) < 1 || VAR_7[VAR_1] >= 65536 || VAR_7[VAR_1] < 0 || VAR_4[VAR_1][VAR_8]) {
      return 0;
    }
  }

  char VAR_9[17];
  FUNC_1 (VAR_9, "%04x%04x", VAR_7[0], VAR_7[1]);
  int VAR_10 = FUNC_0 (VAR_9);
  FUNC_1 (VAR_9, "%04x%04x", VAR_7[2], VAR_7[3]);
  int VAR_11 = FUNC_0 (VAR_9);
  FUNC_1 (VAR_9, "%04x%04x%04x%04x", VAR_7[4], VAR_7[5], VAR_7[6], VAR_7[7]);
  int VAR_12 = FUNC_0 (VAR_9);
  int VAR_13 = ((VAR_10 >> 4) & 0x1f) | 0xe0;
  int VAR_14 = ((VAR_10 & 0x0f) << 4) | (VAR_11 >> 8);
  int VAR_15 = VAR_11 & 0xff;
  int VAR_16 = VAR_12 & 0xff;
  FUNC_1 (VAR_0, "%d.%d.%d.%d", VAR_13, VAR_14, VAR_15, VAR_16);
  return 1;
}
