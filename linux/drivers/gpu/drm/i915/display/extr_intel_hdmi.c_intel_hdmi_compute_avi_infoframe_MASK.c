
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct hdmi_avi_infoframe {int colorspace; } ;
struct TYPE_4__ {struct hdmi_avi_infoframe avi; } ;
struct TYPE_6__ {int enable; TYPE_1__ avi; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_5__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {scalar_t__ output_format; scalar_t__ limited_color_range; TYPE_3__ infoframes; int has_infoframe; TYPE_2__ base; } ;
struct drm_connector_state {struct drm_connector* connector; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hdmi_avi_infoframe*,struct drm_connector_state*) ;
 int FUNC_2 (struct hdmi_avi_infoframe*,struct drm_connector_state*) ;
 int FUNC_3 (struct hdmi_avi_infoframe*,struct drm_connector*,struct drm_display_mode const*) ;
 int FUNC_4 (struct hdmi_avi_infoframe*,struct drm_connector*,struct drm_display_mode const*,int ) ;
 int FUNC_5 (struct hdmi_avi_infoframe*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7(struct intel_encoder *VAR_8,
     struct intel_crtc_state *VAR_9,
     struct drm_connector_state *VAR_10)
{
 struct hdmi_avi_infoframe *VAR_11 = &VAR_9->infoframes.avi.avi;
 const struct drm_display_mode *VAR_12 =
  &VAR_9->base.adjusted_mode;
 struct drm_connector *VAR_13 = VAR_10->connector;
 int VAR_14;

 if (!VAR_9->has_infoframe)
  return 1;

 VAR_9->infoframes.enable |=
  FUNC_6(VAR_3);

 VAR_14 = FUNC_3(VAR_11, VAR_13,
             VAR_12);
 if (VAR_14)
  return 0;

 if (VAR_9->output_format == VAR_6)
  VAR_11->colorspace = VAR_1;
 else if (VAR_9->output_format == VAR_7)
  VAR_11->colorspace = VAR_2;
 else
  VAR_11->colorspace = VAR_0;

 FUNC_1(VAR_11, VAR_10);

 FUNC_4(VAR_11, VAR_13,
        VAR_12,
        VAR_9->limited_color_range ?
        VAR_5 :
        VAR_4);

 FUNC_2(VAR_11, VAR_10);



 VAR_14 = FUNC_5(VAR_11);
 if (FUNC_0(VAR_14))
  return 0;

 return 1;
}
