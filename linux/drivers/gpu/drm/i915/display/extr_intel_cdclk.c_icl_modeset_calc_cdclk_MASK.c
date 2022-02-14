
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int ref; int vco; int cdclk; int voltage_level; } ;
struct TYPE_6__ {int force_min_cdclk; TYPE_2__ logical; TYPE_2__ actual; } ;
struct TYPE_4__ {int dev; } ;
struct intel_atomic_state {TYPE_3__ cdclk; int active_crtcs; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct intel_atomic_state*) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (struct drm_i915_private*,int) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct intel_atomic_state*) ;
 int FUNC_5 (int ,int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct intel_atomic_state *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_6(VAR_0->base.dev);
 unsigned int VAR_2 = VAR_0->cdclk.logical.ref;
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_4(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 VAR_5 = FUNC_2(VAR_1, VAR_4);

 VAR_0->cdclk.logical.vco = VAR_5;
 VAR_0->cdclk.logical.cdclk = VAR_4;
 VAR_0->cdclk.logical.voltage_level =
  FUNC_5(FUNC_3(VAR_1, VAR_4),
      FUNC_0(VAR_0));

 if (!VAR_0->active_crtcs) {
  VAR_4 = FUNC_1(VAR_0->cdclk.force_min_cdclk, VAR_2);
  VAR_5 = FUNC_2(VAR_1, VAR_4);

  VAR_0->cdclk.actual.vco = VAR_5;
  VAR_0->cdclk.actual.cdclk = VAR_4;
  VAR_0->cdclk.actual.voltage_level =
   FUNC_3(VAR_1, VAR_4);
 } else {
  VAR_0->cdclk.actual = VAR_0->cdclk.logical;
 }

 return 0;
}
