
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_cdclk_state {scalar_t__ vco; int cdclk; int voltage_level; int ref; int bypass; } ;
struct drm_i915_private {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct drm_i915_private*,struct intel_cdclk_state*) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_2,
    struct intel_cdclk_state *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 FUNC_4(VAR_2, VAR_3);

 VAR_3->cdclk = VAR_3->bypass = VAR_3->ref;

 if (VAR_3->vco == 0)
  goto out;

 VAR_4 = FUNC_1(VAR_1) & VAR_0;

 switch (VAR_4) {
 case 129:
  VAR_5 = 2;
  break;
 case 128:
  VAR_5 = 4;
  break;
 default:
  FUNC_2(VAR_4);
  return;
 }

 VAR_3->cdclk = FUNC_0(VAR_3->vco, VAR_5);

 out:




 VAR_3->voltage_level =
  FUNC_3(VAR_3->cdclk);
}
