
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int updated; int show; } ;
struct TYPE_7__ {int processes; scalar_t__ runningTasks; scalar_t__ kernelThreads; scalar_t__ userlandThreads; scalar_t__ totalTasks; } ;
typedef TYPE_1__ ProcessList ;
typedef TYPE_2__ Process ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(ProcessList* VAR_0) {


   for (int VAR_1 = 0; VAR_1 < FUNC_3(VAR_0->processes); VAR_1++) {
      Process* VAR_2 = (Process*) FUNC_2(VAR_0->processes, VAR_1);
      VAR_2->updated = 0;
      VAR_2->show = 1;
   }

   VAR_0->totalTasks = 0;
   VAR_0->userlandThreads = 0;
   VAR_0->kernelThreads = 0;
   VAR_0->runningTasks = 0;

   FUNC_0(VAR_0);

   for (int VAR_3 = FUNC_3(VAR_0->processes) - 1; VAR_3 >= 0; VAR_3--) {
      Process* VAR_4 = (Process*) FUNC_2(VAR_0->processes, VAR_3);
      if (VAR_4->updated == 0)
         FUNC_1(VAR_0, VAR_4);
      else
         VAR_4->updated = 0;
   }
}
