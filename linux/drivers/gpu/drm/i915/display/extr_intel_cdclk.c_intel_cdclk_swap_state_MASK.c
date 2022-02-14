
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int actual; int logical; } ;
struct TYPE_4__ {int dev; } ;
struct intel_atomic_state {TYPE_2__ cdclk; TYPE_1__ base; } ;
struct TYPE_6__ {int actual; int logical; } ;
struct drm_i915_private {TYPE_3__ cdclk; } ;


 int FUNC_0 (int ,int ) ;
 struct drm_i915_private* FUNC_1 (int ) ;

void FUNC_2(struct intel_atomic_state *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_1(VAR_0->base.dev);

 FUNC_0(VAR_0->cdclk.logical, VAR_1->cdclk.logical);
 FUNC_0(VAR_0->cdclk.actual, VAR_1->cdclk.actual);
}
