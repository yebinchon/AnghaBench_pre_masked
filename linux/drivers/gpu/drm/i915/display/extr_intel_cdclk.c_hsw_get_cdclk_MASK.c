
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_cdclk_state {int cdclk; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_6,
     struct intel_cdclk_state *VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_5);
 u32 VAR_9 = VAR_8 & VAR_4;

 if (VAR_8 & VAR_2)
  VAR_7->cdclk = 800000;
 else if (FUNC_0(VAR_0) & VAR_1)
  VAR_7->cdclk = 450000;
 else if (VAR_9 == VAR_3)
  VAR_7->cdclk = 450000;
 else if (FUNC_1(VAR_6))
  VAR_7->cdclk = 337500;
 else
  VAR_7->cdclk = 540000;
}
