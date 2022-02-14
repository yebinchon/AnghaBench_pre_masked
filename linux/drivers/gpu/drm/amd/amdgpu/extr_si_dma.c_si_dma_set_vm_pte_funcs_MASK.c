
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_gpu_scheduler {int * sched_rq; } ;
struct TYPE_8__ {unsigned int num_instances; TYPE_2__* instance; } ;
struct TYPE_7__ {unsigned int vm_pte_num_rqs; int ** vm_pte_rqs; int * vm_pte_funcs; } ;
struct amdgpu_device {TYPE_4__ sdma; TYPE_3__ vm_manager; } ;
struct TYPE_5__ {struct drm_gpu_scheduler sched; } ;
struct TYPE_6__ {TYPE_1__ ring; } ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_2)
{
 struct drm_gpu_scheduler *VAR_3;
 unsigned VAR_4;

 VAR_2->vm_manager.vm_pte_funcs = &VAR_1;
 for (VAR_4 = 0; VAR_4 < VAR_2->sdma.num_instances; VAR_4++) {
  VAR_3 = &VAR_2->sdma.instance[VAR_4].ring.sched;
  VAR_2->vm_manager.vm_pte_rqs[VAR_4] =
   &VAR_3->sched_rq[VAR_0];
 }
 VAR_2->vm_manager.vm_pte_num_rqs = VAR_2->sdma.num_instances;
}
