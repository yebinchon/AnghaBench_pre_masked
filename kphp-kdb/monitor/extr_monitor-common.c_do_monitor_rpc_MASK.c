
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3 (void) {
  int VAR_3 = 0, VAR_4;
  VAR_2 = FUNC_0 (1000000);
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    if (FUNC_2 (FUNC_1 (VAR_0[VAR_4])) > 0) {
      VAR_3++;
    }
  }
  return VAR_3;
}
