
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {struct amdgpu_fpriv* driver_priv; } ;
struct TYPE_14__ {TYPE_5__* bo; } ;
struct TYPE_15__ {TYPE_6__ base; } ;
struct amdgpu_vm {TYPE_7__ root; } ;
struct amdgpu_fpriv {struct amdgpu_vm vm; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo_va {int ref_count; } ;
struct TYPE_9__ {scalar_t__ resv; } ;
struct TYPE_10__ {TYPE_1__ base; int ttm; int bdev; } ;
struct amdgpu_bo {int flags; TYPE_2__ tbo; } ;
struct TYPE_16__ {struct mm_struct* mm; } ;
struct TYPE_11__ {scalar_t__ resv; } ;
struct TYPE_12__ {TYPE_3__ base; } ;
struct TYPE_13__ {TYPE_4__ tbo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_bo*,int) ;
 int FUNC_1 (struct amdgpu_bo*) ;
 struct amdgpu_device* FUNC_2 (int ) ;
 struct mm_struct* FUNC_3 (int ) ;
 struct amdgpu_bo_va* FUNC_4 (struct amdgpu_device*,struct amdgpu_vm*,struct amdgpu_bo*) ;
 struct amdgpu_bo_va* FUNC_5 (struct amdgpu_vm*,struct amdgpu_bo*) ;
 TYPE_8__* VAR_2 ;
 struct amdgpu_bo* FUNC_6 (struct drm_gem_object*) ;

int FUNC_7(struct drm_gem_object *VAR_3,
      struct drm_file *VAR_4)
{
 struct amdgpu_bo *VAR_5 = FUNC_6(VAR_3);
 struct amdgpu_device *VAR_6 = FUNC_2(VAR_5->tbo.bdev);
 struct amdgpu_fpriv *VAR_7 = VAR_4->driver_priv;
 struct amdgpu_vm *VAR_8 = &VAR_7->vm;
 struct amdgpu_bo_va *VAR_9;
 struct mm_struct *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_5->tbo.ttm);
 if (VAR_10 && VAR_10 != VAR_2->mm)
  return -VAR_1;

 if (VAR_5->flags & VAR_0 &&
     VAR_5->tbo.base.resv != VAR_8->root.base.bo->tbo.base.resv)
  return -VAR_1;

 VAR_11 = FUNC_0(VAR_5, 0);
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_5(VAR_8, VAR_5);
 if (!VAR_9) {
  VAR_9 = FUNC_4(VAR_6, VAR_8, VAR_5);
 } else {
  ++VAR_9->ref_count;
 }
 FUNC_1(VAR_5);
 return 0;
}
