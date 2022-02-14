
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_cdclk_state {int dummy; } ;
struct TYPE_3__ {struct intel_cdclk_state const hw; } ;
struct TYPE_4__ {int (* set_cdclk ) (struct drm_i915_private*,struct intel_cdclk_state const*,int) ;} ;
struct drm_i915_private {TYPE_1__ cdclk; TYPE_2__ display; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct intel_cdclk_state const*,struct intel_cdclk_state const*) ;
 int FUNC_3 (struct intel_cdclk_state const*,char*) ;
 int FUNC_4 (struct drm_i915_private*,struct intel_cdclk_state const*,int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_0,
       const struct intel_cdclk_state *VAR_1,
       enum pipe VAR_2)
{
 if (!FUNC_2(&VAR_0->cdclk.hw, VAR_1))
  return;

 if (FUNC_1(!VAR_0->display.set_cdclk))
  return;

 FUNC_3(VAR_1, "Changing CDCLK to");

 VAR_0->display.set_cdclk(VAR_0, VAR_1, VAR_2);

 if (FUNC_0(FUNC_2(&VAR_0->cdclk.hw, VAR_1),
   "cdclk state doesn't match!\n")) {
  FUNC_3(&VAR_0->cdclk.hw, "[hw state]");
  FUNC_3(VAR_1, "[sw state]");
 }
}
