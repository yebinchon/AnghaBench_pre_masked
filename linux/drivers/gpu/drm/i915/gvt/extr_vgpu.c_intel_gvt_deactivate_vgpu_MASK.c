
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int running_workload_num; } ;
struct intel_vgpu {int active; int vgpu_lock; TYPE_1__ submission; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct intel_vgpu*) ;
 int FUNC_2 (struct intel_vgpu*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct intel_vgpu *VAR_0)
{
 FUNC_3(&VAR_0->vgpu_lock);

 VAR_0->active = 0;

 if (FUNC_0(&VAR_0->submission.running_workload_num)) {
  FUNC_4(&VAR_0->vgpu_lock);
  FUNC_1(VAR_0);
  FUNC_3(&VAR_0->vgpu_lock);
 }

 FUNC_2(VAR_0);

 FUNC_4(&VAR_0->vgpu_lock);
}
