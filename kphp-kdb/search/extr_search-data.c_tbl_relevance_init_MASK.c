
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 double* VAR_4 ;

__attribute__((used)) static void FUNC_1 (void) {
  int VAR_5;
  if (!VAR_1) { return; }
  if (FUNC_0 (VAR_3 - VAR_0) < 1e-9) {
    VAR_0 = VAR_3;
    return;
  }
  VAR_3 = VAR_0;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    VAR_4[VAR_5] = -1.0;
  }
}
