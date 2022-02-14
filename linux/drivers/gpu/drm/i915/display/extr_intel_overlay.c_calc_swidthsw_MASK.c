
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;

__attribute__((used)) static u32 FUNC_2(struct drm_i915_private *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 if (FUNC_1(VAR_0, 2))
  VAR_3 = FUNC_0((VAR_1 & 31) + VAR_2, 32);
 else
  VAR_3 = FUNC_0((VAR_1 & 63) + VAR_2, 64);

 if (VAR_3 == 0)
  return 0;

 return (VAR_3 - 32) >> 3;
}
