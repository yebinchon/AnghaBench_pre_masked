
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_lvds_encoder {int reg; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*,int ,int ,int) ;
 int FUNC_7 (struct intel_crtc_state const*,struct drm_connector_state const*) ;
 struct drm_i915_private* FUNC_8 (struct drm_device*) ;
 struct intel_lvds_encoder* FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(struct intel_encoder *VAR_3,
         const struct intel_crtc_state *VAR_4,
         const struct drm_connector_state *VAR_5)
{
 struct drm_device *VAR_6 = VAR_3->base.dev;
 struct intel_lvds_encoder *VAR_7 = FUNC_9(&VAR_3->base);
 struct drm_i915_private *VAR_8 = FUNC_8(VAR_6);

 FUNC_2(VAR_7->reg, FUNC_1(VAR_7->reg) | VAR_0);

 FUNC_2(FUNC_4(0), FUNC_1(FUNC_4(0)) | VAR_1);
 FUNC_3(VAR_7->reg);

 if (FUNC_6(VAR_8, FUNC_5(0), VAR_2, 5000))
  FUNC_0("timed out waiting for panel to power on\n");

 FUNC_7(VAR_4, VAR_5);
}
