
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,int) ;

int FUNC_2 (char *VAR_0, int VAR_1, char *VAR_2, int VAR_3, int VAR_4) {
  char *VAR_5 = VAR_2 + VAR_3, *VAR_6 = VAR_0 + VAR_1 - 8, *VAR_7 = VAR_0;
  int VAR_8 = 0, VAR_9;

  if (VAR_1 < 8 || VAR_3 < 0) {
    return -1;
  }

  *VAR_0++ = '{';

  while (VAR_2 < VAR_5 && VAR_0 < VAR_6) {
    if (*VAR_2 != 1 && *VAR_2 != 2) {
      break;
    }
    char *VAR_10 = VAR_2, *VAR_11 = 0;
    while (VAR_10 < VAR_5 && *VAR_10 != '\t') {
      if (*VAR_10 == ' ' && !VAR_11) {
 VAR_11 = VAR_10;
      }
      VAR_10++;
    }
    if (!(VAR_4 & *VAR_2) || !VAR_11) {
      VAR_2 = VAR_10 + 1;
      continue;
    }
    *VAR_0++ = '"';
    VAR_9 = FUNC_1 (VAR_0, VAR_6 - VAR_0, VAR_2 + 1, VAR_11 - VAR_2 - 1);
    if (VAR_9 < 0) {
      return VAR_9;
    }
    VAR_0 += VAR_9;
    if (VAR_0 > VAR_6) {
      return -1;
    }
    VAR_0[0] = '"';
    VAR_0[1] = ':';
    VAR_0[2] = '"';
    VAR_0 += 3;
    VAR_9 = FUNC_1 (VAR_0, VAR_6 - VAR_0, VAR_11 + 1, VAR_10 - VAR_11 - 1);
    if (VAR_9 < 0) {
      return VAR_9;
    }
    VAR_0 += VAR_9;
    if (VAR_0 > VAR_6) {
      return -1;
    }
    *VAR_0++ = '"';
    *VAR_0++ = ',';
    VAR_8++;
    VAR_2 = VAR_10 + 1;
  }

  if (VAR_8) {
    --VAR_0;
  }
  *VAR_0++ = '}';
  FUNC_0 (VAR_0 <= VAR_6 + 8);
  return VAR_0 - VAR_7;
}
