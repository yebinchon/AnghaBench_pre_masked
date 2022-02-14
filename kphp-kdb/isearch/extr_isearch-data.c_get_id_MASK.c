
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long VAR_0 ;
 int FUNC_0 (long long) ;

int FUNC_1 (int *VAR_1) {
  long long VAR_2 = 0;
  int VAR_3;
  for (VAR_3 = 0; VAR_1[VAR_3]; VAR_3++) {
    VAR_2 = VAR_2 * VAR_0 + VAR_1[VAR_3];
  }

  return FUNC_0 (VAR_2);
}
