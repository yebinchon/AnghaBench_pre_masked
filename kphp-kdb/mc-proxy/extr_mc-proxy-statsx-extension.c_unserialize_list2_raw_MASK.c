
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

int *FUNC_1 (int *VAR_0, int *VAR_1, int VAR_2) {
  int VAR_3 = *(VAR_0++);
  FUNC_0 (VAR_3 <= VAR_2);
  int VAR_4, VAR_5;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    int VAR_6 = *(VAR_0++);
    int VAR_7 = *(VAR_0++);
    int VAR_8 = -1;
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5 ++) if (VAR_1[2 * VAR_5] == VAR_6) {
      VAR_1[2 * VAR_5 + 1] += VAR_7;
      VAR_8 = VAR_5;
      break;
    }
    if (VAR_8 < 0 && VAR_1[2 * (VAR_2 - 1) + 1] < VAR_7) {
      VAR_1[2 * (VAR_2 - 1) + 1] = VAR_7;
      VAR_1[2 * (VAR_2 - 1)] = VAR_6;
      VAR_8 = (VAR_2 - 1);
    }
    while (VAR_8 > 0) {
      if (VAR_1[2 * VAR_8 + 1] > VAR_1[2 * VAR_8 - 1]) {
        int VAR_9;
        VAR_9 = VAR_1[2 * VAR_8 + 1]; VAR_1[2 * VAR_8 + 1] = VAR_1[2 * VAR_8 - 1]; VAR_1[2 * VAR_8 - 1] = VAR_9;
        VAR_9 = VAR_1[2 * VAR_8 + 0]; VAR_1[2 * VAR_8 + 0] = VAR_1[2 * VAR_8 - 2]; VAR_1[2 * VAR_8 - 2] = VAR_9;
        VAR_8 --;
      } else {
        break;
      }
    }
  }
  return VAR_0;
}
