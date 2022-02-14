
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {int last_ran; int cpus_allowed; int policy; int prio; int tid; int rq; } ;
struct TYPE_2__ {int cpus_ptr; int policy; int static_prio; int prio; int pid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct spu_context *VAR_1)
{




 FUNC_0(!FUNC_2(&VAR_1->rq));






 VAR_1->tid = VAR_0->pid;







 if (FUNC_4(VAR_0->prio))
  VAR_1->prio = VAR_0->prio;
 else
  VAR_1->prio = VAR_0->static_prio;
 VAR_1->policy = VAR_0->policy;
 FUNC_1(&VAR_1->cpus_allowed, VAR_0->cpus_ptr);


 VAR_1->last_ran = FUNC_3();
}
