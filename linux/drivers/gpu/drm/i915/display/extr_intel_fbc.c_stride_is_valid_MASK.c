
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_0,
       unsigned int VAR_1)
{

 if (FUNC_2((VAR_1 & (64 - 1)) != 0))
  return 0;


 if (VAR_1 < 512)
  return 0;

 if (FUNC_1(VAR_0, 2) || FUNC_1(VAR_0, 3))
  return VAR_1 == 4096 || VAR_1 == 8192;

 if (FUNC_1(VAR_0, 4) && !FUNC_0(VAR_0) && VAR_1 < 2048)
  return 0;

 if (VAR_1 > 16384)
  return 0;

 return 1;
}
