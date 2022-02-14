
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct psb_intel_sdvo_in_out_map {scalar_t__ in1; int in0; } ;
struct TYPE_2__ {int sdvo_flags; } ;
struct psb_intel_sdvo_dtd {TYPE_1__ part2; } ;
struct psb_intel_sdvo {int sdvo_reg; scalar_t__ has_hdmi_audio; scalar_t__ is_tv; scalar_t__ has_hdmi_monitor; int attached_output; struct psb_intel_sdvo_dtd input_dtd; scalar_t__ is_lvds; } ;
struct gma_crtc {int pipe; } ;
struct drm_encoder {struct drm_crtc* crtc; struct drm_device* dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;
typedef int in_out ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

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
 int VAR_13 ;
 int FUNC_3 (struct drm_display_mode*) ;
 int FUNC_4 (struct psb_intel_sdvo_dtd*,struct drm_display_mode*) ;
 int FUNC_5 (struct psb_intel_sdvo*) ;
 int FUNC_6 (struct psb_intel_sdvo*,int) ;
 int FUNC_7 (struct psb_intel_sdvo*,int ) ;
 int FUNC_8 (struct psb_intel_sdvo*,int ) ;
 int FUNC_9 (struct psb_intel_sdvo*,struct psb_intel_sdvo_dtd*) ;
 int FUNC_10 (struct psb_intel_sdvo*,struct psb_intel_sdvo_dtd*) ;
 int FUNC_11 (struct psb_intel_sdvo*) ;
 int FUNC_12 (struct psb_intel_sdvo*,int ) ;
 int FUNC_13 (struct psb_intel_sdvo*) ;
 int FUNC_14 (struct psb_intel_sdvo*,int ,struct psb_intel_sdvo_in_out_map*,int) ;
 int FUNC_15 (struct psb_intel_sdvo*,int) ;
 struct gma_crtc* FUNC_16 (struct drm_crtc*) ;
 struct psb_intel_sdvo* FUNC_17 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_18(struct drm_encoder *VAR_14,
    struct drm_display_mode *VAR_15,
    struct drm_display_mode *VAR_16)
{
 struct drm_device *VAR_17 = VAR_14->dev;
 struct drm_crtc *VAR_18 = VAR_14->crtc;
 struct gma_crtc *VAR_19 = FUNC_16(VAR_18);
 struct psb_intel_sdvo *VAR_20 = FUNC_17(VAR_14);
 u32 VAR_21;
 struct psb_intel_sdvo_in_out_map VAR_22;
 struct psb_intel_sdvo_dtd VAR_23;
 int VAR_24 = FUNC_3(VAR_16);
 int VAR_25;
 int VAR_26 = FUNC_0(VAR_17) ? 1 : 0;

 if (!VAR_15)
  return;







 VAR_22.in0 = VAR_20->attached_output;
 VAR_22.in1 = 0;

 FUNC_14(VAR_20,
        VAR_7,
        &VAR_22, sizeof(VAR_22));


 if (!FUNC_12(VAR_20,
       VAR_20->attached_output))
  return;




 if (VAR_20->is_tv || VAR_20->is_lvds) {
  VAR_23 = VAR_20->input_dtd;
 } else {

  if (!FUNC_12(VAR_20,
        VAR_20->attached_output))
   return;

  FUNC_4(&VAR_23, VAR_16);
  (void) FUNC_10(VAR_20, &VAR_23);
 }


 if (!FUNC_11(VAR_20))
  return;

 if (VAR_20->has_hdmi_monitor) {
  FUNC_8(VAR_20, VAR_10);
  FUNC_7(VAR_20,
        VAR_8);
  FUNC_5(VAR_20);
 } else
  FUNC_8(VAR_20, VAR_9);

 if (VAR_20->is_tv &&
     !FUNC_13(VAR_20))
  return;

 (void) FUNC_9(VAR_20, &VAR_23);

 switch (VAR_24) {
 default:
 case 1: VAR_25 = VAR_4; break;
 case 2: VAR_25 = VAR_5; break;
 case 4: VAR_25 = VAR_6; break;
 }
 if (!FUNC_6(VAR_20, VAR_25))
  return;


 if (VAR_26)
  VAR_21 = FUNC_2(VAR_20->sdvo_reg);
 else
  VAR_21 = FUNC_1(VAR_20->sdvo_reg);

 switch (VAR_20->sdvo_reg) {
 case 129:
  VAR_21 &= VAR_0;
  break;
 case 128:
  VAR_21 &= VAR_1;
  break;
 }
 VAR_21 |= (9 << 19) | VAR_3;

 if (VAR_19->pipe == 1)
  VAR_21 |= VAR_12;
 if (VAR_20->has_hdmi_audio)
  VAR_21 |= VAR_2;





 if (VAR_23.part2.sdvo_flags & VAR_11)
  VAR_21 |= VAR_13;
 FUNC_15(VAR_20, VAR_21);
}
