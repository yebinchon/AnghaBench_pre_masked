
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_digital_port {int (* set_infoframes ) (struct intel_encoder*,int ,struct intel_crtc_state const*,struct drm_connector_state const*) ;} ;
struct intel_crtc_state {int has_infoframe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int FUNC_0 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_1 (struct intel_encoder*) ;
 int FUNC_2 (struct intel_encoder*,int,int,int) ;
 struct intel_digital_port* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_5 (struct intel_encoder*,int ,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 struct drm_i915_private* FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_i915_private*,struct intel_digital_port*,int) ;

__attribute__((used)) static void FUNC_8(struct intel_encoder *VAR_0,
    const struct intel_crtc_state *VAR_1,
    const struct drm_connector_state *VAR_2)
{
 struct intel_digital_port *VAR_3 = FUNC_3(&VAR_0->base);
 struct drm_device *VAR_4 = VAR_0->base.dev;
 struct drm_i915_private *VAR_5 = FUNC_6(VAR_4);

 FUNC_0(VAR_0, VAR_1);



 FUNC_2(VAR_0, 128, 102, 0);

 VAR_3->set_infoframes(VAR_0,
         VAR_1->has_infoframe,
         VAR_1, VAR_2);

 FUNC_4(VAR_0, VAR_1, VAR_2);

 FUNC_7(VAR_5, VAR_3, 0x0);


 FUNC_1(VAR_0);
}
