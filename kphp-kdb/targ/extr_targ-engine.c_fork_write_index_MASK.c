
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
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int) ;

void FUNC_7 (void) {
  if (VAR_2) {
    FUNC_5 (1, "process with pid %d already generates index, skipping\n", VAR_2);
    return;
  }

  FUNC_2 ();

  int VAR_5 = FUNC_3 ();

  if (VAR_5 < 0) {
    FUNC_4 ("fork: %m\n");
  } else if (!VAR_5) {
    VAR_1 = 0;
    FUNC_0 (VAR_4);
    VAR_5 = FUNC_6 (!VAR_0);
    FUNC_1 (VAR_5);
  } else {
    FUNC_5 (1, "created child process pid = %d\n", VAR_5);
    VAR_2 = VAR_5;
  }

  VAR_3 = 0;
}
