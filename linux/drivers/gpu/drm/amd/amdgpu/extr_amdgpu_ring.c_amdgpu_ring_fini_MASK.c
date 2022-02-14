
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ready; } ;
struct amdgpu_ring {size_t idx; TYPE_2__* adev; scalar_t__ me; int * vmid_wait; int ring; int gpu_addr; int ring_obj; int fence_offs; int cond_exe_offs; int wptr_offs; int rptr_offs; TYPE_1__ sched; } ;
struct TYPE_4__ {int ** rings; } ;


 int FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (struct amdgpu_ring*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct amdgpu_ring *VAR_0)
{
 VAR_0->sched.ready = 0;


 if (!(VAR_0->adev) || !(VAR_0->adev->rings[VAR_0->idx]))
  return;

 FUNC_2(VAR_0->adev, VAR_0->rptr_offs);
 FUNC_2(VAR_0->adev, VAR_0->wptr_offs);

 FUNC_2(VAR_0->adev, VAR_0->cond_exe_offs);
 FUNC_2(VAR_0->adev, VAR_0->fence_offs);

 FUNC_0(&VAR_0->ring_obj,
         &VAR_0->gpu_addr,
         (void **)&VAR_0->ring);

 FUNC_1(VAR_0);

 FUNC_3(VAR_0->vmid_wait);
 VAR_0->vmid_wait = ((void*)0);
 VAR_0->me = 0;

 VAR_0->adev->rings[VAR_0->idx] = ((void*)0);
}
