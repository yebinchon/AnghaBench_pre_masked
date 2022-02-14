
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__*,int) ;

void FUNC_3 (void) {
  int VAR_8 = 1, VAR_9 = 1;
  while (VAR_8 || VAR_9) {
    if (VAR_8 && VAR_9 && VAR_0 == VAR_1 && VAR_2 == VAR_5) {
      VAR_8 = FUNC_0();
      VAR_9 = FUNC_1();
    } else if (!VAR_9 || (VAR_8 && (VAR_0 < VAR_1 || (VAR_0 == VAR_1 && (VAR_3 < VAR_6 || (VAR_3 == VAR_6 && VAR_4 < VAR_7)))))) {
      FUNC_2 (&VAR_0, sizeof (int));
      FUNC_2 (&VAR_2, sizeof (int));
      VAR_8 = FUNC_0();
    } else {
      FUNC_2 (&VAR_1, sizeof (int));
      FUNC_2 (&VAR_5, sizeof (int));
      VAR_9 = FUNC_1();
    }
  }
}
