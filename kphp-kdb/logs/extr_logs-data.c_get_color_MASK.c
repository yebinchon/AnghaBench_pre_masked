
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int* FUNC_1 (int *,long long) ;
 int* FUNC_2 (int *,long long) ;
 scalar_t__* VAR_3 ;

int FUNC_3 (int VAR_4, long long VAR_5) {
  FUNC_0 (0 <= VAR_4 && VAR_4 < VAR_0);

  if (VAR_3[VAR_4]) {
    int *VAR_6 = FUNC_2 (&VAR_2[VAR_4], VAR_5);
    if (VAR_6 != ((void*)0)) {
      return *VAR_6;
    }
  } else {
    int *VAR_7 = FUNC_1 (&VAR_1[VAR_4], VAR_5);
    if (VAR_7 != ((void*)0)) {
      return *VAR_7;
    }
  }

  return 0;
}
