
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_overlay {int pfit_vscale_ratio; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct intel_overlay *VAR_6)
{
 struct drm_i915_private *VAR_7 = VAR_6->i915;
 u32 VAR_8 = FUNC_0(VAR_1);
 u32 VAR_9;




 if (FUNC_1(VAR_7) >= 4) {

  VAR_9 = FUNC_0(VAR_2) >> VAR_4;
 } else {
  if (VAR_8 & VAR_5)
   VAR_9 = FUNC_0(VAR_0);
  else
   VAR_9 = FUNC_0(VAR_2);
  VAR_9 >>= VAR_3;
 }

 VAR_6->pfit_vscale_ratio = VAR_9;
}
