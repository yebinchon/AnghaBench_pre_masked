
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {short port; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (int *) ;
 char* VAR_7 ;
 int FUNC_9 (int,char*,...) ;

void FUNC_10() {
  FUNC_2();
  VAR_4 = (int)FUNC_8 (((void*)0));

  VAR_5 = FUNC_5();

  VAR_1.port = (short)VAR_6;

  VAR_2 = (1 << 26);
  FUNC_6();

  if (!VAR_7 && VAR_3 == VAR_0 && FUNC_4()) {
    VAR_3 = 1000;
  }

  if (FUNC_7 (VAR_3 + 16) < 0) {
    FUNC_9 (-1, "fatal: cannot raise open file limit to %d\n", VAR_3 + 16);
    FUNC_3 (1);
  }

  FUNC_0 (((void*)0));

  if (FUNC_1 (VAR_7) < 0) {
    FUNC_9 (-1, "fatal: cannot change user to %s\n", VAR_7 ? VAR_7 : "(none)");
    FUNC_3 (1);
  }
}
