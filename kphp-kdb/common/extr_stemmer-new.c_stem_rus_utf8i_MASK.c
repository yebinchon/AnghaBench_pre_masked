
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int* VAR_1 ;

int FUNC_2 (int *VAR_2, int VAR_3) {
  int VAR_4;
  for (VAR_4 = 0; VAR_2[VAR_4] && VAR_4 + 100 < VAR_0; VAR_4++) {
    VAR_1[VAR_4] = FUNC_0 (VAR_2[VAR_4]);
  }
  int VAR_5 = FUNC_1 (VAR_4, VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
    if (VAR_1[VAR_4] != 32) {
      VAR_2[VAR_4] = VAR_1[VAR_4] + 1072;
    }
  }
  VAR_2[VAR_5] = 0;
  return VAR_5;
}
