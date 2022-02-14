
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u32 ;
struct msm_drm_private {int kms; } ;
struct TYPE_15__ {int id; } ;
struct drm_plane {TYPE_5__ base; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct dpu_plane {int pipe; int is_virtual; TYPE_6__* pipe_hw; int pipe_name; int lock; TYPE_7__* catalog; TYPE_2__* pipe_sblk; int features; int mplane_list; struct drm_plane base; } ;
struct dpu_kms {TYPE_7__* catalog; int mmio; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;
struct TYPE_17__ {TYPE_4__* mixer; scalar_t__ mixer_count; } ;
struct TYPE_16__ {TYPE_1__* cap; } ;
struct TYPE_14__ {TYPE_3__* sblk; } ;
struct TYPE_13__ {int maxblendstages; } ;
struct TYPE_12__ {int* virt_format_list; int virt_num_formats; int* format_list; int num_formats; } ;
struct TYPE_11__ {TYPE_2__* sblk; int features; } ;


 int FUNC_0 (char*,int ,int,int,scalar_t__) ;
 int FUNC_1 (char*,int) ;
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
 struct drm_plane* FUNC_2 (int) ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 TYPE_6__* FUNC_7 (int,int ,TYPE_7__*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (struct drm_plane*,int,int) ;
 int FUNC_9 (struct drm_plane*,int ,int ,int) ;
 int FUNC_10 (struct drm_plane*) ;
 struct drm_plane* FUNC_11 (struct drm_device*,int *,scalar_t__) ;
 int FUNC_12 (struct drm_plane*,int *) ;
 int FUNC_13 (struct drm_device*,struct drm_plane*,int,int *,int const*,int,int ,int,int *) ;
 int FUNC_14 (struct dpu_plane*) ;
 struct dpu_plane* FUNC_15 (int,int ) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int ,char*,int) ;
 int VAR_13 ;
 struct dpu_kms* FUNC_19 (int ) ;
 struct dpu_plane* FUNC_20 (struct drm_plane*) ;

struct drm_plane *FUNC_21(struct drm_device *VAR_14,
  uint32_t VAR_15, enum drm_plane_type VAR_16,
  unsigned long VAR_17, u32 VAR_18)
{
 struct drm_plane *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 const uint32_t *VAR_21;
 struct dpu_plane *VAR_22;
 struct msm_drm_private *VAR_23 = VAR_14->dev_private;
 struct dpu_kms *VAR_24 = FUNC_19(VAR_23->kms);
 int VAR_25 = VAR_3;
 uint32_t VAR_26;
 int VAR_27 = -VAR_8;


 VAR_22 = FUNC_15(sizeof(*VAR_22), VAR_10);
 if (!VAR_22) {
  FUNC_1("[%u]failed to allocate local plane struct\n", VAR_15);
  VAR_27 = -VAR_9;
  return FUNC_2(VAR_27);
 }


 VAR_19 = &VAR_22->base;
 VAR_22->pipe = VAR_15;
 VAR_22->is_virtual = (VAR_18 != 0);
 FUNC_3(&VAR_22->mplane_list);
 VAR_20 = FUNC_11(VAR_14, ((void*)0), VAR_18);
 if (VAR_20) {
  struct dpu_plane *VAR_28 = FUNC_20(VAR_20);

  FUNC_16(&VAR_22->mplane_list, &VAR_28->mplane_list);
 }


 VAR_22->pipe_hw = FUNC_7(VAR_15, VAR_24->mmio, VAR_24->catalog,
       VAR_18 != 0);
 if (FUNC_4(VAR_22->pipe_hw)) {
  FUNC_1("[%u]SSPP init failed\n", VAR_15);
  VAR_27 = FUNC_5(VAR_22->pipe_hw);
  goto clean_plane;
 } else if (!VAR_22->pipe_hw->cap || !VAR_22->pipe_hw->cap->sblk) {
  FUNC_1("[%u]SSPP init returned invalid cfg\n", VAR_15);
  goto clean_sspp;
 }


 VAR_22->features = VAR_22->pipe_hw->cap->features;
 VAR_22->pipe_sblk = VAR_22->pipe_hw->cap->sblk;
 if (!VAR_22->pipe_sblk) {
  FUNC_1("[%u]invalid sblk\n", VAR_15);
  goto clean_sspp;
 }

 if (VAR_22->is_virtual) {
  VAR_21 = VAR_22->pipe_sblk->virt_format_list;
  VAR_26 = VAR_22->pipe_sblk->virt_num_formats;
 }
 else {
  VAR_21 = VAR_22->pipe_sblk->format_list;
  VAR_26 = VAR_22->pipe_sblk->num_formats;
 }

 VAR_27 = FUNC_13(VAR_14, VAR_19, 0xff, &VAR_11,
    VAR_21, VAR_26,
    VAR_13, VAR_16, ((void*)0));
 if (VAR_27)
  goto clean_sspp;

 VAR_22->catalog = VAR_24->catalog;

 if (VAR_24->catalog->mixer_count &&
  VAR_24->catalog->mixer[0].sblk->maxblendstages) {
  VAR_25 = VAR_24->catalog->mixer[0].sblk->maxblendstages - 1;
  if (VAR_25 > VAR_2 - VAR_1 - 1)
   VAR_25 = VAR_2 - VAR_1 - 1;
 }

 VAR_27 = FUNC_9(VAR_19, 0, 0, VAR_25);
 if (VAR_27)
  FUNC_1("failed to install zpos property, rc = %d\n", VAR_27);

 FUNC_8(VAR_19,
   VAR_6,
   VAR_6 |
   VAR_7 |
   VAR_4 |
   VAR_5);

 FUNC_10(VAR_19);


 FUNC_12(VAR_19, &VAR_12);


 FUNC_18(VAR_22->pipe_name, VAR_0, "plane%u", VAR_19->base.id);

 FUNC_17(&VAR_22->lock);

 FUNC_0("%s created for pipe:%u id:%u virtual:%u\n", VAR_22->pipe_name,
     VAR_15, VAR_19->base.id, VAR_18);
 return VAR_19;

clean_sspp:
 if (VAR_22 && VAR_22->pipe_hw)
  FUNC_6(VAR_22->pipe_hw);
clean_plane:
 FUNC_14(VAR_22);
 return FUNC_2(VAR_27);
}
