
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

int FUNC_0 (void) {
  int VAR_3;
  int VAR_4 = 0;

  for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++) {
    if (VAR_1 - VAR_2[VAR_3] > VAR_4) {
      VAR_4 = VAR_1 - VAR_2[VAR_3];
    }
  }
  return VAR_4;
}
