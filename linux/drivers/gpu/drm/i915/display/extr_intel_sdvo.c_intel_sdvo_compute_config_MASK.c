
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ force_audio; scalar_t__ broadcast_rgb; } ;
struct intel_sdvo_connector_state {TYPE_5__ base; } ;
struct TYPE_8__ {struct drm_display_mode* fixed_mode; } ;
struct TYPE_9__ {TYPE_3__ panel; } ;
struct intel_sdvo_connector {scalar_t__ is_hdmi; TYPE_4__ base; } ;
struct intel_sdvo {scalar_t__ has_hdmi_audio; int has_hdmi_monitor; } ;
struct TYPE_7__ {int dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct drm_display_mode {int flags; int picture_aspect_ratio; } ;
struct TYPE_6__ {struct drm_display_mode mode; struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int pipe_bpp; int has_pch_encoder; int sdvo_tv_clock; int has_audio; int limited_color_range; int has_hdmi_sink; int pixel_multiplier; int output_format; TYPE_1__ base; } ;
struct drm_connector_state {int picture_aspect_ratio; int connector; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct intel_sdvo_connector*) ;
 scalar_t__ FUNC_3 (struct intel_sdvo_connector*) ;
 int FUNC_4 (struct drm_display_mode*) ;
 int FUNC_5 (struct intel_crtc_state*) ;
 int FUNC_6 (struct intel_sdvo*,struct intel_crtc_state*,struct drm_connector_state*) ;
 int FUNC_7 (struct drm_display_mode*) ;
 int FUNC_8 (struct intel_sdvo*,struct intel_sdvo_connector*,struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_9 (struct intel_sdvo*,struct drm_display_mode*) ;
 int FUNC_10 (int ) ;
 struct intel_sdvo_connector* FUNC_11 (int ) ;
 struct intel_sdvo_connector_state* FUNC_12 (struct drm_connector_state*) ;
 struct intel_sdvo* FUNC_13 (struct intel_encoder*) ;

__attribute__((used)) static int FUNC_14(struct intel_encoder *VAR_8,
         struct intel_crtc_state *VAR_9,
         struct drm_connector_state *VAR_10)
{
 struct intel_sdvo *VAR_11 = FUNC_13(VAR_8);
 struct intel_sdvo_connector_state *VAR_12 =
  FUNC_12(VAR_10);
 struct intel_sdvo_connector *VAR_13 =
  FUNC_11(VAR_10->connector);
 struct drm_display_mode *VAR_14 = &VAR_9->base.adjusted_mode;
 struct drm_display_mode *VAR_15 = &VAR_9->base.mode;

 FUNC_0("forcing bpc to 8 for SDVO\n");
 VAR_9->pipe_bpp = 8*3;
 VAR_9->output_format = VAR_7;

 if (FUNC_1(FUNC_10(VAR_8->base.dev)))
  VAR_9->has_pch_encoder = 1;







 if (FUNC_3(VAR_13)) {
  if (!FUNC_9(VAR_11, VAR_15))
   return -VAR_1;

  (void) FUNC_8(VAR_11,
          VAR_13,
          VAR_15,
          VAR_14);
  VAR_9->sdvo_tv_clock = 1;
 } else if (FUNC_2(VAR_13)) {
  if (!FUNC_9(VAR_11,
            VAR_13->base.panel.fixed_mode))
   return -VAR_1;

  (void) FUNC_8(VAR_11,
          VAR_13,
          VAR_15,
          VAR_14);
 }

 if (VAR_14->flags & VAR_0)
  return -VAR_1;





 VAR_9->pixel_multiplier =
  FUNC_7(VAR_14);

 if (VAR_12->base.force_audio != VAR_3)
  VAR_9->has_hdmi_sink = VAR_11->has_hdmi_monitor;

 if (VAR_12->base.force_audio == VAR_4 ||
     (VAR_12->base.force_audio == VAR_2 && VAR_11->has_hdmi_audio))
  VAR_9->has_audio = 1;

 if (VAR_12->base.broadcast_rgb == VAR_5) {






  if (VAR_9->has_hdmi_sink &&
      FUNC_4(VAR_14) > 1)
   VAR_9->limited_color_range = 1;
 } else {
  if (VAR_9->has_hdmi_sink &&
      VAR_12->base.broadcast_rgb == VAR_6)
   VAR_9->limited_color_range = 1;
 }


 if (FUNC_3(VAR_13))
  FUNC_5(VAR_9);


 if (VAR_13->is_hdmi)
  VAR_14->picture_aspect_ratio = VAR_10->picture_aspect_ratio;

 if (!FUNC_6(VAR_11,
           VAR_9, VAR_10)) {
  FUNC_0("bad AVI infoframe\n");
  return -VAR_1;
 }

 return 0;
}
