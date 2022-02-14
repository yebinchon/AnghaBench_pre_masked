
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,unsigned int,unsigned int) ;
 int * VAR_0 ;
 int VAR_1 ;

int FUNC_1 (unsigned VAR_2, unsigned VAR_3) {
  int VAR_4;
  int VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    int VAR_6 = FUNC_0 (&VAR_0[VAR_4], VAR_2, VAR_3);
    if (VAR_6 == 2) {
      return 2;
    }
    if (VAR_6 == 1) {
      VAR_5 = 1;
    }
  }
  return VAR_5;
}
