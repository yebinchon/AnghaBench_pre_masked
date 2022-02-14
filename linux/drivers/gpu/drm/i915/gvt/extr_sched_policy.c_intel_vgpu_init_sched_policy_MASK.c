
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_vgpu {TYPE_3__* gvt; } ;
struct TYPE_5__ {TYPE_1__* sched_ops; } ;
struct TYPE_6__ {int sched_lock; TYPE_2__ scheduler; } ;
struct TYPE_4__ {int (* init_vgpu ) (struct intel_vgpu*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_vgpu*) ;

int FUNC_3(struct intel_vgpu *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->gvt->sched_lock);
 VAR_1 = VAR_0->gvt->scheduler.sched_ops->init_vgpu(VAR_0);
 FUNC_1(&VAR_0->gvt->sched_lock);

 return VAR_1;
}
