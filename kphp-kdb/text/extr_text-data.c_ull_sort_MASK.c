
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0 (unsigned long long *VAR_0, int VAR_1) {
  int VAR_2 = 0, VAR_3 = VAR_1;
  unsigned long long VAR_4, VAR_5;
  if (VAR_1 <= 0) { return; }
  VAR_4 = VAR_0[VAR_1 >> 1];
  do {
    while (VAR_0[VAR_2] < VAR_4) { VAR_2++; }
    while (VAR_0[VAR_3] > VAR_4) { VAR_3--; }
    if (VAR_2 <= VAR_3) {
      VAR_5 = VAR_0[VAR_2]; VAR_0[VAR_2++] = VAR_0[VAR_3]; VAR_0[VAR_3--] = VAR_5;
    }
  } while (VAR_2 <= VAR_3);
  FUNC_0 (VAR_0+VAR_2, VAR_1-VAR_2);
  FUNC_0 (VAR_0, VAR_3);
}
