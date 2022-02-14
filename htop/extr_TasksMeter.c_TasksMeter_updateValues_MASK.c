
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* values; scalar_t__ total; TYPE_2__* pl; } ;
struct TYPE_6__ {scalar_t__ kernelThreads; scalar_t__ userlandThreads; scalar_t__ totalTasks; TYPE_1__* settings; int cpuCount; int runningTasks; } ;
struct TYPE_5__ {scalar_t__ hideKernelThreads; } ;
typedef TYPE_2__ ProcessList ;
typedef TYPE_3__ Meter ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,char*,int,int) ;

__attribute__((used)) static void FUNC_2(Meter* VAR_0, char* VAR_1, int VAR_2) {
   ProcessList* VAR_3 = VAR_0->pl;
   VAR_0->values[0] = VAR_3->kernelThreads;
   VAR_0->values[1] = VAR_3->userlandThreads;
   VAR_0->values[2] = VAR_3->totalTasks - VAR_3->kernelThreads - VAR_3->userlandThreads;
   VAR_0->values[3] = FUNC_0(VAR_3->runningTasks, VAR_3->cpuCount);
   if (VAR_3->totalTasks > VAR_0->total) {
      VAR_0->total = VAR_3->totalTasks;
   }
   if (VAR_0->pl->settings->hideKernelThreads) {
      VAR_0->values[0] = 0;
   }
   FUNC_1(VAR_1, VAR_2, "%d/%d", (int) VAR_0->values[3], (int) VAR_0->total);
}
