
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

void FUNC_1 (double *VAR_2, int VAR_3, int VAR_4) {
  if (VAR_3 >= VAR_4 || (VAR_3 > VAR_0 && VAR_4 < VAR_1)) {
    return;
  }

  int VAR_5 = VAR_3, VAR_6 = VAR_4;
  double VAR_7, VAR_8 = VAR_2[FUNC_0() % (VAR_4 - VAR_3 + 1) + VAR_3];

  while (VAR_5 <= VAR_6) {
    while (VAR_2[VAR_5] < VAR_8) {
      VAR_5++;
    }
    while (VAR_2[VAR_6] > VAR_8) {
      VAR_6--;
    }

    if (VAR_5 <= VAR_6) {
      VAR_7 = VAR_2[VAR_5];
      VAR_2[VAR_5] = VAR_2[VAR_6];
      VAR_2[VAR_6] = VAR_7;
      VAR_5++;
      VAR_6--;
    }
  }

  FUNC_1 (VAR_2, VAR_3, VAR_6);
  FUNC_1 (VAR_2, VAR_5, VAR_4);
}
