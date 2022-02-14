
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct dma_fence {scalar_t__ context; } ;
struct amdgpu_sync {struct dma_fence* last_vm_update; } ;
struct amdgpu_vmid {scalar_t__ owner; scalar_t__ pd_gpu_addr; TYPE_3__* flushed_updates; struct amdgpu_sync active; TYPE_4__* last_flush; } ;
struct TYPE_8__ {scalar_t__ fence_context; } ;
struct amdgpu_vm {int use_cpu_for_update; TYPE_2__ entity; struct amdgpu_vmid** reserved_vmid; } ;
struct amdgpu_ring {scalar_t__ idx; struct amdgpu_device* adev; TYPE_1__* funcs; } ;
struct amdgpu_job {scalar_t__ vm_pd_addr; int vm_needs_flush; } ;
struct amdgpu_device {scalar_t__ fence_context; } ;
struct TYPE_10__ {scalar_t__ context; } ;
struct TYPE_9__ {scalar_t__ context; } ;
struct TYPE_7__ {unsigned int vmhub; } ;


 int FUNC_0 (struct amdgpu_device*,struct amdgpu_sync*,struct dma_fence*,int) ;
 struct dma_fence* FUNC_1 (struct amdgpu_sync*,struct amdgpu_ring*) ;
 TYPE_3__* FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (struct dma_fence*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_vm *VAR_0,
         struct amdgpu_ring *VAR_1,
         struct amdgpu_sync *VAR_2,
         struct dma_fence *VAR_3,
         struct amdgpu_job *VAR_4,
         struct amdgpu_vmid **VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_1->adev;
 unsigned VAR_7 = VAR_1->funcs->vmhub;
 uint64_t VAR_8 = VAR_6->fence_context + VAR_1->idx;
 struct dma_fence *VAR_9 = VAR_2->last_vm_update;
 bool VAR_10 = VAR_0->use_cpu_for_update;
 int VAR_11 = 0;

 *VAR_5 = VAR_0->reserved_vmid[VAR_7];
 if (VAR_9 && (*VAR_5)->flushed_updates &&
     VAR_9->context == (*VAR_5)->flushed_updates->context &&
     !FUNC_3(VAR_9, (*VAR_5)->flushed_updates))
     VAR_9 = ((void*)0);

 if ((*VAR_5)->owner != VAR_0->entity.fence_context ||
     VAR_4->vm_pd_addr != (*VAR_5)->pd_gpu_addr ||
     VAR_9 || !(*VAR_5)->last_flush ||
     ((*VAR_5)->last_flush->context != VAR_8 &&
      !FUNC_4((*VAR_5)->last_flush))) {
  struct dma_fence *VAR_12;


  (*VAR_5)->pd_gpu_addr = 0;
  VAR_12 = FUNC_1(&(*VAR_5)->active, VAR_1);
  if (VAR_12) {
   *VAR_5 = ((void*)0);
   VAR_11 = FUNC_0(VAR_6, VAR_2, VAR_12, 0);
   return VAR_11;
  }
  VAR_10 = 1;
 }




 VAR_11 = FUNC_0(VAR_1->adev, &(*VAR_5)->active, VAR_3, 0);
 if (VAR_11)
  return VAR_11;

 if (VAR_9) {
  FUNC_5((*VAR_5)->flushed_updates);
  (*VAR_5)->flushed_updates = FUNC_2(VAR_9);
 }
 VAR_4->vm_needs_flush = VAR_10;
 return 0;
}
