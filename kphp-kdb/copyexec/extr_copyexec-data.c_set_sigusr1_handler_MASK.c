
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void FUNC_3 (void) {
  struct sigaction VAR_2;
  sigset_t VAR_3;
  FUNC_2 (&VAR_3);
  VAR_2.sa_handler = VAR_1;
  VAR_2.sa_mask = VAR_3;
  VAR_2.sa_flags = 0;
  FUNC_0 (!FUNC_1 (VAR_0, &VAR_2, ((void*)0)));
}
