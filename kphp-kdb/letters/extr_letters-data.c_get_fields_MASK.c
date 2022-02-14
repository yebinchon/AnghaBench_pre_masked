
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int* VAR_4 ;
 char** VAR_5 ;
 int* VAR_6 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*) ;

int FUNC_2 (char *VAR_7) {
  int VAR_8;
  int VAR_9 = FUNC_1 (VAR_7);
  int VAR_10;
  VAR_2 = -1;
  if (FUNC_0 (VAR_7, "a:%d%n", &VAR_8, &VAR_10) != 1 || VAR_7[VAR_10] != ':' || VAR_7[VAR_10 + 1] != '{' || VAR_7[VAR_9 - 1] != '}' || VAR_8 < 0 || VAR_8 > VAR_0 || VAR_9 > 2 * VAR_1 + 1000) {
    return -1;
  }
  int VAR_11, VAR_12 = VAR_10 + 2;
  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
    int VAR_13;
    if (FUNC_0 (VAR_7 + VAR_12, "s:%d%n", &VAR_13, &VAR_10) != 1 || VAR_7[VAR_12 + VAR_10] != ':' || VAR_7[VAR_12 + VAR_10 + 1] != '"') {
      return -1;
    }
    VAR_12 += VAR_10 + 2;
    VAR_3[VAR_11] = VAR_7 + VAR_12;
    VAR_4[VAR_11] = VAR_13;

    VAR_12 += VAR_13;

    if (VAR_12 >= VAR_9 || VAR_7[VAR_12] != '"' || VAR_7[VAR_12 + 1] != ';') {
      return -1;
    }
    VAR_12 += 2;

    switch (VAR_7[VAR_12]) {
      case 'b':
        if (VAR_7[VAR_12 + 1] == ':' && (VAR_7[VAR_12 + 2] == '0' || VAR_7[VAR_12 + 2] == '1') && VAR_7[VAR_12 + 3] == ';') {
          VAR_7[VAR_12] = 'i';

          VAR_5[VAR_11] = VAR_7 + VAR_12 + 2;
          VAR_6[VAR_11] = 1;

          VAR_12 += 4;
        } else {
          return -1;
        }
        break;
      case 'd': {
        double VAR_14;
        if (FUNC_0 (VAR_7 + VAR_12, "d:%lf%n", &VAR_14, &VAR_10) != 1 || VAR_10 < 3 || VAR_7[VAR_12 + VAR_10] != ';') {
          return -1;
        }
        VAR_5[VAR_11] = VAR_7 + VAR_12 + 2;
        VAR_6[VAR_11] = VAR_10 - 2;

        VAR_12 += VAR_10 + 1;
        break;
      }
      case 'i':
        if (FUNC_0 (VAR_7 + VAR_12, "i:%d%n", &VAR_13, &VAR_10) != 1 || VAR_10 < 3 || VAR_7[VAR_12 + VAR_10] != ';') {
          return -1;
        }
        VAR_5[VAR_11] = VAR_7 + VAR_12 + 2;
        VAR_6[VAR_11] = VAR_10 - 2;

        VAR_12 += VAR_10 + 1;
        break;
      case 's':
        if (FUNC_0 (VAR_7 + VAR_12, "s:%d%n", &VAR_13, &VAR_10) != 1 || VAR_7[VAR_12 + VAR_10] != ':' || VAR_7[VAR_12 + VAR_10 + 1] != '"') {
          return -1;
        }
        VAR_12 += VAR_10 + 2;
        VAR_5[VAR_11] = VAR_7 + VAR_12;
        VAR_6[VAR_11] = VAR_13;

        VAR_12 += VAR_13;

        if (VAR_12 >= VAR_9) {
          return -1;
        }

        if (VAR_7[VAR_12++] != '"') {
          return -1;
        }
        if (VAR_7[VAR_12++] != ';') {
          return -1;
        }
        break;
      default:
        return -1;
    }
  }

  if (VAR_12 != VAR_9 - 1) {
    return -1;
  }
  return VAR_2 = VAR_8;
}
