
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_hdmi {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_digital_port {int ddi_io_power_domain; int (* set_infoframes ) (struct intel_encoder*,int,struct intel_crtc_state const*,struct drm_connector_state const*) ;struct intel_hdmi hdmi; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 struct intel_digital_port* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct intel_encoder*) ;
 int FUNC_2 (struct intel_crtc_state const*) ;
 int FUNC_3 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (struct intel_hdmi*,int) ;
 int FUNC_6 (struct intel_encoder*,int,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct intel_encoder *VAR_0,
     const struct intel_crtc_state *VAR_1,
     const struct drm_connector_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_7(VAR_0->base.dev);
 struct intel_digital_port *VAR_4 = FUNC_0(&VAR_0->base);
 struct intel_hdmi *VAR_5 = &VAR_4->hdmi;

 VAR_4->set_infoframes(VAR_0, 0,
     VAR_1, VAR_2);

 FUNC_2(VAR_1);

 FUNC_3(VAR_0, VAR_1);

 FUNC_4(VAR_3,
       VAR_4->ddi_io_power_domain);

 FUNC_1(VAR_0);

 FUNC_5(VAR_5, 0);
}
