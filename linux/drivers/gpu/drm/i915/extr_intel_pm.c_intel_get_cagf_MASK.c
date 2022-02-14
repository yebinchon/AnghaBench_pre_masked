
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;

u32 FUNC_3(struct drm_i915_private *VAR_6, u32 VAR_7)
{
 u32 VAR_8;

 if (FUNC_0(VAR_6) >= 9)
  VAR_8 = (VAR_7 & VAR_2) >> VAR_3;
 else if (FUNC_2(VAR_6) || FUNC_1(VAR_6))
  VAR_8 = (VAR_7 & VAR_4) >> VAR_5;
 else
  VAR_8 = (VAR_7 & VAR_0) >> VAR_1;

 return VAR_8;
}
