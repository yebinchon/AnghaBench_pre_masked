
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__* VAR_3 ;

long FUNC_2 (void) {
  long VAR_4 = 0;
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5 += 1 + VAR_3[VAR_5]) {
    if (VAR_3[VAR_5]) {
      VAR_4 += FUNC_1 (&VAR_2[VAR_5]);
    } else {
      VAR_4 += FUNC_0 (&VAR_1[VAR_5]);
    }
  }
  return VAR_4;
}
