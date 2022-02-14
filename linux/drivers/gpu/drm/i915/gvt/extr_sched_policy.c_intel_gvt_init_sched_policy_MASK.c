
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* sched_ops; } ;
struct intel_gvt {int sched_lock; TYPE_1__ scheduler; } ;
struct TYPE_4__ {int (* init ) (struct intel_gvt*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_gvt*) ;
 TYPE_2__ VAR_0 ;

int FUNC_3(struct intel_gvt *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->sched_lock);
 VAR_1->scheduler.sched_ops = &VAR_0;
 VAR_2 = VAR_1->scheduler.sched_ops->init(VAR_1);
 FUNC_1(&VAR_1->sched_lock);

 return VAR_2;
}
