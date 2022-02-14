
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_sched_job {int dummy; } ;
struct drm_sched_entity {TYPE_1__* rq; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_vm {int dummy; } ;
struct amdgpu_ring {int adev; } ;
struct TYPE_6__ {TYPE_2__* s_fence; } ;
struct amdgpu_job {int sync; TYPE_3__ base; int vmid; int sched_sync; struct amdgpu_vm* vm; } ;
struct TYPE_5__ {int finished; } ;
struct TYPE_4__ {int sched; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int *,struct dma_fence*,int) ;
 struct dma_fence* FUNC_2 (int *,int*) ;
 int FUNC_3 (struct amdgpu_vm*,struct amdgpu_ring*,int *,int *,struct amdgpu_job*) ;
 scalar_t__ FUNC_4 (struct dma_fence*,struct drm_sched_entity*) ;
 struct amdgpu_job* FUNC_5 (struct drm_sched_job*) ;
 struct amdgpu_ring* FUNC_6 (int ) ;

__attribute__((used)) static struct dma_fence *FUNC_7(struct drm_sched_job *VAR_0,
            struct drm_sched_entity *VAR_1)
{
 struct amdgpu_ring *VAR_2 = FUNC_6(VAR_1->rq->sched);
 struct amdgpu_job *VAR_3 = FUNC_5(VAR_0);
 struct amdgpu_vm *VAR_4 = VAR_3->vm;
 struct dma_fence *VAR_5;
 bool VAR_6 = 0;
 int VAR_7;

 VAR_5 = FUNC_2(&VAR_3->sync, &VAR_6);
 if (VAR_5 && VAR_6) {
  if (FUNC_4(VAR_5, VAR_1)) {
   VAR_7 = FUNC_1(VAR_2->adev, &VAR_3->sched_sync,
           VAR_5, 0);
   if (VAR_7)
    FUNC_0("Error adding fence (%d)\n", VAR_7);
  }
 }

 while (VAR_5 == ((void*)0) && VAR_4 && !VAR_3->vmid) {
  VAR_7 = FUNC_3(VAR_4, VAR_2, &VAR_3->sync,
         &VAR_3->base.s_fence->finished,
         VAR_3);
  if (VAR_7)
   FUNC_0("Error getting VM ID (%d)\n", VAR_7);

  VAR_5 = FUNC_2(&VAR_3->sync, ((void*)0));
 }

 return VAR_5;
}
