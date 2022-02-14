
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_1 (void) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    if (VAR_0[VAR_4]) {
      FUNC_0 (VAR_4*VAR_2 + VAR_3, VAR_0[VAR_4]);
    }
  }
}
