
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int VAR_7 ;

void FUNC_4 (void) {
  int VAR_8;
  while (VAR_6) {
    int VAR_9 = 2147483637, VAR_10, VAR_11;
    for (VAR_8 = VAR_0; VAR_8 < VAR_1; VAR_8++) {
      if (VAR_5[VAR_8] >= 0 && VAR_4[VAR_8] - VAR_3[VAR_8] < 2 * (int)sizeof (int) && FUNC_2 (VAR_8) == -1) {
        VAR_5[VAR_8] = -1;
        VAR_6--;
        FUNC_0 (VAR_4[VAR_8] == VAR_3[VAR_8]);
      }
    }

    for (VAR_8 = VAR_0; VAR_8 < VAR_1; VAR_8++) {
      if (VAR_5[VAR_8] >= 0) {
        char *VAR_12 = VAR_2[VAR_8] + VAR_3[VAR_8];
        VAR_10 = ((int *)VAR_12)[0];
        VAR_11 = ((int *)VAR_12)[1];

        if (VAR_4[VAR_8] - VAR_3[VAR_8] < 2 * (int)sizeof (int) + VAR_11) {
          if (FUNC_2 (VAR_8) == -1 || VAR_4[VAR_8] - VAR_3[VAR_8] < 2 * (int)sizeof (int) + VAR_11) {
            FUNC_1 (VAR_7, "Dump %d is broken. It contains event of size %d. f_buff_size = %d, f_buff_r = %d.\n", VAR_8, VAR_11, VAR_4[VAR_8], VAR_3[VAR_8]);
            FUNC_0 (0);
          }
        }
        if (VAR_10 < VAR_9) {
          VAR_9 = VAR_10;
        }
      }
    }

    for (VAR_8 = VAR_0; VAR_8 < VAR_1; VAR_8++) {
      if (VAR_5[VAR_8] >= 0) {
        char *VAR_13 = VAR_2[VAR_8] + VAR_3[VAR_8];
        VAR_10 = ((int *)VAR_13)[0];
        if (VAR_10 == VAR_9) {
          VAR_11 = ((int *)VAR_13)[1];
          FUNC_3 (VAR_13, 2 * sizeof (int) + VAR_11);
          VAR_3[VAR_8] += 2 * sizeof (int) + VAR_11;
        }
      }
    }
  }
}
