
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_cdclk_state {scalar_t__ cdclk; scalar_t__ vco; int voltage_level; } ;
struct TYPE_2__ {struct intel_cdclk_state hw; } ;
struct drm_i915_private {TYPE_1__ cdclk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,scalar_t__) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,struct intel_cdclk_state*,int ) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_1)
{
 struct intel_cdclk_state VAR_2;

 FUNC_3(VAR_1);

 if (VAR_1->cdclk.hw.cdclk != 0 &&
     VAR_1->cdclk.hw.vco != 0)
  return;

 VAR_2 = VAR_1->cdclk.hw;

 VAR_2.cdclk = FUNC_0(0);
 VAR_2.vco = FUNC_2(VAR_1, VAR_2.cdclk);
 VAR_2.voltage_level = FUNC_1(VAR_2.cdclk);

 FUNC_4(VAR_1, &VAR_2, VAR_0);
}
