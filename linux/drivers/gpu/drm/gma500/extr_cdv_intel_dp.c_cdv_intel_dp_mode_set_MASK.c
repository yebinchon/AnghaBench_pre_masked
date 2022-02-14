
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct gma_crtc {int pipe; } ;
struct drm_encoder {struct drm_device* dev; struct drm_crtc* crtc; } ;
struct drm_display_mode {int flags; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct cdv_intel_dp {int DP; int color_range; int lane_count; int* link_configuration; int link_bw; int* dpcd; int output_reg; scalar_t__ has_audio; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct gma_encoder*) ;
 scalar_t__ FUNC_3 (struct gma_encoder*) ;
 int FUNC_4 (int*,int ,int ) ;
 struct gma_crtc* FUNC_5 (struct drm_crtc*) ;
 struct gma_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_7(struct drm_encoder *VAR_22, struct drm_display_mode *VAR_23,
    struct drm_display_mode *VAR_24)
{
 struct gma_encoder *VAR_25 = FUNC_6(VAR_22);
 struct drm_crtc *VAR_26 = VAR_22->crtc;
 struct gma_crtc *VAR_27 = FUNC_5(VAR_26);
 struct cdv_intel_dp *VAR_28 = VAR_25->dev_priv;
 struct drm_device *VAR_29 = VAR_22->dev;

 VAR_28->DP = VAR_16 | VAR_13;
 VAR_28->DP |= VAR_28->color_range;

 if (VAR_24->flags & VAR_17)
  VAR_28->DP |= VAR_14;
 if (VAR_24->flags & VAR_18)
  VAR_28->DP |= VAR_15;

 VAR_28->DP |= VAR_6;

 switch (VAR_28->lane_count) {
 case 1:
  VAR_28->DP |= VAR_10;
  break;
 case 2:
  VAR_28->DP |= VAR_11;
  break;
 case 4:
  VAR_28->DP |= VAR_12;
  break;
 }
 if (VAR_28->has_audio)
  VAR_28->DP |= VAR_0;

 FUNC_4(VAR_28->link_configuration, 0, VAR_5);
 VAR_28->link_configuration[0] = VAR_28->link_bw;
 VAR_28->link_configuration[1] = VAR_28->lane_count;




 if (VAR_28->dpcd[VAR_1] >= 0x11 &&
     (VAR_28->dpcd[VAR_7] & VAR_2)) {
  VAR_28->link_configuration[1] |= VAR_4;
  VAR_28->DP |= VAR_3;
 }


 if (VAR_27->pipe == 1)
  VAR_28->DP |= VAR_8;

 FUNC_1(VAR_28->output_reg, (VAR_28->DP | VAR_9));
 FUNC_0("DP expected reg is %x\n", VAR_28->DP);
 if (FUNC_3(VAR_25)) {
  uint32_t VAR_30;
  FUNC_2(VAR_25);

  if (VAR_23->hdisplay != VAR_24->hdisplay ||
       VAR_23->vdisplay != VAR_24->vdisplay)
   VAR_30 = VAR_20;
  else
   VAR_30 = 0;

  VAR_30 |= VAR_27->pipe << VAR_21;

  FUNC_1(VAR_19, VAR_30);
 }
}
