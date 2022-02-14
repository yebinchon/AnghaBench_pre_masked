
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {scalar_t__ kfrwk_waiting; int * kfrwk_tq; int kfrwk_que; int kfrwk_testlist; int kfrwk_testq; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,TYPE_1__*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*,int ,int ,int **) ;
 int FUNC_6 (int **,scalar_t__,int ,char*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_7(void)
{
 u_int VAR_8 = VAR_6 ? VAR_6 : VAR_0;

 FUNC_0();
 FUNC_1(&VAR_3.kfrwk_testq);
 FUNC_1(&VAR_3.kfrwk_testlist);

 FUNC_2(&VAR_3.kfrwk_que, 0, VAR_4, &VAR_3);
 VAR_3.kfrwk_tq = FUNC_5("sbtls_task", VAR_1,
     VAR_7, &VAR_3.kfrwk_tq);
 if (VAR_3.kfrwk_tq == ((void*)0)) {
  FUNC_4("Can't start taskqueue for Kernel Test Framework\n");
  FUNC_3("Taskqueue init fails for kfrwk");
 }
 FUNC_6(&VAR_3.kfrwk_tq, VAR_8, VAR_2, "[kt_frwk task]");
 VAR_3.kfrwk_waiting = VAR_8;
 VAR_5 = 1;
 return (0);
}
