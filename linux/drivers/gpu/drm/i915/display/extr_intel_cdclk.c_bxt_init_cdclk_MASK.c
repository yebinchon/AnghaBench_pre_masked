
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_cdclk_state {scalar_t__ cdclk; scalar_t__ vco; int voltage_level; } ;
struct TYPE_2__ {struct intel_cdclk_state hw; } ;
struct drm_i915_private {TYPE_1__ cdclk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,scalar_t__) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,struct intel_cdclk_state*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_1)
{
 struct intel_cdclk_state VAR_2;

 FUNC_4(VAR_1);

 if (VAR_1->cdclk.hw.cdclk != 0 &&
     VAR_1->cdclk.hw.vco != 0)
  return;

 VAR_2 = VAR_1->cdclk.hw;






 if (FUNC_0(VAR_1)) {
  VAR_2.cdclk = FUNC_6(0);
  VAR_2.vco = FUNC_7(VAR_1, VAR_2.cdclk);
 } else {
  VAR_2.cdclk = FUNC_1(0);
  VAR_2.vco = FUNC_3(VAR_1, VAR_2.cdclk);
 }
 VAR_2.voltage_level = FUNC_2(VAR_2.cdclk);

 FUNC_5(VAR_1, &VAR_2, VAR_0);
}
