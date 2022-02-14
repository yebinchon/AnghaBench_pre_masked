
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ww_acquire_ctx {int dummy; } ;
struct ttm_validate_buffer {int num_shared; int head; int * bo; } ;
struct list_head {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {struct amdgpu_fpriv* driver_priv; } ;
struct drm_device {TYPE_1__* pdev; struct amdgpu_device* dev_private; } ;
struct drm_amdgpu_gem_va {int const flags; int operation; int map_size; int offset_in_bo; int va_address; int handle; } ;
struct amdgpu_fpriv {int vm; struct amdgpu_bo_va* prt_va; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo_va {int dummy; } ;
struct amdgpu_bo_list_entry {int dummy; } ;
struct amdgpu_bo {int flags; int tbo; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct amdgpu_device*,int *,struct amdgpu_bo_va*,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*,int *,int ,int ) ;
 struct amdgpu_bo_va* FUNC_4 (int *,struct amdgpu_bo*) ;
 int FUNC_5 (struct amdgpu_device*,struct amdgpu_bo_va*,int ,int ,int ,int ) ;
 int FUNC_6 (struct amdgpu_device*,struct amdgpu_bo_va*,int ,int ,int ,int ) ;
 int FUNC_7 (struct amdgpu_device*,struct amdgpu_bo_va*,int ) ;
 int VAR_13 ;
 int FUNC_8 (int *,struct list_head*,struct amdgpu_bo_list_entry*) ;
 int FUNC_9 (int *,char*,int const,...) ;
 struct drm_gem_object* FUNC_10 (struct drm_file*,int ) ;
 int FUNC_11 (struct drm_gem_object*) ;
 struct amdgpu_bo* FUNC_12 (struct drm_gem_object*) ;
 int FUNC_13 (int *,struct list_head*) ;
 int FUNC_14 (struct ww_acquire_ctx*,struct list_head*) ;
 int FUNC_15 (struct ww_acquire_ctx*,struct list_head*,int,struct list_head*,int) ;

int FUNC_16(struct drm_device *VAR_14, void *VAR_15,
     struct drm_file *VAR_16)
{
 const uint32_t VAR_17 = VAR_5 |
  VAR_9 | VAR_10 |
  VAR_7 | VAR_6;
 const uint32_t VAR_18 = VAR_5 |
  VAR_8;

 struct drm_amdgpu_gem_va *VAR_19 = VAR_15;
 struct drm_gem_object *VAR_20;
 struct amdgpu_device *VAR_21 = VAR_14->dev_private;
 struct amdgpu_fpriv *VAR_22 = VAR_16->driver_priv;
 struct amdgpu_bo *VAR_23;
 struct amdgpu_bo_va *VAR_24;
 struct amdgpu_bo_list_entry VAR_25;
 struct ttm_validate_buffer VAR_26;
 struct ww_acquire_ctx VAR_27;
 struct list_head VAR_28, VAR_29;
 uint64_t VAR_30;
 int VAR_31 = 0;

 if (VAR_19->va_address < VAR_4) {
  FUNC_9(&VAR_14->pdev->dev,
   "va_address 0x%LX is in reserved area 0x%LX\n",
   VAR_19->va_address, VAR_4);
  return -VAR_11;
 }

 if (VAR_19->va_address >= VAR_3 &&
     VAR_19->va_address < VAR_1) {
  FUNC_9(&VAR_14->pdev->dev,
   "va_address 0x%LX is in VA hole 0x%LX-0x%LX\n",
   VAR_19->va_address, VAR_3,
   VAR_1);
  return -VAR_11;
 }

 VAR_19->va_address &= VAR_2;

 if ((VAR_19->flags & ~VAR_17) && (VAR_19->flags & ~VAR_18)) {
  FUNC_9(&VAR_14->pdev->dev, "invalid flags combination 0x%08X\n",
   VAR_19->flags);
  return -VAR_11;
 }

 switch (VAR_19->operation) {
 case 130:
 case 128:
 case 131:
 case 129:
  break;
 default:
  FUNC_9(&VAR_14->pdev->dev, "unsupported operation %d\n",
   VAR_19->operation);
  return -VAR_11;
 }

 FUNC_0(&VAR_28);
 FUNC_0(&VAR_29);
 if ((VAR_19->operation != 131) &&
     !(VAR_19->flags & VAR_8)) {
  VAR_20 = FUNC_10(VAR_16, VAR_19->handle);
  if (VAR_20 == ((void*)0))
   return -VAR_12;
  VAR_23 = FUNC_12(VAR_20);
  VAR_26.bo = &VAR_23->tbo;
  if (VAR_23->flags & VAR_0)
   VAR_26.num_shared = 1;
  else
   VAR_26.num_shared = 0;
  FUNC_13(&VAR_26.head, &VAR_28);
 } else {
  VAR_20 = ((void*)0);
  VAR_23 = ((void*)0);
 }

 FUNC_8(&VAR_22->vm, &VAR_28, &VAR_25);

 VAR_31 = FUNC_15(&VAR_27, &VAR_28, 1, &VAR_29, 0);
 if (VAR_31)
  goto error_unref;

 if (VAR_23) {
  VAR_24 = FUNC_4(&VAR_22->vm, VAR_23);
  if (!VAR_24) {
   VAR_31 = -VAR_12;
   goto error_backoff;
  }
 } else if (VAR_19->operation != 131) {
  VAR_24 = VAR_22->prt_va;
 } else {
  VAR_24 = ((void*)0);
 }

 switch (VAR_19->operation) {
 case 130:
  VAR_30 = FUNC_2(VAR_21, VAR_19->flags);
  VAR_31 = FUNC_5(VAR_21, VAR_24, VAR_19->va_address,
         VAR_19->offset_in_bo, VAR_19->map_size,
         VAR_30);
  break;
 case 128:
  VAR_31 = FUNC_7(VAR_21, VAR_24, VAR_19->va_address);
  break;

 case 131:
  VAR_31 = FUNC_3(VAR_21, &VAR_22->vm,
      VAR_19->va_address,
      VAR_19->map_size);
  break;
 case 129:
  VAR_30 = FUNC_2(VAR_21, VAR_19->flags);
  VAR_31 = FUNC_6(VAR_21, VAR_24, VAR_19->va_address,
          VAR_19->offset_in_bo, VAR_19->map_size,
          VAR_30);
  break;
 default:
  break;
 }
 if (!VAR_31 && !(VAR_19->flags & VAR_5) && !VAR_13)
  FUNC_1(VAR_21, &VAR_22->vm, VAR_24,
     VAR_19->operation);

error_backoff:
 FUNC_14(&VAR_27, &VAR_28);

error_unref:
 FUNC_11(VAR_20);
 return VAR_31;
}
