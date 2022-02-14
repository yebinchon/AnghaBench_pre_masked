
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* FUNC_0 (int *,int) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int) ;
 double FUNC_2 (int) ;

double FUNC_3 (int VAR_2) {
  int *VAR_3 = FUNC_0 (&VAR_1, VAR_2), VAR_4 = 0;

  if (VAR_3 != ((void*)0)) {
    VAR_4 = *VAR_3;
  }

  if (VAR_4 <= 2) {
    return 0.0;
  }

  if (FUNC_1 (&VAR_0, VAR_2) != ((void*)0)) {
    return 0.1;
  }

  return 1.0 / FUNC_2 (VAR_4 + 100);
}
