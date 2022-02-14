
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu {int * sched_data; struct intel_gvt* gvt; } ;
struct TYPE_2__ {struct gvt_sched_data* sched_data; } ;
struct intel_gvt {int vgpu_idr; TYPE_1__ scheduler; } ;
struct gvt_sched_data {int timer; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct intel_vgpu *VAR_0)
{
 struct intel_gvt *VAR_1 = VAR_0->gvt;
 struct gvt_sched_data *VAR_2 = VAR_1->scheduler.sched_data;

 FUNC_2(VAR_0->sched_data);
 VAR_0->sched_data = ((void*)0);


 if (FUNC_1(&VAR_1->vgpu_idr))
  FUNC_0(&VAR_2->timer);
}
