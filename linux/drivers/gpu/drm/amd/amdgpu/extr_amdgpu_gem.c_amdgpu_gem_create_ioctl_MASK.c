
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int handle; } ;
struct TYPE_12__ {int domain_flags; int bo_size; int domains; int alignment; } ;
union drm_amdgpu_gem_create {TYPE_6__ out; TYPE_3__ in; } ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct drm_gem_object {int dummy; } ;
struct drm_file {struct amdgpu_fpriv* driver_priv; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct dma_resv {int dummy; } ;
struct TYPE_13__ {TYPE_7__* bo; } ;
struct TYPE_14__ {TYPE_4__ base; } ;
struct amdgpu_vm {TYPE_5__ root; } ;
struct amdgpu_fpriv {struct amdgpu_vm vm; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo {int parent; } ;
struct TYPE_10__ {struct dma_resv* resv; } ;
struct TYPE_11__ {TYPE_1__ base; } ;
struct TYPE_16__ {TYPE_2__ tbo; } ;


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
 int FUNC_0 (char*) ;
 int VAR_10 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,int) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (struct amdgpu_device*,int,int ,int ,int,int ,struct dma_resv*,struct drm_gem_object**) ;
 int FUNC_5 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_6 (struct drm_gem_object*) ;
 struct amdgpu_bo* FUNC_7 (struct drm_gem_object*) ;
 int FUNC_8 (union drm_amdgpu_gem_create*,int ,int) ;
 int VAR_11 ;

int FUNC_9(struct drm_device *VAR_12, void *VAR_13,
       struct drm_file *VAR_14)
{
 struct amdgpu_device *VAR_15 = VAR_12->dev_private;
 struct amdgpu_fpriv *VAR_16 = VAR_14->driver_priv;
 struct amdgpu_vm *VAR_17 = &VAR_16->vm;
 union drm_amdgpu_gem_create *VAR_18 = VAR_13;
 uint64_t VAR_19 = VAR_18->in.domain_flags;
 uint64_t VAR_20 = VAR_18->in.bo_size;
 struct dma_resv *VAR_21 = ((void*)0);
 struct drm_gem_object *VAR_22;
 uint32_t VAR_23;
 int VAR_24;


 if (VAR_19 & ~(VAR_0 |
        VAR_3 |
        VAR_1 |
        VAR_5 |
        VAR_4 |
        VAR_2))

  return -VAR_10;


 if (VAR_18->in.domains & ~VAR_8)
  return -VAR_10;


 if (VAR_18->in.domains & (VAR_6 |
     VAR_7 | VAR_9)) {
  if (VAR_19 & VAR_4) {



   FUNC_0("GDS bo cannot be per-vm-bo\n");
   return -VAR_10;
  }
  VAR_19 |= VAR_3;
 }

 if (VAR_19 & VAR_4) {
  VAR_24 = FUNC_2(VAR_17->root.base.bo, 0);
  if (VAR_24)
   return VAR_24;

  VAR_21 = VAR_17->root.base.bo->tbo.base.resv;
 }

 VAR_24 = FUNC_4(VAR_15, VAR_20, VAR_18->in.alignment,
         (u32)(0xffffffff & VAR_18->in.domains),
         VAR_19, VAR_11, VAR_21, &VAR_22);
 if (VAR_19 & VAR_4) {
  if (!VAR_24) {
   struct amdgpu_bo *VAR_25 = FUNC_7(VAR_22);

   VAR_25->parent = FUNC_1(VAR_17->root.base.bo);
  }
  FUNC_3(VAR_17->root.base.bo);
 }
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_5(VAR_14, VAR_22, &VAR_23);

 FUNC_6(VAR_22);
 if (VAR_24)
  return VAR_24;

 FUNC_8(VAR_18, 0, sizeof(*VAR_18));
 VAR_18->out.handle = VAR_23;
 return 0;
}
