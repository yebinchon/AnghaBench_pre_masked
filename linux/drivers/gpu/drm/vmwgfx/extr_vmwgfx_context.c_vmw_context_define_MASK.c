
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int shareable; int handle; int * tfile; } ;
struct vmw_resource {int dummy; } ;
struct vmw_user_context {TYPE_2__ base; struct vmw_resource res; } ;
struct vmw_private {int reservation_sem; scalar_t__ has_mob; int has_dx; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
struct ttm_object_file {int dummy; } ;
struct drm_vmw_context_arg {int cid; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {struct ttm_object_file* tfile; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct vmw_user_context* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ttm_object_file*,TYPE_2__*,int,int ,int *,int *) ;
 int FUNC_4 (int ,scalar_t__,struct ttm_operation_ctx*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (struct vmw_private*,struct vmw_resource*,int ,int) ;
 TYPE_1__* FUNC_12 (struct drm_file*) ;
 int FUNC_13 (struct vmw_private*) ;
 struct vmw_private* FUNC_14 (struct drm_device*) ;
 struct vmw_resource* FUNC_15 (struct vmw_resource*) ;
 int FUNC_16 (struct vmw_resource**) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_17(struct drm_device *VAR_10, void *VAR_11,
         struct drm_file *VAR_12, bool VAR_13)
{
 struct vmw_private *VAR_14 = FUNC_14(VAR_10);
 struct vmw_user_context *VAR_15;
 struct vmw_resource *VAR_16;
 struct vmw_resource *VAR_17;
 struct drm_vmw_context_arg *VAR_18 = (struct drm_vmw_context_arg *)VAR_11;
 struct ttm_object_file *VAR_19 = FUNC_12(VAR_12)->tfile;
 struct ttm_operation_ctx VAR_20 = {
  .interruptible = 1,
  .no_wait_gpu = 0
 };
 int VAR_21;

 if (!VAR_14->has_dx && VAR_13) {
  FUNC_1("DX contexts not supported by device.\n");
  return -VAR_0;
 }

 if (FUNC_9(VAR_9 == 0))
  VAR_9 = FUNC_8(sizeof(*VAR_15)) +
    ((VAR_14->has_mob) ? FUNC_10() : 0) +
    + VAR_5 + VAR_4;

 VAR_21 = FUNC_6(&VAR_14->reservation_sem, 1);
 if (FUNC_9(VAR_21 != 0))
  return VAR_21;

 VAR_21 = FUNC_4(FUNC_13(VAR_14),
       VAR_9,
       &VAR_20);
 if (FUNC_9(VAR_21 != 0)) {
  if (VAR_21 != -VAR_2)
   FUNC_0("Out of graphics memory for context"
      " creation.\n");
  goto out_unlock;
 }

 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_3);
 if (FUNC_9(!VAR_15)) {
  FUNC_5(FUNC_13(VAR_14),
        VAR_9);
  VAR_21 = -VAR_1;
  goto out_unlock;
 }

 VAR_16 = &VAR_15->res;
 VAR_15->base.shareable = 0;
 VAR_15->base.tfile = ((void*)0);





 VAR_21 = FUNC_11(VAR_14, VAR_16, VAR_8, VAR_13);
 if (FUNC_9(VAR_21 != 0))
  goto out_unlock;

 VAR_17 = FUNC_15(&VAR_15->res);
 VAR_21 = FUNC_3(VAR_19, &VAR_15->base, 0, VAR_6,
       &VAR_7, ((void*)0));

 if (FUNC_9(VAR_21 != 0)) {
  FUNC_16(&VAR_17);
  goto out_err;
 }

 VAR_18->cid = VAR_15->base.handle;
out_err:
 FUNC_16(&VAR_16);
out_unlock:
 FUNC_7(&VAR_14->reservation_sem);
 return VAR_21;
}
