
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sfd; } ;
typedef TYPE_1__ engine_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (int) ;

void FUNC_5 (engine_t *VAR_3) {
  FUNC_1 (VAR_3->sfd);
  FUNC_0 (VAR_3->sfd);
  FUNC_2 ();
  FUNC_4 (2);
  if (VAR_2 & (1 << VAR_1)) {
    FUNC_3 ("Terminated by SIGTERM.\n");
  } else if (VAR_2 & (1 << VAR_0)) {
    FUNC_3 ("Terminated by SIGINT.\n");
  }
}
