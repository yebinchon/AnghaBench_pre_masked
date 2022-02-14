
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct drm_file {struct amdgpu_fpriv* driver_priv; } ;
struct drm_device {int dev; struct amdgpu_device* dev_private; } ;
struct amdgpu_fpriv {int vm; int ctx_mgr; int bo_list_handles; int bo_list_lock; int csa_va; int prt_va; } ;
struct TYPE_2__ {int csa_obj; } ;
struct amdgpu_device {TYPE_1__ virt; int dev; int delayed_init_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct amdgpu_device*,int *,int ,int *,int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,int *,int *) ;
 int FUNC_7 (struct amdgpu_device*,int *) ;
 int FUNC_8 (struct amdgpu_device*,int *,int ,int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct amdgpu_fpriv*) ;
 struct amdgpu_fpriv* FUNC_13 (int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int) ;

int FUNC_19(struct drm_device *VAR_6, struct drm_file *VAR_7)
{
 struct amdgpu_device *VAR_8 = VAR_6->dev_private;
 struct amdgpu_fpriv *VAR_9;
 int VAR_10, VAR_11;


 FUNC_10(&VAR_8->delayed_init_work);

 VAR_7->driver_priv = ((void*)0);

 VAR_10 = FUNC_15(VAR_6->dev);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = FUNC_13(sizeof(*VAR_9), VAR_4);
 if (FUNC_18(!VAR_9)) {
  VAR_10 = -VAR_3;
  goto out_suspend;
 }

 VAR_11 = FUNC_3(16);
 if (VAR_11 < 0) {
  FUNC_9(VAR_8->dev, "No more PASIDs available!");
  VAR_11 = 0;
 }
 VAR_10 = FUNC_8(VAR_8, &VAR_9->vm, VAR_2, VAR_11);
 if (VAR_10)
  goto error_pasid;

 VAR_9->prt_va = FUNC_6(VAR_8, &VAR_9->vm, ((void*)0));
 if (!VAR_9->prt_va) {
  VAR_10 = -VAR_3;
  goto error_vm;
 }

 if (VAR_5 || FUNC_5(VAR_8)) {
  uint64_t VAR_12 = FUNC_0(VAR_8) & VAR_1;

  VAR_10 = FUNC_2(VAR_8, &VAR_9->vm, VAR_8->virt.csa_obj,
      &VAR_9->csa_va, VAR_12, VAR_0);
  if (VAR_10)
   goto error_vm;
 }

 FUNC_14(&VAR_9->bo_list_lock);
 FUNC_11(&VAR_9->bo_list_handles);

 FUNC_1(&VAR_9->ctx_mgr);

 VAR_7->driver_priv = VAR_9;
 goto out_suspend;

error_vm:
 FUNC_7(VAR_8, &VAR_9->vm);

error_pasid:
 if (VAR_11)
  FUNC_4(VAR_11);

 FUNC_12(VAR_9);

out_suspend:
 FUNC_16(VAR_6->dev);
 FUNC_17(VAR_6->dev);

 return VAR_10;
}
