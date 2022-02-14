
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int** VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;

int FUNC_4 (int VAR_11, char *VAR_12[]) {
  int VAR_13, VAR_14;

  if (VAR_11 <= 0 || VAR_11 > VAR_1) {
    return -1;
  }

  int VAR_15 = 0;

  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
    VAR_9[VAR_13] = FUNC_3 (VAR_12[VAR_13]);
    if (VAR_9[VAR_13] <= 0 || VAR_9[VAR_13] > VAR_0) {
      return -1;
    }
    VAR_15 += VAR_9[VAR_13] + 1;
  }

  if (VAR_15 >= VAR_2) {
    return -1;
  }

  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
    int VAR_16 = VAR_9[VAR_13], VAR_17 = 0;
    char *VAR_18 = VAR_12[VAR_13];
    int VAR_19[VAR_16 + 1];

    VAR_19[0] = -1;
    VAR_19[1] = 0;
    VAR_14 = 1;
    while (VAR_14 < VAR_16) {
      while (VAR_17 >= 0 && VAR_18[VAR_14] != VAR_18[VAR_17]) {
        VAR_17 = VAR_19[VAR_17];
      }
      VAR_19[++VAR_14] = ++VAR_17;
    }

    for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
      if (VAR_13 == VAR_14 || VAR_9[VAR_14] < VAR_16) {
        continue;
      }

      VAR_17 = 0;
      char *VAR_20 = VAR_12[VAR_14];
      while (*VAR_20) {
        while (VAR_17 >= 0 && *VAR_20 != VAR_18[VAR_17]) {
          VAR_17 = VAR_19[VAR_17];
        }
        if (++VAR_17 == VAR_16) {
          break;
        }
        VAR_20++;
      }

      if (VAR_17 == VAR_16) {
        break;
      }
    }

    if (VAR_17 == VAR_16) {
      VAR_9[VAR_13] = 0;
    }
  }

  int VAR_21 = 0;
  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
    if (VAR_9[VAR_13] > 0) {
      VAR_9[VAR_21] = VAR_9[VAR_13];
      VAR_10[VAR_21++] = VAR_12[VAR_13];
    }
  }

  VAR_7 = VAR_21;

  FUNC_2 (0, VAR_7 - 1);

  int VAR_22 = 0;
  VAR_6 = 1;

  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
    FUNC_1 (VAR_8 + VAR_6, VAR_10[VAR_13], VAR_9[VAR_13] + 1);
    VAR_10[VAR_13] = VAR_8 + VAR_6;
    VAR_3[VAR_13] = 0;
    VAR_6 += VAR_9[VAR_13] + 1;
    if (VAR_9[VAR_13] > VAR_22) {
      VAR_22 = VAR_9[VAR_13];
    }
  }
  FUNC_0 (VAR_6 <= VAR_2);

  VAR_4[0] = -1;

  int VAR_23;
  for (VAR_23 = 0; VAR_23 <= VAR_22; VAR_23++) {
    int VAR_24 = -1, VAR_25 = -256, VAR_26 = -1, VAR_27 = -1;

    for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
      if (VAR_9[VAR_13] < VAR_23) {
        continue;
      }
      int VAR_28 = VAR_10[VAR_13] + VAR_23 - VAR_8;
      if (VAR_9[VAR_13] == VAR_23) {
        VAR_5[VAR_28] = (1 << VAR_13);
      } else {
        VAR_5[VAR_28] = 0;
      }
      if (VAR_24 != VAR_3[VAR_13]) {
        int VAR_29 = VAR_4[VAR_28-1];
        while (VAR_29 > 0 && VAR_10[VAR_13][VAR_23-1] != VAR_8[VAR_29]) {
          VAR_29 = VAR_4[VAR_29];
        }
        VAR_4[VAR_28] = VAR_29 + 1;
        VAR_24 = VAR_3[VAR_13];
        VAR_25 = VAR_10[VAR_13][VAR_23];
        VAR_26 = VAR_13;
        VAR_27 = VAR_28;
      } else if (VAR_25 != VAR_10[VAR_13][VAR_23]) {
        VAR_4[VAR_28] = VAR_4[VAR_27];
        VAR_4[VAR_27] = VAR_28;
        VAR_25 = VAR_10[VAR_13][VAR_23];
        VAR_26 = VAR_13;
        VAR_27 = VAR_28;
      }
      VAR_3[VAR_13] = VAR_26;
    }
  }
  return VAR_6;
}
