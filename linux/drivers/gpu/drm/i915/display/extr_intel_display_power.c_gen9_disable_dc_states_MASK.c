
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_cdclk_state {int dummy; } ;
struct TYPE_4__ {int hw; } ;
struct TYPE_3__ {int (* get_cdclk ) (struct drm_i915_private*,struct intel_cdclk_state*) ;} ;
struct drm_i915_private {TYPE_2__ cdclk; TYPE_1__ display; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (int *,struct intel_cdclk_state*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*,struct intel_cdclk_state*) ;

__attribute__((used)) static void FUNC_9(struct drm_i915_private *VAR_1)
{
 struct intel_cdclk_state VAR_2 = {};

 FUNC_5(VAR_1, VAR_0);

 VAR_1->display.get_cdclk(VAR_1, &VAR_2);

 FUNC_2(FUNC_6(&VAR_1->cdclk.hw, &VAR_2));

 FUNC_4(VAR_1);

 if (FUNC_1(VAR_1))
  FUNC_3(VAR_1);

 if (FUNC_0(VAR_1) >= 11)





  FUNC_7(VAR_1);
}
