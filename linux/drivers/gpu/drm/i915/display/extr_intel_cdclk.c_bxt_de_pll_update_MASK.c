
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_cdclk_state {int ref; int vco; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_5,
         struct intel_cdclk_state *VAR_6)
{
 u32 VAR_7;

 VAR_6->ref = 19200;
 VAR_6->vco = 0;

 VAR_7 = FUNC_0(VAR_1);
 if ((VAR_7 & VAR_3) == 0)
  return;

 if (FUNC_1((VAR_7 & VAR_2) == 0))
  return;

 VAR_7 = FUNC_0(VAR_0);
 VAR_6->vco = (VAR_7 & VAR_4) * VAR_6->ref;
}
