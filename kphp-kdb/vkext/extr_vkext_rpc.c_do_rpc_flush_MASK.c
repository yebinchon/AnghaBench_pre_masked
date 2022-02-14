
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ,double) ;
 int VAR_0 ;
 int * VAR_1 ;

int FUNC_1 (double VAR_2) {
  int VAR_3;
  int VAR_4 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
    if (FUNC_0 (VAR_1[VAR_3], VAR_2) < 0) {
      VAR_4 ++;
    }
  }
  return -VAR_4;
}
