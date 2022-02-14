
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int pid; } ;
struct TYPE_8__ {int processes; int processTable; } ;
typedef TYPE_1__ ProcessList ;
typedef TYPE_2__ Process ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_2__*,int ) ;
 int FUNC_6 (int) ;

void FUNC_7(ProcessList* VAR_1, Process* VAR_2) {
   FUNC_6(FUNC_5(VAR_1->processes, VAR_2, VAR_0) == -1);
   FUNC_6(FUNC_1(VAR_1->processTable, VAR_2->pid) == ((void*)0));

   FUNC_3(VAR_1->processes, VAR_2);
   FUNC_2(VAR_1->processTable, VAR_2->pid, VAR_2);

   FUNC_6(FUNC_5(VAR_1->processes, VAR_2, VAR_0) != -1);
   FUNC_6(FUNC_1(VAR_1->processTable, VAR_2->pid) != ((void*)0));
   FUNC_6(FUNC_0(VAR_1->processTable) == FUNC_4(VAR_1->processes));
}
