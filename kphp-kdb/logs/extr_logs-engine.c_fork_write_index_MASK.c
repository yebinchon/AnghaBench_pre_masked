
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_5 (void) {
  if (VAR_1) {
    if (VAR_4 > 0) {
      FUNC_3 (VAR_3, "process with pid %d already generates index, skipping\n", VAR_1);
    }
    return;
  }

  FUNC_1();

  int VAR_5 = FUNC_2();

  if (VAR_5 < 0) {
    FUNC_3 (VAR_3, "fork: %m\n");
  } else if (!VAR_5) {
    VAR_0 = ((void*)0);
    VAR_5 = FUNC_4();
    FUNC_0 (VAR_5);
  } else {
    if (VAR_4 > 0) {
      FUNC_3 (VAR_3, "created child process pid = %d\n", VAR_5);
    }
    VAR_1 = VAR_5;
  }

  VAR_2 = 0;
}
