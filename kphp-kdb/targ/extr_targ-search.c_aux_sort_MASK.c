
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

void FUNC_0 (long VAR_1, long VAR_2) {
  if (VAR_1 >= VAR_2) {
    return;
  }
  int VAR_3 = VAR_0[(VAR_1 + VAR_2) >> 1], VAR_4;
  long VAR_5 = VAR_1, VAR_6 = VAR_2;
  do {
    while (VAR_0[VAR_5] < VAR_3) { VAR_5++; }
    while (VAR_0[VAR_6] > VAR_3) { VAR_6--; }
    if (VAR_5 <= VAR_6) {
      VAR_4 = VAR_0[VAR_5];
      VAR_0[VAR_5++] = VAR_0[VAR_6];
      VAR_0[VAR_6--] = VAR_4;
    }
  } while (VAR_5 <= VAR_6);
  FUNC_0 (VAR_1, VAR_6);
  FUNC_0 (VAR_5, VAR_2);
}
