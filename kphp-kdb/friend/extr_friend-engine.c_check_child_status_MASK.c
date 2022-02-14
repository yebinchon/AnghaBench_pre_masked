
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,char*,int,...) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int,int*,int ) ;

void FUNC_5 (void) {
  if (!VAR_2) {
    return;
  }
  int VAR_6 = 0;
  int VAR_7 = FUNC_4 (VAR_2, &VAR_6, VAR_1);
  if (VAR_7 == VAR_2) {
    if (FUNC_1 (VAR_6) || FUNC_2 (VAR_6)) {
      if (VAR_5 > 0) {
        FUNC_3 (VAR_4, "child process %d terminated: exited = %d, signaled = %d, exit code = %d\n",
          VAR_2, FUNC_1 (VAR_6) ? 1 : 0, FUNC_2 (VAR_6) ? 1 : 0, FUNC_0 (VAR_6));
      }
      VAR_2 = 0;
    }
  } else if (VAR_7 == -1) {
    if (VAR_3 != VAR_0) {
      FUNC_3 (VAR_4, "waitpid (%d): %m\n", VAR_2);
      VAR_2 = 0;
    }
  } else if (VAR_7) {
    FUNC_3 (VAR_4, "waitpid (%d) returned %d???\n", VAR_2, VAR_7);
  }
}
