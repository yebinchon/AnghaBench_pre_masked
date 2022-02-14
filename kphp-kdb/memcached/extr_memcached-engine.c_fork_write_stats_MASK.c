
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 () ;

void FUNC_6 (void) {
  if (VAR_0) {
    return;
  }

  int VAR_4 = FUNC_3();

  if (VAR_4 < 0) {
    FUNC_4 (VAR_2, "fork: %m\n");
  } else if (!VAR_4) {
    FUNC_0 (FUNC_1 (VAR_1) >= 0);

    FUNC_5();
    FUNC_2 (0);
  } else {
    if (VAR_3 > 0) {
      FUNC_4 (VAR_2, "created child process pid = %d\n", VAR_4);
    }
    VAR_0 = VAR_4;
  }
}
