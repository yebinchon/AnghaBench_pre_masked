
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mc_point_t ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1 (mc_point_t *VAR_0, int VAR_1) {
  int VAR_2, VAR_3;
  mc_point_t VAR_4, VAR_5;
  if (VAR_1 <= 0) {
    return;
  }
  if (VAR_1 == 1) {
    if (FUNC_0 (&VAR_0[0], &VAR_0[1]) > 0) {
      VAR_5 = VAR_0[0];
      VAR_0[0] = VAR_0[1];
      VAR_0[1] = VAR_5;
    }
    return;
  }
  VAR_2 = 0;
  VAR_3 = VAR_1;
  VAR_4 = VAR_0[VAR_3 >> 1];
  do {
    while (FUNC_0 (&VAR_0[VAR_2], &VAR_4) < 0) { VAR_2++; }
    while (FUNC_0 (&VAR_0[VAR_3], &VAR_4) > 0) { VAR_3--; }
    if (VAR_2 <= VAR_3) {
      VAR_5 = VAR_0[VAR_2]; VAR_0[VAR_2++] = VAR_0[VAR_3]; VAR_0[VAR_3--] = VAR_5;
    }
  } while (VAR_2 <= VAR_3);
  FUNC_1 (VAR_0+VAR_2, VAR_1-VAR_2);
  FUNC_1 (VAR_0, VAR_3);
}
