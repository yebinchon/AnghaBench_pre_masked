
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_cdclk_state {int cdclk; int voltage_level; scalar_t__ vco; int bypass; } ;
struct TYPE_2__ {struct intel_cdclk_state hw; } ;
struct drm_i915_private {TYPE_1__ cdclk; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,int ) ;
 int FUNC_1 (struct drm_i915_private*,struct intel_cdclk_state*,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_1)
{
 struct intel_cdclk_state VAR_2 = VAR_1->cdclk.hw;

 VAR_2.cdclk = VAR_2.bypass;
 VAR_2.vco = 0;
 VAR_2.voltage_level = FUNC_0(VAR_1,
          VAR_2.cdclk);

 FUNC_1(VAR_1, &VAR_2, VAR_0);
}
