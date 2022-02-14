
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int) ;

void FUNC_2 (void) {
  int VAR_3, VAR_4 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
    if (VAR_1[VAR_3]) {
      VAR_1[VAR_4] = VAR_1[VAR_3];
      VAR_2[VAR_4] = VAR_2[VAR_3];
      VAR_4++;
    }
  }
  if (VAR_4 > 0) {
    FUNC_1 (0, VAR_4 - 1);
    for (VAR_3 = VAR_4 - 1; VAR_3 >= 0 && VAR_3 >= VAR_4 - 100; VAR_3--) {
      FUNC_0 ("%d\t%d\n", VAR_1[VAR_3], VAR_2[VAR_3]);
    }
  }
}
