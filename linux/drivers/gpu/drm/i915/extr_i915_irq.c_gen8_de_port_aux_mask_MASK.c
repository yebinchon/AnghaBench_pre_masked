
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
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static u32 FUNC_3(struct drm_i915_private *VAR_9)
{
 u32 VAR_10;

 if (FUNC_0(VAR_9) >= 12)

  return VAR_6 |
   VAR_7 |
   VAR_8;

 VAR_10 = VAR_1;
 if (FUNC_0(VAR_9) >= 9)
  VAR_10 |= VAR_2 |
   VAR_3 |
   VAR_4;

 if (FUNC_1(VAR_9) || FUNC_2(VAR_9, 11))
  VAR_10 |= VAR_0;

 if (FUNC_2(VAR_9, 11))
  VAR_10 |= VAR_5;

 return VAR_10;
}
