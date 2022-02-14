
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u32 ;
struct TYPE_6__ {int backup_size; } ;
struct drm_vmw_size {scalar_t__ width; scalar_t__ height; } ;
struct vmw_surface {int flags; int scanout; int num_sizes; int multisample_count; TYPE_3__ res; scalar_t__* mip_levels; struct drm_vmw_size base_size; int format; int quality_level; int multisample_pattern; scalar_t__ array_size; int autogen_filter; int * offsets; int * sizes; } ;
struct TYPE_4__ {int shareable; int * tfile; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct vmw_user_surface {struct vmw_surface srf; TYPE_2__ prime; scalar_t__ size; } ;
struct vmw_private {scalar_t__ texture_max_width; scalar_t__ texture_max_height; scalar_t__ active_display_unit; scalar_t__ stdu_max_width; scalar_t__ stdu_max_height; int reservation_sem; int has_dx; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
struct svga3d_surface_desc {scalar_t__ block_desc; } ;
struct drm_device {int dummy; } ;
typedef int SVGA3dSurfaceFormat ;
typedef int SVGA3dSurfaceAllFlags ;
typedef int SVGA3dMSQualityLevel ;
typedef int SVGA3dMSPattern ;
typedef int SVGA3dDXSOState ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,...) ;
 struct vmw_user_surface* FUNC_2 (int,int ) ;
 struct svga3d_surface_desc* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct drm_vmw_size,scalar_t__,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,struct ttm_operation_ctx*) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_11 (struct vmw_private*) ;
 struct vmw_private* FUNC_12 (struct drm_device*) ;
 int FUNC_13 (struct vmw_private*,struct vmw_surface*,int ) ;
 int VAR_12 ;

int FUNC_14(struct drm_device *VAR_13,
          uint32_t VAR_14,
          SVGA3dSurfaceAllFlags VAR_15,
          SVGA3dSurfaceFormat VAR_16,
          bool VAR_17,
          uint32_t VAR_18,
          uint32_t VAR_19,
          uint32_t VAR_20,
          struct drm_vmw_size VAR_21,
          SVGA3dMSPattern VAR_22,
          SVGA3dMSQualityLevel VAR_23,
          struct vmw_surface **VAR_24)
{
 struct vmw_private *VAR_25 = FUNC_12(VAR_13);
 struct vmw_user_surface *VAR_26;
 struct ttm_operation_ctx VAR_27 = {
  .interruptible = 1,
  .no_wait_gpu = 0
 };
 struct vmw_surface *VAR_28;
 int VAR_29;
 u32 VAR_30 = 1;
 u32 VAR_31 = 1;

 *VAR_24 = ((void*)0);

 if (VAR_17) {
  if (!FUNC_5(VAR_16)) {
   FUNC_1("Invalid Screen Target surface format.");
   return -VAR_0;
  }

  if (VAR_21.width > VAR_25->texture_max_width ||
      VAR_21.height > VAR_25->texture_max_height) {
   FUNC_1("%ux%u\n, exceeds max surface size %ux%u",
           VAR_21.width, VAR_21.height,
           VAR_25->texture_max_width,
           VAR_25->texture_max_height);
   return -VAR_0;
  }
 } else {
  const struct svga3d_surface_desc *VAR_32;

  VAR_32 = FUNC_3(VAR_16);
  if (FUNC_10(VAR_32->block_desc == VAR_4)) {
   FUNC_1("Invalid surface format.\n");
   return -VAR_0;
  }
 }


 if (VAR_20 > 0 && !VAR_25->has_dx) {
  FUNC_1("Tried to create DX surface on non-DX host.\n");
  return -VAR_0;
 }

 VAR_29 = FUNC_8(&VAR_25->reservation_sem, 1);
 if (FUNC_10(VAR_29 != 0))
  return VAR_29;

 VAR_29 = FUNC_6(FUNC_11(VAR_25),
       VAR_14, &VAR_27);
 if (FUNC_10(VAR_29 != 0)) {
  if (VAR_29 != -VAR_2)
   FUNC_0("Out of graphics memory for surface"
      " creation.\n");
  goto out_unlock;
 }

 VAR_26 = FUNC_2(sizeof(*VAR_26), VAR_3);
 if (FUNC_10(!VAR_26)) {
  VAR_29 = -VAR_1;
  goto out_no_user_srf;
 }

 *VAR_24 = &VAR_26->srf;
 VAR_26->size = VAR_14;
 VAR_26->prime.base.shareable = 0;
 VAR_26->prime.base.tfile = ((void*)0);

 VAR_28 = &VAR_26->srf;
 VAR_28->flags = VAR_15;
 VAR_28->format = VAR_16;
 VAR_28->scanout = VAR_17;
 VAR_28->mip_levels[0] = VAR_18;
 VAR_28->num_sizes = 1;
 VAR_28->sizes = ((void*)0);
 VAR_28->offsets = ((void*)0);
 VAR_28->base_size = VAR_21;
 VAR_28->autogen_filter = VAR_10;
 VAR_28->array_size = VAR_20;
 VAR_28->multisample_count = VAR_19;
 VAR_28->multisample_pattern = VAR_22;
 VAR_28->quality_level = VAR_23;

 if (VAR_20)
  VAR_30 = VAR_20;
 else if (VAR_15 & VAR_7)
  VAR_30 = VAR_5;

 if (VAR_28->flags & VAR_8)
  VAR_31 = VAR_28->multisample_count;

 VAR_28->res.backup_size =
  FUNC_4(VAR_28->format,
          VAR_28->base_size,
          VAR_28->mip_levels[0],
          VAR_30,
          VAR_31);

 if (VAR_28->flags & VAR_6)
  VAR_28->res.backup_size += sizeof(SVGA3dDXSOState);
 if (VAR_25->active_display_unit == VAR_11 &&
     VAR_17 && VAR_21.width <= VAR_25->stdu_max_width &&
     VAR_21.height <= VAR_25->stdu_max_height)
  VAR_28->flags |= VAR_9;





 VAR_29 = FUNC_13(VAR_25, VAR_28, VAR_12);

 FUNC_9(&VAR_25->reservation_sem);
 return VAR_29;

out_no_user_srf:
 FUNC_7(FUNC_11(VAR_25), VAR_14);

out_unlock:
 FUNC_9(&VAR_25->reservation_sem);
 return VAR_29;
}
