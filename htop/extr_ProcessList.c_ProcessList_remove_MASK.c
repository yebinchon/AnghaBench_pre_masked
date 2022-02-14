
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned int pid; } ;
struct TYPE_7__ {int processes; int processTable; } ;
typedef TYPE_1__ ProcessList ;
typedef TYPE_2__ Process ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ,unsigned int) ;
 TYPE_2__* FUNC_2 (int ,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_2__*,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;

void FUNC_7(ProcessList* VAR_1, Process* VAR_2) {
   FUNC_6(FUNC_4(VAR_1->processes, VAR_2, VAR_0) != -1);
   FUNC_6(FUNC_1(VAR_1->processTable, VAR_2->pid) != ((void*)0));
   Process* VAR_3 = FUNC_2(VAR_1->processTable, VAR_2->pid);
   FUNC_6(VAR_3 == VAR_2); (void)VAR_3;
   unsigned int VAR_4 = VAR_2->pid;
   int VAR_5 = FUNC_4(VAR_1->processes, VAR_2, VAR_0);
   FUNC_6(VAR_5 != -1);
   if (VAR_5 >= 0) FUNC_5(VAR_1->processes, VAR_5);
   FUNC_6(FUNC_1(VAR_1->processTable, VAR_4) == ((void*)0)); (void)VAR_4;
   FUNC_6(FUNC_0(VAR_1->processTable) == FUNC_3(VAR_1->processes));
}
