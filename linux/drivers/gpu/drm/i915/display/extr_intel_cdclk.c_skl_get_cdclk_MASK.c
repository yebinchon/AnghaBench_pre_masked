
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_cdclk_state {int cdclk; int bypass; int ref; int vco; int voltage_level; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,struct intel_cdclk_state*) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_2,
     struct intel_cdclk_state *VAR_3)
{
 u32 VAR_4;

 FUNC_3(VAR_2, VAR_3);

 VAR_3->cdclk = VAR_3->bypass = VAR_3->ref;

 if (VAR_3->vco == 0)
  goto out;

 VAR_4 = FUNC_0(VAR_0);

 if (VAR_3->vco == 8640000) {
  switch (VAR_4 & VAR_1) {
  case 130:
   VAR_3->cdclk = 432000;
   break;
  case 131:
   VAR_3->cdclk = 308571;
   break;
  case 129:
   VAR_3->cdclk = 540000;
   break;
  case 128:
   VAR_3->cdclk = 617143;
   break;
  default:
   FUNC_1(VAR_4 & VAR_1);
   break;
  }
 } else {
  switch (VAR_4 & VAR_1) {
  case 130:
   VAR_3->cdclk = 450000;
   break;
  case 131:
   VAR_3->cdclk = 337500;
   break;
  case 129:
   VAR_3->cdclk = 540000;
   break;
  case 128:
   VAR_3->cdclk = 675000;
   break;
  default:
   FUNC_1(VAR_4 & VAR_1);
   break;
  }
 }

 out:




 VAR_3->voltage_level =
  FUNC_2(VAR_3->cdclk);
}
