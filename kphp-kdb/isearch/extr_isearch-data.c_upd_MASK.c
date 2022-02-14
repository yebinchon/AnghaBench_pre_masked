
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* data ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

void FUNC_1 (data VAR_1, int VAR_2) {
  int VAR_3 = VAR_1[VAR_0 - 1];
  if (FUNC_0 (VAR_2, VAR_3)) {
    int VAR_4, VAR_5 = (VAR_3 == VAR_2);
    for (VAR_4 = VAR_0 - 2; VAR_4 >= 0 && FUNC_0 (VAR_2, VAR_1[VAR_4]); VAR_4--) {
      if (VAR_5) {
        VAR_1[VAR_4 + 1] = VAR_1[VAR_4];
      }
      VAR_5 |= (VAR_1[VAR_4] == VAR_2);
    }

    if (!VAR_5) {
      for (VAR_5 = VAR_0 - 2; VAR_5 > VAR_4; VAR_5--) {
        VAR_1[VAR_5 + 1] = VAR_1[VAR_5];
      }
    }
    VAR_1[VAR_4 + 1] = VAR_2;
  }
}
