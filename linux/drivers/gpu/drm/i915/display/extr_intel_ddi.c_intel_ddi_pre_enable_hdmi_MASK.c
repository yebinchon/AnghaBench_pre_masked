
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_hdmi {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct intel_digital_port {int (* set_infoframes ) (struct intel_encoder*,int ,struct intel_crtc_state const*,struct drm_connector_state const*) ;int ddi_io_power_domain; struct intel_hdmi hdmi; } ;
struct intel_crtc_state {int has_infoframe; int port_clock; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct intel_encoder*,int,int ) ;
 int FUNC_5 (struct intel_encoder*,int,int ) ;
 struct intel_digital_port* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct intel_encoder*,int ,int,int ) ;
 int FUNC_8 (struct intel_digital_port*) ;
 int FUNC_9 (struct intel_digital_port*) ;
 int FUNC_10 (struct intel_digital_port*) ;
 int FUNC_11 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_12 (struct intel_crtc_state const*) ;
 int FUNC_13 (struct drm_i915_private*,int) ;
 int FUNC_14 (struct drm_i915_private*,int ) ;
 int FUNC_15 (struct intel_hdmi*,int) ;
 int FUNC_16 (struct intel_encoder*,int) ;
 int FUNC_17 (struct intel_encoder*,int,int ) ;
 int FUNC_18 (struct intel_encoder*,int ,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 struct drm_i915_private* FUNC_19 (int ) ;

__attribute__((used)) static void FUNC_20(struct intel_encoder *VAR_1,
          const struct intel_crtc_state *VAR_2,
          const struct drm_connector_state *VAR_3)
{
 struct intel_digital_port *VAR_4 = FUNC_6(&VAR_1->base);
 struct intel_hdmi *VAR_5 = &VAR_4->hdmi;
 struct drm_i915_private *VAR_6 = FUNC_19(VAR_1->base.dev);
 enum port VAR_7 = VAR_1->port;
 int VAR_8 = FUNC_13(VAR_6, VAR_7);
 struct intel_digital_port *VAR_9 = FUNC_6(&VAR_1->base);

 FUNC_15(VAR_5, 1);
 FUNC_11(VAR_1, VAR_2);

 FUNC_14(VAR_6, VAR_9->ddi_io_power_domain);

 FUNC_10(VAR_9);
 FUNC_8(VAR_9);

 if (FUNC_0(VAR_6) >= 11)
  FUNC_7(VAR_1, VAR_2->port_clock,
     VAR_8, VAR_0);
 else if (FUNC_1(VAR_6))
  FUNC_5(VAR_1, VAR_8, VAR_0);
 else if (FUNC_3(VAR_6))
  FUNC_4(VAR_1, VAR_8, VAR_0);
 else
  FUNC_16(VAR_1, VAR_8);

 FUNC_9(VAR_9);

 if (FUNC_2(VAR_6))
  FUNC_17(VAR_1, VAR_8, VAR_0);

 FUNC_12(VAR_2);

 VAR_4->set_infoframes(VAR_1,
           VAR_2->has_infoframe,
           VAR_2, VAR_3);
}
