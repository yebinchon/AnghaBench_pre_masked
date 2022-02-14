
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int dummy; } ;
struct intel_digital_port {scalar_t__ aux_ch; } ;
struct TYPE_3__ {int cdclk; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
struct drm_i915_private {int rawclk_freq; TYPE_2__ cdclk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct intel_digital_port* FUNC_1 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_2 (struct intel_dp*) ;

__attribute__((used)) static u32 FUNC_3(struct intel_dp *VAR_1, int VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_2(VAR_1);
 struct intel_digital_port *VAR_4 = FUNC_1(VAR_1);

 if (VAR_2)
  return 0;






 if (VAR_4->aux_ch == VAR_0)
  return FUNC_0(VAR_3->cdclk.hw.cdclk, 2000);
 else
  return FUNC_0(VAR_3->rawclk_freq, 2000);
}
