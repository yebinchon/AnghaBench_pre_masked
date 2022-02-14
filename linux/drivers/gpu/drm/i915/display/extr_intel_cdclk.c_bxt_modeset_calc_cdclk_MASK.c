
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vco; int cdclk; void* voltage_level; } ;
struct TYPE_6__ {int force_min_cdclk; TYPE_2__ logical; TYPE_2__ actual; } ;
struct TYPE_4__ {int dev; } ;
struct intel_atomic_state {TYPE_3__ cdclk; int active_crtcs; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (struct intel_atomic_state*) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct intel_atomic_state *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_7(VAR_0->base.dev);
 int VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 if (FUNC_0(VAR_1)) {
  VAR_3 = FUNC_4(VAR_2);
  VAR_4 = FUNC_5(VAR_1, VAR_3);
 } else {
  VAR_3 = FUNC_1(VAR_2);
  VAR_4 = FUNC_3(VAR_1, VAR_3);
 }

 VAR_0->cdclk.logical.vco = VAR_4;
 VAR_0->cdclk.logical.cdclk = VAR_3;
 VAR_0->cdclk.logical.voltage_level =
  FUNC_2(VAR_3);

 if (!VAR_0->active_crtcs) {
  if (FUNC_0(VAR_1)) {
   VAR_3 = FUNC_4(VAR_0->cdclk.force_min_cdclk);
   VAR_4 = FUNC_5(VAR_1, VAR_3);
  } else {
   VAR_3 = FUNC_1(VAR_0->cdclk.force_min_cdclk);
   VAR_4 = FUNC_3(VAR_1, VAR_3);
  }

  VAR_0->cdclk.actual.vco = VAR_4;
  VAR_0->cdclk.actual.cdclk = VAR_3;
  VAR_0->cdclk.actual.voltage_level =
   FUNC_2(VAR_3);
 } else {
  VAR_0->cdclk.actual = VAR_0->cdclk.logical;
 }

 return 0;
}
