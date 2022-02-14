
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
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int,char*,int,int,int,int ) ;
 int FUNC_5 (int,int*,int ) ;

void FUNC_6 (void) {
  if (!VAR_2) {
    return;
  }
  int VAR_4 = 0;
  int VAR_5 = FUNC_5 (VAR_2, &VAR_4, VAR_1);
  if (VAR_5 == VAR_2) {
    if (FUNC_1 (VAR_4) || FUNC_2 (VAR_4)) {
      FUNC_4 (1, "child process %d terminated: exited = %d, signaled = %d, exit code = %d\n",
                VAR_2, FUNC_1 (VAR_4) ? 1 : 0, FUNC_2 (VAR_4) ? 1 : 0, FUNC_0 (VAR_4));
      VAR_2 = 0;
    }
  } else if (VAR_5 == -1) {
    if (VAR_3 != VAR_0) {
      FUNC_3 ("waitpid (%d): %m\n", VAR_2);
      VAR_2 = 0;
    }
  } else if (VAR_5) {
    FUNC_3 ("waitpid (%d) returned %d???\n", VAR_2, VAR_5);
  }
}
