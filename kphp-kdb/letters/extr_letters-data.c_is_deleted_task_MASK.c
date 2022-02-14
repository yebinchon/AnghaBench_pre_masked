
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* FUNC_0 (int *,long long) ;
 int FUNC_1 () ;
 int VAR_0 ;

int FUNC_2 (long long VAR_1, int VAR_2) {
  FUNC_1();

  if (VAR_1 != 0) {
    int *VAR_3 = FUNC_0 (&VAR_0, VAR_1);
    if (VAR_3 != ((void*)0) && *VAR_3 >= VAR_2) {
      return 1;
    }
  }
  return 0;
}
