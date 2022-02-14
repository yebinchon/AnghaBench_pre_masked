
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dev; } ;
struct intel_encoder {TYPE_3__ base; } ;
struct hdmi_drm_infoframe {int dummy; } ;
struct TYPE_4__ {struct hdmi_drm_infoframe drm; } ;
struct TYPE_5__ {int enable; TYPE_1__ drm; } ;
struct intel_crtc_state {TYPE_2__ infoframes; int has_infoframe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int hdr_output_metadata; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct hdmi_drm_infoframe*,struct drm_connector_state*) ;
 int FUNC_5 (struct hdmi_drm_infoframe*) ;
 int FUNC_6 (int ) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static bool
FUNC_8(struct intel_encoder *VAR_1,
     struct intel_crtc_state *VAR_2,
     struct drm_connector_state *VAR_3)
{
 struct hdmi_drm_infoframe *VAR_4 = &VAR_2->infoframes.drm.drm;
 struct drm_i915_private *VAR_5 = FUNC_7(VAR_1->base.dev);
 int VAR_6;

 if (!(FUNC_1(VAR_5) >= 10 || FUNC_2(VAR_5)))
  return 1;

 if (!VAR_2->has_infoframe)
  return 1;

 if (!VAR_3->hdr_output_metadata)
  return 1;

 VAR_2->infoframes.enable |=
  FUNC_6(VAR_0);

 VAR_6 = FUNC_4(VAR_4, VAR_3);
 if (VAR_6 < 0) {
  FUNC_0("couldn't set HDR metadata in infoframe\n");
  return 0;
 }

 VAR_6 = FUNC_5(VAR_4);
 if (FUNC_3(VAR_6))
  return 0;

 return 1;
}
