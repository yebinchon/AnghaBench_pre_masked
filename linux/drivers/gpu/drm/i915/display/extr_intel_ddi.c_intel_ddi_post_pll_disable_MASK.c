
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct intel_digital_port {int dummy; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 struct intel_digital_port* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct intel_crtc_state const*) ;
 int FUNC_2 (struct intel_digital_port*) ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (struct intel_digital_port*) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct intel_encoder *VAR_0,
      const struct intel_crtc_state *VAR_1,
      const struct drm_connector_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_7(VAR_0->base.dev);
 struct intel_digital_port *VAR_4 = FUNC_0(&VAR_0->base);
 enum phy VAR_5 = FUNC_5(VAR_3, VAR_0->port);
 bool VAR_6 = FUNC_4(VAR_3, VAR_5);

 if (FUNC_1(VAR_1) || VAR_6)
  FUNC_3(VAR_3,
        FUNC_2(VAR_4));

 if (VAR_6)
  FUNC_6(VAR_4);
}
