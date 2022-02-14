
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uid_t ;
typedef int UsersTable ;
struct TYPE_6__ {scalar_t__ runningTasks; scalar_t__ totalTasks; scalar_t__ userlandThreads; scalar_t__ kernelThreads; int cpuCount; } ;
struct TYPE_7__ {TYPE_1__ super; int vm_stats; int curr_load; int host_info; int prev_load; } ;
typedef TYPE_1__ ProcessList ;
typedef int Hashtable ;
typedef TYPE_2__ DarwinProcessList ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ,int *,int *,int ) ;
 TYPE_2__* FUNC_5 (int,int) ;

ProcessList* FUNC_6(UsersTable* VAR_1, Hashtable* VAR_2, uid_t VAR_3) {
   DarwinProcessList* VAR_4 = FUNC_5(1, sizeof(DarwinProcessList));

   FUNC_4(&VAR_4->super, FUNC_0(VAR_0), VAR_1, VAR_2, VAR_3);


   VAR_4->super.cpuCount = FUNC_1(&VAR_4->prev_load);
   FUNC_2(&VAR_4->host_info);
   FUNC_1(&VAR_4->curr_load);


   FUNC_3(&VAR_4->vm_stats);

   VAR_4->super.kernelThreads = 0;
   VAR_4->super.userlandThreads = 0;
   VAR_4->super.totalTasks = 0;
   VAR_4->super.runningTasks = 0;

   return &VAR_4->super;
}
