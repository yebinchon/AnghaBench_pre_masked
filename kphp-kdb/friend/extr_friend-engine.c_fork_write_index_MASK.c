
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_5 (void) {
  if (VAR_2) {
    if (VAR_5 > 0) {
      FUNC_3 (VAR_4, "process with pid %d already generates index, skipping\n", VAR_2);
    }
    return;
  }

  FUNC_1 ();

  int VAR_6 = FUNC_2 ();

  if (VAR_6 < 0) {
    FUNC_3 (VAR_4, "fork: %m\n");
  } else if (!VAR_6) {
    VAR_1 = 0;
    VAR_6 = FUNC_4 (!VAR_0);
    FUNC_0 (VAR_6);
  } else {
    if (VAR_5 > 0) {
      FUNC_3 (VAR_4, "created child process pid = %d\n", VAR_6);
    }
    VAR_2 = VAR_6;
  }

  VAR_3 = 0;
}
