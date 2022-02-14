
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;

__attribute__((used)) static bool FUNC_1(struct drm_i915_private *VAR_0, u32 VAR_1)
{





 if (FUNC_0(VAR_0) >= 8 && (VAR_1 >= 0xb100 && VAR_1 <= 0xb3ff))
  return 1;

 return 0;
}
