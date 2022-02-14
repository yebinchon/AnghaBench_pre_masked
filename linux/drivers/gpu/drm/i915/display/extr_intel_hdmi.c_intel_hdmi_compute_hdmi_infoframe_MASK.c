
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct TYPE_6__ {int adjusted_mode; } ;
struct hdmi_vendor_infoframe {int dummy; } ;
struct TYPE_7__ {struct hdmi_vendor_infoframe hdmi; } ;
struct TYPE_8__ {TYPE_2__ vendor; } ;
struct TYPE_9__ {int enable; TYPE_3__ hdmi; } ;
struct intel_crtc_state {TYPE_1__ base; TYPE_4__ infoframes; int has_infoframe; } ;
struct drm_display_info {int has_hdmi_infoframe; } ;
struct drm_connector_state {TYPE_5__* connector; } ;
struct TYPE_10__ {struct drm_display_info display_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hdmi_vendor_infoframe*,TYPE_5__*,int *) ;
 int FUNC_2 (struct hdmi_vendor_infoframe*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(struct intel_encoder *VAR_1,
      struct intel_crtc_state *VAR_2,
      struct drm_connector_state *VAR_3)
{
 struct hdmi_vendor_infoframe *VAR_4 =
  &VAR_2->infoframes.hdmi.vendor.hdmi;
 const struct drm_display_info *VAR_5 =
  &VAR_3->connector->display_info;
 int VAR_6;

 if (!VAR_2->has_infoframe || !VAR_5->has_hdmi_infoframe)
  return 1;

 VAR_2->infoframes.enable |=
  FUNC_3(VAR_0);

 VAR_6 = FUNC_1(VAR_4,
         VAR_3->connector,
         &VAR_2->base.adjusted_mode);
 if (FUNC_0(VAR_6))
  return 0;

 VAR_6 = FUNC_2(VAR_4);
 if (FUNC_0(VAR_6))
  return 0;

 return 1;
}
