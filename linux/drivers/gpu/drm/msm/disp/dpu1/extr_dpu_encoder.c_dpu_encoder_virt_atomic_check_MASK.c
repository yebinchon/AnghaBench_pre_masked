
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_drm_private {int kms; } ;
struct msm_display_topology {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct drm_display_mode {int private_flags; int flags; } ;
struct drm_crtc_state {struct drm_display_mode adjusted_mode; struct drm_display_mode mode; } ;
struct drm_connector_state {int connector; } ;
struct dpu_kms {int rm; } ;
struct dpu_encoder_virt {int num_phys_encs; int mode_set_complete; struct dpu_encoder_phys** phys_encs; } ;
struct TYPE_4__ {int (* atomic_check ) (struct dpu_encoder_phys*,struct drm_crtc_state*,struct drm_connector_state*) ;int (* mode_fixup ) (struct dpu_encoder_phys*,struct drm_display_mode const*,struct drm_display_mode*) ;} ;
struct dpu_encoder_phys {TYPE_2__ ops; } ;
struct TYPE_3__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (struct dpu_encoder_virt*,char*) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (struct dpu_encoder_virt*,char*,int) ;
 int FUNC_3 (struct drm_encoder*) ;
 int VAR_0 ;
 int FUNC_4 (int ,struct drm_display_mode*) ;
 struct msm_display_topology FUNC_5 (struct dpu_encoder_virt*,struct dpu_kms*,struct drm_display_mode*) ;
 int FUNC_6 (int *,struct drm_encoder*,struct drm_crtc_state*,struct msm_display_topology,int) ;
 scalar_t__ FUNC_7 (struct drm_crtc_state*) ;
 int FUNC_8 (struct dpu_encoder_phys*,struct drm_crtc_state*,struct drm_connector_state*) ;
 int FUNC_9 (struct dpu_encoder_phys*,struct drm_display_mode const*,struct drm_display_mode*) ;
 struct dpu_encoder_virt* FUNC_10 (struct drm_encoder*) ;
 struct dpu_kms* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_14(
  struct drm_encoder *VAR_1,
  struct drm_crtc_state *VAR_2,
  struct drm_connector_state *VAR_3)
{
 struct dpu_encoder_virt *VAR_4;
 struct msm_drm_private *VAR_5;
 struct dpu_kms *VAR_6;
 const struct drm_display_mode *VAR_7;
 struct drm_display_mode *VAR_8;
 struct msm_display_topology VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;

 if (!VAR_1 || !VAR_2 || !VAR_3) {
  FUNC_1("invalid arg(s), drm_enc %d, crtc/conn state %d/%d\n",
    VAR_1 != 0, VAR_2 != 0, VAR_3 != 0);
  return -VAR_0;
 }

 VAR_4 = FUNC_10(VAR_1);
 FUNC_0(VAR_4, "\n");

 VAR_5 = VAR_1->dev->dev_private;
 VAR_6 = FUNC_11(VAR_5->kms);
 VAR_7 = &VAR_2->mode;
 VAR_8 = &VAR_2->adjusted_mode;
 FUNC_12(FUNC_3(VAR_1));
 FUNC_4(VAR_3->connector, VAR_8);


 for (VAR_10 = 0; VAR_10 < VAR_4->num_phys_encs; VAR_10++) {
  struct dpu_encoder_phys *VAR_12 = VAR_4->phys_encs[VAR_10];

  if (VAR_12 && VAR_12->ops.atomic_check)
   VAR_11 = VAR_12->ops.atomic_check(VAR_12, VAR_2,
     VAR_3);
  else if (VAR_12 && VAR_12->ops.mode_fixup)
   if (!VAR_12->ops.mode_fixup(VAR_12, VAR_7, VAR_8))
    VAR_11 = -VAR_0;

  if (VAR_11) {
   FUNC_2(VAR_4,
     "mode unsupported, phys idx %d\n", VAR_10);
   break;
  }
 }

 VAR_9 = FUNC_5(VAR_4, VAR_6, VAR_8);


 if (!VAR_11) {




  if (FUNC_7(VAR_2)
    && VAR_4->mode_set_complete) {
   VAR_11 = FUNC_6(&VAR_6->rm, VAR_1, VAR_2,
          VAR_9, 1);
   VAR_4->mode_set_complete = 0;
  }
 }

 FUNC_13(FUNC_3(VAR_1), VAR_8->flags,
   VAR_8->private_flags);

 return VAR_11;
}
