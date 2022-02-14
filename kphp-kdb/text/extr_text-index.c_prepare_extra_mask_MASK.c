
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_8 ;

void FUNC_2 (void) {
  int VAR_9, VAR_10;
  VAR_5 = VAR_3;
  VAR_4 = 0;

  VAR_10 = FUNC_1 (VAR_5);
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
    VAR_2[VAR_9] = VAR_0[VAR_9] = -1;
    if (VAR_10 & (1 << VAR_9)) {
      VAR_2[VAR_9] = VAR_4;
      VAR_0[VAR_4++] = VAR_9;
    }
  }
  VAR_7 = VAR_4 * 4;
  if (VAR_8 > 0) {
    FUNC_0 (VAR_6, "extra_mask=%08x, extra_ints=%d\n", VAR_5, VAR_4);
  }
}
