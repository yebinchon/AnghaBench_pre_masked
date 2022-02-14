
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vgpu_sched_data {int active; } ;
struct intel_vgpu {TYPE_3__* gvt; int id; struct vgpu_sched_data* sched_data; } ;
struct TYPE_5__ {TYPE_1__* sched_ops; } ;
struct TYPE_6__ {int sched_lock; TYPE_2__ scheduler; } ;
struct TYPE_4__ {int (* start_schedule ) (struct intel_vgpu*) ;} ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct intel_vgpu*) ;

void FUNC_4(struct intel_vgpu *VAR_0)
{
 struct vgpu_sched_data *VAR_1 = VAR_0->sched_data;

 FUNC_1(&VAR_0->gvt->sched_lock);
 if (!VAR_1->active) {
  FUNC_0("vgpu%d: start schedule\n", VAR_0->id);
  VAR_0->gvt->scheduler.sched_ops->start_schedule(VAR_0);
 }
 FUNC_2(&VAR_0->gvt->sched_lock);
}
