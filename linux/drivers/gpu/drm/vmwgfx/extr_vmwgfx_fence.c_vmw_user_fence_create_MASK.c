
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vmw_fence_obj {int dummy; } ;
struct TYPE_4__ {int handle; } ;
struct vmw_user_fence {struct vmw_fence_obj fence; TYPE_2__ base; } ;
struct vmw_fence_manager {int user_fence_size; int dev_priv; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
struct ttm_object_file {int dummy; } ;
struct ttm_mem_global {int dummy; } ;
struct drm_file {int dummy; } ;
struct TYPE_3__ {struct ttm_object_file* tfile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vmw_user_fence*) ;
 struct vmw_user_fence* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ttm_object_file*,TYPE_2__*,int,int ,int *,int *) ;
 int FUNC_3 (struct ttm_mem_global*,int ,struct ttm_operation_ctx*) ;
 int FUNC_4 (struct ttm_mem_global*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct vmw_fence_manager*,struct vmw_fence_obj*,int ,int ) ;
 struct vmw_fence_obj* FUNC_7 (struct vmw_fence_obj*) ;
 int FUNC_8 (struct vmw_fence_obj**) ;
 TYPE_1__* FUNC_9 (struct drm_file*) ;
 struct ttm_mem_global* FUNC_10 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_11(struct drm_file *VAR_5,
     struct vmw_fence_manager *VAR_6,
     uint32_t VAR_7,
     struct vmw_fence_obj **VAR_8,
     uint32_t *VAR_9)
{
 struct ttm_object_file *VAR_10 = FUNC_9(VAR_5)->tfile;
 struct vmw_user_fence *VAR_11;
 struct vmw_fence_obj *VAR_12;
 struct ttm_mem_global *VAR_13 = FUNC_10(VAR_6->dev_priv);
 struct ttm_operation_ctx VAR_14 = {
  .interruptible = 0,
  .no_wait_gpu = 0
 };
 int VAR_15;






 VAR_15 = FUNC_3(VAR_13, VAR_6->user_fence_size,
       &VAR_14);
 if (FUNC_5(VAR_15 != 0))
  return VAR_15;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_1);
 if (FUNC_5(!VAR_11)) {
  VAR_15 = -VAR_0;
  goto out_no_object;
 }

 VAR_15 = FUNC_6(VAR_6, &VAR_11->fence, VAR_7,
     VAR_4);
 if (FUNC_5(VAR_15 != 0)) {
  FUNC_0(VAR_11);
  goto out_no_object;
 }





 VAR_12 = FUNC_7(&VAR_11->fence);
 VAR_15 = FUNC_2(VAR_10, &VAR_11->base, 0,
       VAR_2,
       &VAR_3, ((void*)0));


 if (FUNC_5(VAR_15 != 0)) {



  FUNC_8(&VAR_12);
  goto out_err;
 }

 *VAR_8 = &VAR_11->fence;
 *VAR_9 = VAR_11->base.handle;

 return 0;
out_err:
 VAR_12 = &VAR_11->fence;
 FUNC_8(&VAR_12);
out_no_object:
 FUNC_4(VAR_13, VAR_6->user_fence_size);
 return VAR_15;
}
