
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int) ;

void FUNC_6 (void) {
  if (VAR_2) {
    if (VAR_6 > 0) {
      FUNC_4 (VAR_5, "process with pid %d already generates index, skipping\n", VAR_2);
    }
    return;
  }

  FUNC_2 ();

  int VAR_7 = FUNC_3 ();

  if (VAR_7 < 0) {
    FUNC_4 (VAR_5, "fork: %m\n");
  } else if (!VAR_7) {
    VAR_1 = 0;
    FUNC_0 (VAR_4);
    VAR_7 = FUNC_5 (!VAR_0);
    FUNC_1 (VAR_7);
  } else {
    if (VAR_6 > 0) {
      FUNC_4 (VAR_5, "created child process pid = %d\n", VAR_7);
    }
    VAR_2 = VAR_7;
  }

  VAR_3 = 0;
}
