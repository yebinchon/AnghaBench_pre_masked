
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct intel_dp {int dummy; } ;
struct intel_digital_port {scalar_t__ tc_mode; int ddi_io_power_domain; struct intel_dp dp; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct intel_digital_port* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct intel_crtc_state const*,int ) ;
 int FUNC_2 (struct intel_encoder*) ;
 int FUNC_3 (struct intel_crtc_state const*) ;
 int FUNC_4 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (struct intel_dp*,int ) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct intel_dp*) ;
 int FUNC_9 (struct drm_i915_private*,int) ;
 int FUNC_10 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct intel_encoder *VAR_3,
          const struct intel_crtc_state *VAR_4,
          const struct drm_connector_state *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_11(VAR_3->base.dev);
 struct intel_digital_port *VAR_7 = FUNC_0(&VAR_3->base);
 struct intel_dp *VAR_8 = &VAR_7->dp;
 bool VAR_9 = FUNC_1(VAR_4,
       VAR_1);
 enum phy VAR_10 = FUNC_10(VAR_6, VAR_3->port);

 if (!VAR_9) {
  FUNC_3(VAR_4);




  FUNC_6(VAR_8, VAR_0);
 }

 FUNC_4(VAR_3, VAR_4);

 FUNC_8(VAR_8);
 FUNC_7(VAR_8);

 if (!FUNC_9(VAR_6, VAR_10) ||
     VAR_7->tc_mode != VAR_2)
  FUNC_5(VAR_6,
        VAR_7->ddi_io_power_domain);

 FUNC_2(VAR_3);
}
