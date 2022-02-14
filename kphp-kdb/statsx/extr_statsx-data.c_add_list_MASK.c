
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4 (int **VAR_0, int VAR_1, int VAR_2, int VAR_3) {
  int *VAR_4 = *VAR_0;
  int VAR_5, VAR_6;
  if (!VAR_4) {
    *VAR_0 = VAR_4 = (int *) FUNC_3 (VAR_2 * 2 * sizeof(int)) + 2;
    VAR_4[-2] = VAR_2-1;
    VAR_4[-1] = 0;
  }
  for (VAR_5 = 0; VAR_5 < VAR_4[-1]; VAR_5++) {
    if (VAR_4[2*VAR_5] == VAR_1) {
      VAR_6 = ++VAR_4[2*VAR_5+1];
      if (VAR_5 && VAR_6 > VAR_4[2*VAR_5-1]) {
        while (VAR_5 && VAR_6 > VAR_4[2*VAR_5-1]) {
          VAR_4[2*VAR_5] = VAR_4[2*VAR_5-2];
          VAR_4[2*VAR_5+1] = VAR_4[2*VAR_5-1];
          VAR_5--;
        }
        VAR_4[2*VAR_5] = VAR_1;
        VAR_4[2*VAR_5+1] = VAR_6;
      }
      return;
    }
  }
  if (VAR_5 == VAR_4[-2]) {
    if (VAR_5 < VAR_3) {
      int *VAR_7 = VAR_4;
      VAR_4 = (int *) FUNC_3 ((VAR_5 + 1) * 4 * sizeof (int)) + 2;
      VAR_4[-2] = 2*VAR_5+1;
      FUNC_1 (VAR_4, VAR_7, VAR_5 * 2 * sizeof(int));
      FUNC_2 (VAR_7 - 2, (VAR_5 + 1) * 2 * sizeof (int));
      *VAR_0 = VAR_4;
    } else {
      return;
    }
  }
  FUNC_0 (VAR_5 < VAR_4[-2]);
  VAR_4[2*VAR_5] = VAR_1;
  VAR_4[2*VAR_5+1] = 1;
  VAR_4[-1] = VAR_5+1;
}
