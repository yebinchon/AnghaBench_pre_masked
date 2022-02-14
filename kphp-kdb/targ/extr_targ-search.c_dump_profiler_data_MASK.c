
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_1 (void) {
  long VAR_7, VAR_8 = VAR_0;
  while (VAR_8 > 0 && !VAR_2[VAR_8-1]) {
    VAR_8--;
  }
  FUNC_0 (VAR_3, "%d queries performed in %.6d seconds, %.6d average; tot_users=%d\n", VAR_4, VAR_5, VAR_4 ? VAR_5 / VAR_4 : 0, VAR_6);
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
    FUNC_0 (VAR_3, "%ld:%ld/%d=%.0f ", VAR_7, VAR_1[VAR_7], VAR_2[VAR_7], VAR_2[VAR_7] ? (double) VAR_1[VAR_7] / VAR_2[VAR_7] : 0.0);
  }
  FUNC_0 (VAR_3, "\n");
}
