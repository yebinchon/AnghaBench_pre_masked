
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi {int hdmi_reg; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct intel_digital_port {int (* set_infoframes ) (struct intel_encoder*,int,struct intel_crtc_state const*,struct drm_connector_state const*) ;} ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct intel_crtc {scalar_t__ pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 struct intel_hdmi* FUNC_5 (TYPE_2__*) ;
 struct intel_digital_port* FUNC_6 (struct intel_hdmi*) ;
 int FUNC_7 (struct intel_hdmi*,int) ;
 int FUNC_8 (struct drm_i915_private*,int ,int) ;
 int FUNC_9 (struct drm_i915_private*,int ,int) ;
 int FUNC_10 (struct drm_i915_private*,int ) ;
 int FUNC_11 (struct intel_encoder*,int,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 struct drm_i915_private* FUNC_12 (struct drm_device*) ;
 struct intel_crtc* FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct intel_encoder *VAR_5,
          const struct intel_crtc_state *VAR_6,
          const struct drm_connector_state *VAR_7)
{
 struct drm_device *VAR_8 = VAR_5->base.dev;
 struct drm_i915_private *VAR_9 = FUNC_12(VAR_8);
 struct intel_hdmi *VAR_10 = FUNC_5(&VAR_5->base);
 struct intel_digital_port *VAR_11 =
  FUNC_6(VAR_10);
 struct intel_crtc *VAR_12 = FUNC_13(VAR_6->base.crtc);
 u32 VAR_13;

 VAR_13 = FUNC_1(VAR_10->hdmi_reg);

 VAR_13 &= ~(VAR_3 | VAR_0);
 FUNC_2(VAR_10->hdmi_reg, VAR_13);
 FUNC_3(VAR_10->hdmi_reg);






 if (FUNC_0(VAR_9) && VAR_12->pipe == VAR_2) {




  FUNC_8(VAR_9, VAR_1, 0);
  FUNC_9(VAR_9, VAR_1, 0);

  VAR_13 &= ~VAR_4;
  VAR_13 |= VAR_3 | FUNC_4(VAR_1);




  FUNC_2(VAR_10->hdmi_reg, VAR_13);
  FUNC_3(VAR_10->hdmi_reg);
  FUNC_2(VAR_10->hdmi_reg, VAR_13);
  FUNC_3(VAR_10->hdmi_reg);

  VAR_13 &= ~VAR_3;
  FUNC_2(VAR_10->hdmi_reg, VAR_13);
  FUNC_3(VAR_10->hdmi_reg);

  FUNC_10(VAR_9, VAR_1);
  FUNC_8(VAR_9, VAR_1, 1);
  FUNC_9(VAR_9, VAR_1, 1);
 }

 VAR_11->set_infoframes(VAR_5,
           0,
           VAR_6, VAR_7);

 FUNC_7(VAR_10, 0);
}
