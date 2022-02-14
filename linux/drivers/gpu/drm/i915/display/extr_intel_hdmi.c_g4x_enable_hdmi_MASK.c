
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi {int hdmi_reg; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc_state {scalar_t__ has_audio; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 struct intel_hdmi* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 struct drm_i915_private* FUNC_5 (struct drm_device*) ;

__attribute__((used)) static void FUNC_6(struct intel_encoder *VAR_2,
       const struct intel_crtc_state *VAR_3,
       const struct drm_connector_state *VAR_4)
{
 struct drm_device *VAR_5 = VAR_2->base.dev;
 struct drm_i915_private *VAR_6 = FUNC_5(VAR_5);
 struct intel_hdmi *VAR_7 = FUNC_3(&VAR_2->base);
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_7->hdmi_reg);

 VAR_8 |= VAR_1;
 if (VAR_3->has_audio)
  VAR_8 |= VAR_0;

 FUNC_1(VAR_7->hdmi_reg, VAR_8);
 FUNC_2(VAR_7->hdmi_reg);

 if (VAR_3->has_audio)
  FUNC_4(VAR_2, VAR_3, VAR_4);
}
