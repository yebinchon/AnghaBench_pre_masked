
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*) ;

void FUNC_5 (void) {
  VAR_0 = FUNC_1 ();
  VAR_1 = FUNC_0 (VAR_0);
  int VAR_2 = FUNC_3 (((void*)0)) - VAR_1;
  if (!(VAR_2 > -10 && VAR_2 < 10)) {
    FUNC_4 (1, "copyexec_main_process_init: |time (NULL) - get_process_creation_time (getpid ())| >= 10\n");
  }
  FUNC_2 ();
}
