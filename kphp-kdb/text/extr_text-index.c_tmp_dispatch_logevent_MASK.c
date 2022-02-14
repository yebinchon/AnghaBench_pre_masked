
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *,void const*,int) ;

int FUNC_3 (const void *VAR_3, int VAR_4) {
  FUNC_0 (VAR_4 >= 8);
  int VAR_5 = ((int *) VAR_3)[1];
  int VAR_6 = FUNC_1 (VAR_5);
  if (VAR_6 < 0) {
    return 0;
  }
  int VAR_7 = -1, VAR_8 = VAR_1, VAR_9;
  while (VAR_8 - VAR_7 > 1) {
    VAR_9 = ((VAR_7 + VAR_8) >> 1);
    if (VAR_0[VAR_9] <= VAR_6) {
      VAR_7 = VAR_9;
    } else {
      VAR_8 = VAR_9;
    }
  }
  FUNC_0 (VAR_7 >= 0 && VAR_6 < VAR_0[VAR_8]);
  FUNC_2 (&VAR_2[VAR_7], VAR_3, VAR_4);
  return 1;
}
