
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,...) ;
 int VAR_5 ;
 int* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int,int*,int ) ;
 int VAR_8 ;

void FUNC_8 (void) {
  if (VAR_8) {
    int VAR_9;
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
      int VAR_10 = 0;
      int VAR_11 = FUNC_7 (VAR_6[VAR_9], &VAR_10, VAR_3);
      if (VAR_11 == VAR_6[VAR_9]) {
        if (FUNC_0 (VAR_10) || FUNC_1 (VAR_10)) {
          FUNC_6 ("Child %d terminated, aborting\n", VAR_6[VAR_9]);
          VAR_6[VAR_9] = 0;
          FUNC_5 (VAR_2);
          FUNC_2 ();
          FUNC_3 (VAR_1);
        }
      } else if (VAR_11 == 0) {
      } else if (VAR_11 != -1 || VAR_4 != VAR_0) {
        FUNC_6 ("Child %d: unknown result during wait (%d, %m), aborting\n", VAR_6[VAR_9], VAR_11);
        VAR_6[VAR_9] = 0;
        FUNC_5 (VAR_2);
        FUNC_2 ();
        FUNC_3 (VAR_1);
      }
    }
  } else if (VAR_7) {
    if (FUNC_4 () != VAR_5) {
      FUNC_6 ("Parent %d is changed to %d, aborting\n", VAR_5, FUNC_4 ());
      FUNC_3 (VAR_1);
    }
  }
}
