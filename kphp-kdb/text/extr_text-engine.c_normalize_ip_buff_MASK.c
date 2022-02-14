
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 char FUNC_3 (char) ;

int FUNC_4 (void) {
  static char VAR_1[64], VAR_2[64];
  char *VAR_3 = VAR_0;
  int VAR_4, VAR_5, VAR_6 = FUNC_2 (VAR_3);
  int VAR_7 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
    if (VAR_3[VAR_4] == ':') ++VAR_7;
  }
  if (VAR_7 < 2 || VAR_7 > 7) {
    if (!VAR_7) {
      char *VAR_8 = VAR_0;
      int VAR_9 = 0;

      while (*VAR_8) {
 if (*VAR_8++ == '.') {
   if (++VAR_9 == 3) {
     break;
   }
 }
      }
      *VAR_8 = 0;
      if (VAR_9 < 3 || VAR_8 - VAR_0 > 12) {
 return -1;
      }
      return 0;
    }
    return -1;
  }
  if (VAR_6 >= 2 && *VAR_3 == ':' && VAR_3[1] == ':') {
    ++VAR_3;
    --VAR_6;
    --VAR_7;
  } else if (VAR_6 >= 2 && VAR_3[VAR_6 - 2] == ':' && VAR_3[VAR_6 - 1] == ':') {
    --VAR_6;
    --VAR_7;
    VAR_3[VAR_6] = 0;
  }
  char *VAR_10 = VAR_1;
  FUNC_1 (VAR_2, VAR_3, VAR_6 + 1);

  char *VAR_11 = 0, *VAR_12 = VAR_2;
  int VAR_13 = 0, VAR_14 = 0;
  while (VAR_12) {
    VAR_11 = VAR_12;
    while (*VAR_12 && *VAR_12 != ':') {
      ++VAR_12;
    }
    int VAR_15 = VAR_12 - VAR_11;
    if (*VAR_12) {
      *VAR_12 = 0;
      ++VAR_12;
    } else {
      VAR_12 = 0;
    }
    if (VAR_15 > 4) {
      return -1;
    }
    if (!VAR_15) {
      if (VAR_14) {
 return -1;
      }
      ++VAR_14;
      for (VAR_4 = 0; VAR_4 < 8 - VAR_7; VAR_4++) {
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
   *VAR_10++ = '0';
 }
 ++VAR_13;
 if (VAR_13 < 8) {
   *VAR_10++ = ':';
 }
      }
    } else {
      for (VAR_5 = 0; VAR_5 < 4 - VAR_15; VAR_5++) {
 *VAR_10++ = '0';
      }
      for (VAR_5 = 0; VAR_5 < VAR_15; VAR_5++) {
 char VAR_16 = FUNC_3 (VAR_11[VAR_5]);
 if (!((VAR_16 >= '0' && VAR_16 <= '9') || (VAR_16 >= 'a' && VAR_16 <= 'f'))) {
   return -1;
 }
 *VAR_10++ = VAR_16;
      }
      ++VAR_13;
      if (VAR_13 < 8) {
 *VAR_10++ = ':';
      }
    }
  }
  *VAR_10 = 0;
  FUNC_0 (VAR_13 == 8 && VAR_10 == VAR_1 + 39);
  FUNC_1 (VAR_0, VAR_1, 40);
  return 0;
}
