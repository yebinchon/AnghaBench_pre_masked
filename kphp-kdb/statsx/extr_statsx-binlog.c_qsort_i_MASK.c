
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0 (int VAR_2, int VAR_3) {
  int VAR_4, VAR_5;
  int VAR_6;
  if (VAR_2 >= VAR_3) { return; }
  VAR_6 = VAR_1[(VAR_2+VAR_3)>>1];
  VAR_4 = VAR_2;
  VAR_5 = VAR_3;
  do {
    while (VAR_1[VAR_4] < VAR_6) { VAR_4++; }
    while (VAR_1[VAR_5] > VAR_6) { VAR_5--; }
    if (VAR_4 <= VAR_5) {
      int VAR_7 = VAR_1[VAR_4]; VAR_1[VAR_4] = VAR_1[VAR_5]; VAR_1[VAR_5] = VAR_7;
      VAR_7 = VAR_0[VAR_4]; VAR_0[VAR_4] = VAR_0[VAR_5]; VAR_0[VAR_5] = VAR_7;
      VAR_4++; VAR_5--;
    }
  } while (VAR_4 <= VAR_5);
  FUNC_0 (VAR_2, VAR_5);
  FUNC_0 (VAR_4, VAR_3);
}
