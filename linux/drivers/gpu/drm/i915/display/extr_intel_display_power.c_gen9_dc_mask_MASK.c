
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;

__attribute__((used)) static u32 FUNC_2(struct drm_i915_private *VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_1;
 if (FUNC_0(VAR_3) >= 11)
  VAR_4 |= VAR_2 | VAR_0;
 else if (FUNC_1(VAR_3))
  VAR_4 |= VAR_0;
 else
  VAR_4 |= VAR_2;

 return VAR_4;
}
