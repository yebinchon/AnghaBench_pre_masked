
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct intel_encoder {TYPE_2__ base; int port; } ;
struct intel_digital_port {int ddi_io_power_domain; } ;
struct TYPE_3__ {scalar_t__ compression_enable; } ;
struct intel_crtc_state {TYPE_1__ dsc_params; } ;
struct drm_i915_private {int dummy; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct intel_digital_port* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct intel_crtc_state*) ;
 int FUNC_3 (struct intel_crtc_state*,int ) ;
 int FUNC_4 (struct intel_digital_port*) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,int) ;
 int FUNC_8 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct intel_encoder *VAR_1,
     struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_9(VAR_1->base.dev);
 struct intel_digital_port *VAR_4;
 enum phy VAR_5 = FUNC_8(VAR_3, VAR_1->port);






 if (FUNC_0(FUNC_3(VAR_2, VAR_0)))
  return;

 VAR_4 = FUNC_1(&VAR_1->base);
 FUNC_5(VAR_3, VAR_4->ddi_io_power_domain);





 if (FUNC_2(VAR_2) ||
     FUNC_7(VAR_3, VAR_5))
  FUNC_5(VAR_3,
     FUNC_4(VAR_4));




 if (VAR_2->dsc_params.compression_enable)
  FUNC_5(VAR_3,
     FUNC_6(VAR_2));
}
