
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0 (int VAR_0, int *VAR_1, int VAR_2, int VAR_3, int VAR_4, int *VAR_5, int *VAR_6) {
  int VAR_7;
  if (VAR_2 == VAR_0) {
    if (VAR_4 < *VAR_5) {
      *VAR_5 = VAR_4;
      *VAR_6 = VAR_3;
    }
    return;
  }
  FUNC_0 (VAR_0, VAR_1, VAR_2 + 1, VAR_3, VAR_4, VAR_5, VAR_6);
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
    if (((1 << VAR_7) & VAR_3) && !(VAR_1[VAR_7] & (1 << VAR_2))) {
      return;
    }
  }
  FUNC_0 (VAR_0, VAR_1, VAR_2 + 1, VAR_3 | (1 << VAR_2), VAR_4 + 1, VAR_5, VAR_6);
}
