
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (char*,...) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_9() {
 if (VAR_0) {
  FUNC_7("\n");
  FUNC_8("Warning... previous crack still running!\n");
  FUNC_6();
 }

 if (VAR_4.fd) {
  if (FUNC_4(VAR_4.fd) == -1)
   FUNC_1(1, "fsync");
 }

 VAR_0 = FUNC_3();

 if (VAR_0 == -1)
  FUNC_1(1, "fork");


 if (VAR_0 == 0) {
  if (!FUNC_0())
   FUNC_7("\nCrack unsuccessful\n");
  FUNC_2(1);
 }


 FUNC_7("\n");
 FUNC_8("Starting crack PID=%d\n", VAR_0);
 if (FUNC_5(&VAR_1, ((void*)0)) == -1)
  FUNC_1(1, "gettimeofday");


 VAR_3 += VAR_2;
}
