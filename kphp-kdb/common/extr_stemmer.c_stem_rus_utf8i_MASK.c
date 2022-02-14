
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const) ;
 int FUNC_1 (int,int*) ;
 int* VAR_0 ;

int FUNC_2 (const int *VAR_1, int *VAR_2) {
  int VAR_3;
  for (VAR_3 = 0; VAR_1[VAR_3]; VAR_3++) {
    VAR_0[VAR_3] = FUNC_0 (VAR_1[VAR_3]);
  }
  VAR_0[VAR_3] = -1;
  return FUNC_1 (VAR_3, VAR_2);
}
