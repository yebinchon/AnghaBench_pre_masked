
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct intel_digital_port {scalar_t__ tc_mode; } ;
struct intel_crtc_state {int lane_lat_optim_mask; int lane_count; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct intel_encoder*,int ) ;
 struct intel_digital_port* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct intel_crtc_state const*) ;
 int FUNC_4 (struct intel_digital_port*) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (struct drm_i915_private*,int) ;
 int FUNC_7 (struct drm_i915_private*,int ) ;
 int FUNC_8 (struct intel_digital_port*,int ) ;
 int FUNC_9 (struct intel_digital_port*,int ) ;
 struct drm_i915_private* FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct intel_encoder *VAR_1,
    const struct intel_crtc_state *VAR_2,
    const struct drm_connector_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_10(VAR_1->base.dev);
 struct intel_digital_port *VAR_5 = FUNC_2(&VAR_1->base);
 enum phy VAR_6 = FUNC_7(VAR_4, VAR_1->port);
 bool VAR_7 = FUNC_6(VAR_4, VAR_6);

 if (VAR_7)
  FUNC_8(VAR_5, VAR_2->lane_count);

 if (FUNC_3(VAR_2) || VAR_7)
  FUNC_5(VAR_4,
     FUNC_4(VAR_5));

 if (VAR_7 && VAR_5->tc_mode != VAR_0)




  FUNC_9(VAR_5, VAR_2->lane_count);
 else if (FUNC_0(VAR_4))
  FUNC_1(VAR_1,
      VAR_2->lane_lat_optim_mask);
}
