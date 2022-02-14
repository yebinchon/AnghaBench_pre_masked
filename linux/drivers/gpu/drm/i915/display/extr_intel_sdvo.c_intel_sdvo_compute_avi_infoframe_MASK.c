
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_sdvo {int dummy; } ;
struct hdmi_avi_infoframe {int dummy; } ;
struct TYPE_4__ {struct hdmi_avi_infoframe avi; } ;
struct TYPE_5__ {int enable; TYPE_1__ avi; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_6__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {scalar_t__ limited_color_range; TYPE_2__ infoframes; int has_hdmi_sink; TYPE_3__ base; } ;
struct drm_connector_state {int connector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hdmi_avi_infoframe*,int ,struct drm_display_mode const*) ;
 int FUNC_2 (struct hdmi_avi_infoframe*,int ,struct drm_display_mode const*,int ) ;
 int FUNC_3 (struct hdmi_avi_infoframe*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct intel_sdvo *VAR_3,
          struct intel_crtc_state *VAR_4,
          struct drm_connector_state *VAR_5)
{
 struct hdmi_avi_infoframe *VAR_6 = &VAR_4->infoframes.avi.avi;
 const struct drm_display_mode *VAR_7 =
  &VAR_4->base.adjusted_mode;
 int VAR_8;

 if (!VAR_4->has_hdmi_sink)
  return 1;

 VAR_4->infoframes.enable |=
  FUNC_4(VAR_0);

 VAR_8 = FUNC_1(VAR_6,
             VAR_5->connector,
             VAR_7);
 if (VAR_8)
  return 0;

 FUNC_2(VAR_6,
        VAR_5->connector,
        VAR_7,
        VAR_4->limited_color_range ?
        VAR_2 :
        VAR_1);

 VAR_8 = FUNC_3(VAR_6);
 if (FUNC_0(VAR_8))
  return 0;

 return 1;
}
