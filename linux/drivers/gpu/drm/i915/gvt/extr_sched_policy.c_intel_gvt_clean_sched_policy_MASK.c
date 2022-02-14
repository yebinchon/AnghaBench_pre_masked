
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sched_ops; } ;
struct intel_gvt {int sched_lock; TYPE_2__ scheduler; } ;
struct TYPE_3__ {int (* clean ) (struct intel_gvt*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_gvt*) ;

void FUNC_3(struct intel_gvt *VAR_0)
{
 FUNC_0(&VAR_0->sched_lock);
 VAR_0->scheduler.sched_ops->clean(VAR_0);
 FUNC_1(&VAR_0->sched_lock);
}
