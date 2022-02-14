
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {scalar_t__ enable_fbc; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_4(struct drm_i915_private *VAR_1)
{
 if (VAR_0.enable_fbc >= 0)
  return !!VAR_0.enable_fbc;

 if (!FUNC_0(VAR_1))
  return 0;


 if (FUNC_3(VAR_1))
  return 0;

 if (FUNC_2(VAR_1) || FUNC_1(VAR_1) >= 9)
  return 1;

 return 0;
}
