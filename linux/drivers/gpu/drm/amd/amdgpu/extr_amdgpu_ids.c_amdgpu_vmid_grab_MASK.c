
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct amdgpu_vmid_mgr {int ids; int lock; int ids_lru; } ;
struct amdgpu_vmid {int * last_flush; int owner; int pd_gpu_addr; int list; int * flushed_updates; int active; } ;
struct TYPE_6__ {int fence_context; } ;
struct amdgpu_vm {int pasid; TYPE_3__ entity; scalar_t__* reserved_vmid; } ;
struct amdgpu_sync {struct dma_fence* last_vm_update; } ;
struct amdgpu_ring {struct amdgpu_device* adev; TYPE_1__* funcs; } ;
struct amdgpu_job {int vm_needs_flush; int pasid; struct amdgpu_vmid* vmid; int vm_pd_addr; } ;
struct TYPE_5__ {struct amdgpu_vmid_mgr* id_mgr; } ;
struct amdgpu_device {TYPE_2__ vm_manager; } ;
struct TYPE_4__ {unsigned int vmhub; } ;


 int FUNC_0 (struct amdgpu_device*,int *,struct dma_fence*,int) ;
 int FUNC_1 (struct amdgpu_vm*,struct amdgpu_ring*,struct amdgpu_sync*,struct amdgpu_vmid**) ;
 int FUNC_2 (struct amdgpu_vm*,struct amdgpu_ring*,struct amdgpu_sync*,struct dma_fence*,struct amdgpu_job*,struct amdgpu_vmid**) ;
 int FUNC_3 (struct amdgpu_vm*,struct amdgpu_ring*,struct amdgpu_sync*,struct dma_fence*,struct amdgpu_job*,struct amdgpu_vmid**) ;
 int * FUNC_4 (struct dma_fence*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct amdgpu_vm*,struct amdgpu_ring*,struct amdgpu_job*) ;

int FUNC_10(struct amdgpu_vm *VAR_0, struct amdgpu_ring *VAR_1,
       struct amdgpu_sync *VAR_2, struct dma_fence *VAR_3,
       struct amdgpu_job *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_1->adev;
 unsigned VAR_6 = VAR_1->funcs->vmhub;
 struct amdgpu_vmid_mgr *VAR_7 = &VAR_5->vm_manager.id_mgr[VAR_6];
 struct amdgpu_vmid *VAR_8 = ((void*)0);
 struct amdgpu_vmid *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 FUNC_7(&VAR_7->lock);
 VAR_10 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_8);
 if (VAR_10 || !VAR_8)
  goto error;

 if (VAR_0->reserved_vmid[VAR_6]) {
  VAR_10 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_9);
  if (VAR_10 || !VAR_9)
   goto error;
 } else {
  VAR_10 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_9);
  if (VAR_10)
   goto error;

  if (!VAR_9) {
   struct dma_fence *VAR_11 = VAR_2->last_vm_update;


   VAR_9 = VAR_8;


   VAR_10 = FUNC_0(VAR_1->adev, &VAR_9->active,
           VAR_3, 0);
   if (VAR_10)
    goto error;

   FUNC_5(VAR_9->flushed_updates);
   VAR_9->flushed_updates = FUNC_4(VAR_11);
   VAR_4->vm_needs_flush = 1;
  }

  FUNC_6(&VAR_9->list, &VAR_7->ids_lru);
 }

 VAR_9->pd_gpu_addr = VAR_4->vm_pd_addr;
 VAR_9->owner = VAR_0->entity.fence_context;

 if (VAR_4->vm_needs_flush) {
  FUNC_5(VAR_9->last_flush);
  VAR_9->last_flush = ((void*)0);
 }
 VAR_4->vmid = VAR_9 - VAR_7->ids;
 VAR_4->pasid = VAR_0->pasid;
 FUNC_9(VAR_0, VAR_1, VAR_4);

error:
 FUNC_8(&VAR_7->lock);
 return VAR_10;
}
