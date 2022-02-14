
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct ttm_validate_buffer {int num_shared; int head; TYPE_1__* bo; } ;
struct list_head {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {struct amdgpu_fpriv* driver_priv; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_vm {int dummy; } ;
struct amdgpu_fpriv {struct amdgpu_vm vm; } ;
struct amdgpu_device {int dev; } ;
struct amdgpu_bo_va {scalar_t__ ref_count; } ;
struct amdgpu_bo_list_entry {int dummy; } ;
struct TYPE_2__ {int bdev; } ;
struct amdgpu_bo {TYPE_1__ tbo; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct amdgpu_bo*,struct dma_fence*,int) ;
 struct amdgpu_device* FUNC_2 (int ) ;
 struct amdgpu_bo_va* FUNC_3 (struct amdgpu_vm*,struct amdgpu_bo*) ;
 int FUNC_4 (struct amdgpu_device*,struct amdgpu_bo_va*) ;
 int FUNC_5 (struct amdgpu_device*,struct amdgpu_vm*,struct dma_fence**) ;
 int FUNC_6 (struct amdgpu_vm*,struct list_head*,struct amdgpu_bo_list_entry*) ;
 scalar_t__ FUNC_7 (struct amdgpu_vm*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (struct dma_fence*) ;
 struct amdgpu_bo* FUNC_10 (struct drm_gem_object*) ;
 int FUNC_11 (int *,struct list_head*) ;
 int FUNC_12 (struct ww_acquire_ctx*,struct list_head*) ;
 int FUNC_13 (struct ww_acquire_ctx*,struct list_head*,int,struct list_head*,int) ;
 scalar_t__ FUNC_14 (int) ;

void FUNC_15(struct drm_gem_object *VAR_0,
        struct drm_file *VAR_1)
{
 struct amdgpu_bo *VAR_2 = FUNC_10(VAR_0);
 struct amdgpu_device *VAR_3 = FUNC_2(VAR_2->tbo.bdev);
 struct amdgpu_fpriv *VAR_4 = VAR_1->driver_priv;
 struct amdgpu_vm *VAR_5 = &VAR_4->vm;

 struct amdgpu_bo_list_entry VAR_6;
 struct list_head VAR_7, VAR_8;
 struct ttm_validate_buffer VAR_9;
 struct ww_acquire_ctx VAR_10;
 struct amdgpu_bo_va *VAR_11;
 int VAR_12;

 FUNC_0(&VAR_7);
 FUNC_0(&VAR_8);

 VAR_9.bo = &VAR_2->tbo;
 VAR_9.num_shared = 1;
 FUNC_11(&VAR_9.head, &VAR_7);

 FUNC_6(VAR_5, &VAR_7, &VAR_6);

 VAR_12 = FUNC_13(&VAR_10, &VAR_7, 0, &VAR_8, 0);
 if (VAR_12) {
  FUNC_8(VAR_3->dev, "leaking bo va because "
   "we fail to reserve bo (%d)\n", VAR_12);
  return;
 }
 VAR_11 = FUNC_3(VAR_5, VAR_2);
 if (VAR_11 && --VAR_11->ref_count == 0) {
  FUNC_4(VAR_3, VAR_11);

  if (FUNC_7(VAR_5)) {
   struct dma_fence *VAR_13 = ((void*)0);

   VAR_12 = FUNC_5(VAR_3, VAR_5, &VAR_13);
   if (FUNC_14(VAR_12)) {
    FUNC_8(VAR_3->dev, "failed to clear page "
     "tables on GEM object close (%d)\n", VAR_12);
   }

   if (VAR_13) {
    FUNC_1(VAR_2, VAR_13, 1);
    FUNC_9(VAR_13);
   }
  }
 }
 FUNC_12(&VAR_10, &VAR_7);
}
