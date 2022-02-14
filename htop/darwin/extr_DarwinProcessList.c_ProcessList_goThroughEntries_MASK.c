
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


struct timeval {int tv_sec; } ;
struct TYPE_18__ {int p_pid; } ;
struct kinfo_proc {TYPE_2__ kp_proc; } ;
struct TYPE_22__ {scalar_t__* cpu_ticks; } ;
struct TYPE_16__ {int st_uid; int user; } ;
struct TYPE_21__ {TYPE_11__ super; } ;
struct TYPE_17__ {int cpuCount; } ;
struct TYPE_20__ {TYPE_8__* prev_load; TYPE_8__* curr_load; scalar_t__ global_diff; TYPE_1__ super; int vm_stats; } ;
struct TYPE_19__ {int usersTable; scalar_t__ totalTasks; scalar_t__ runningTasks; scalar_t__ userlandThreads; scalar_t__ kernelThreads; } ;
typedef int Process_New ;
typedef TYPE_3__ ProcessList ;
typedef TYPE_4__ DarwinProcessList ;
typedef TYPE_5__ DarwinProcess ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_11__*,struct kinfo_proc*,int ,int) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_11__*) ;
 int FUNC_5 (TYPE_8__**) ;
 int FUNC_6 (TYPE_8__**) ;
 struct kinfo_proc* FUNC_7 (size_t*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int ,int*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct kinfo_proc*) ;
 int FUNC_12 (struct timeval*,int *) ;

void FUNC_13(ProcessList* VAR_2) {
    DarwinProcessList *VAR_3 = (DarwinProcessList *)VAR_2;
 bool VAR_4 = 1;
 struct kinfo_proc *VAR_5;
 size_t VAR_6;
    DarwinProcess *VAR_7;
    struct timeval VAR_8;

    FUNC_12(&VAR_8, ((void*)0));


    FUNC_6(&VAR_3->prev_load);
    VAR_3->prev_load = VAR_3->curr_load;
    FUNC_5(&VAR_3->curr_load);
    FUNC_9(&VAR_3->vm_stats);


    VAR_3->global_diff = 0;
    for(int VAR_9 = 0; VAR_9 < VAR_3->super.cpuCount; ++VAR_9) {
        for(size_t VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
            VAR_3->global_diff += VAR_3->curr_load[VAR_9].cpu_ticks[VAR_10] - VAR_3->prev_load[VAR_9].cpu_ticks[VAR_10];
        }
    }


    VAR_2->kernelThreads = 0;
    VAR_2->userlandThreads = 0;
    VAR_2->totalTasks = 0;
    VAR_2->runningTasks = 0;
    VAR_5 = FUNC_7(&VAR_6);

    for(size_t VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
       VAR_7 = (DarwinProcess *)FUNC_8(VAR_2, VAR_5[VAR_11].kp_proc.p_pid, &VAR_4, (Process_New)VAR_1);

       FUNC_2(&VAR_7->super, &VAR_5[VAR_11], VAR_8.tv_sec, VAR_4);
       FUNC_3(VAR_7, VAR_3);


       bool VAR_12 = ! ( FUNC_0(17, 0, 0) >= 0 && FUNC_0(17, 5, 0) < 0);

       if (VAR_12){
           FUNC_1(VAR_7);
       }

       VAR_2->totalTasks += 1;

       if(!VAR_4) {
           VAR_7->super.user = FUNC_10(VAR_2->usersTable, VAR_7->super.st_uid);

           FUNC_4(VAR_2, &VAR_7->super);
       }
    }

    FUNC_11(VAR_5);
}
