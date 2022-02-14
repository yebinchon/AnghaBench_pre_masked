
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_0 (const char *VAR_10, int VAR_11) {
  const char *VAR_12 = VAR_10 + VAR_11;
  int VAR_13, VAR_14;
  VAR_4 = 0;
  while (VAR_10 < VAR_12) {
    switch (*VAR_10) {
    case '+':
      VAR_13 = VAR_9 | VAR_5;
      break;
    case '*':
      VAR_13 = VAR_6 | VAR_5;
      break;
    case '-':
      VAR_13 = VAR_9 | VAR_7;
      break;
    case '/':
      VAR_13 = VAR_6 | VAR_7;
      break;
    default:
      return -1;
    }
    if (++VAR_10 >= VAR_12) {
      return -1;
    }
    if (*VAR_10 > '9') {
      if (VAR_13 & VAR_6) {
        switch (*VAR_10) {
        case 'A':
          VAR_14 = VAR_0;
          break;
        case 'G':
          VAR_14 = VAR_1;
          break;
        default:
          return -1;
        }
        VAR_10++;
      } else {
        return -1;
      }
    } else {
      if (*VAR_10 < '0') {
        return -1;
      }
      VAR_14 = 0;
      while (VAR_10 < VAR_12 && *VAR_10 >= '0' && *VAR_10 <= '9') {
        if (VAR_14 > VAR_8 / 10) {
          return -1;
        }
        VAR_14 = VAR_14 * 10 + (*VAR_10++ - '0');
      }
      if (VAR_14 > VAR_8 || ((VAR_13 & VAR_6) && VAR_14 > 30)) {
        return -1;
      }
    }
    VAR_3[VAR_4++] = VAR_13 | VAR_14;
    if (VAR_4 >= VAR_2) {
      return -1;
    }
  }
  VAR_3[VAR_4] = -1;
  return VAR_4;
}
