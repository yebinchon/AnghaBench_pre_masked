
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int dummy; } ;


 struct item** VAR_0 ;
 double* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0 (void) {
  int VAR_3, VAR_4, VAR_5;
  struct item *VAR_6;
  for (VAR_5 = VAR_2 - 1; VAR_5 > 0; VAR_5--) {
    VAR_6 = VAR_0[VAR_5+1];
    double VAR_7 = VAR_1[VAR_5+1];
    VAR_0[VAR_5+1] = VAR_0[1];
    VAR_1[VAR_5+1] = VAR_1[1];
    VAR_3 = 1;
    while (1) {
      VAR_4 = 2*VAR_3;
      if (VAR_4 > VAR_5) { break; }
      if (VAR_4 < VAR_5) {
        if (VAR_1[VAR_4+1] > VAR_1[VAR_4]) { VAR_4++; }
      }
      if (VAR_7 >= VAR_1[VAR_4]) { break; }
      VAR_0[VAR_3] = VAR_0[VAR_4];
      VAR_1[VAR_3] = VAR_1[VAR_4];
      VAR_3 = VAR_4;
    }
    VAR_0[VAR_3] = VAR_6;
    VAR_1[VAR_3] = VAR_7;
  }

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    VAR_0[VAR_3] = VAR_0[VAR_3+1];
    VAR_1[VAR_3] = VAR_1[VAR_3+1];
  }
}
