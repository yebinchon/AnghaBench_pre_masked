
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_vgpu_workload {size_t ring_id; TYPE_2__* vgpu; int list; } ;
struct TYPE_4__ {int * waitq; } ;
struct TYPE_6__ {TYPE_1__ scheduler; } ;
struct TYPE_5__ {TYPE_3__* gvt; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,size_t) ;

void FUNC_4(struct intel_vgpu_workload *VAR_0)
{
 FUNC_1(&VAR_0->list,
  FUNC_3(VAR_0->vgpu, VAR_0->ring_id));
 FUNC_0(VAR_0->vgpu->gvt);
 FUNC_2(&VAR_0->vgpu->gvt->scheduler.waitq[VAR_0->ring_id]);
}
