
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (int,int*) ;
 int* VAR_0 ;

int FUNC_2 (const char *VAR_1, int VAR_2, int *VAR_3) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_2 && VAR_1[VAR_4]; VAR_4++) {
    VAR_0[VAR_4] = FUNC_0 (VAR_1[VAR_4]);
  }
  VAR_0[VAR_4] = -1;
  return FUNC_1 (VAR_4, VAR_3);
}
