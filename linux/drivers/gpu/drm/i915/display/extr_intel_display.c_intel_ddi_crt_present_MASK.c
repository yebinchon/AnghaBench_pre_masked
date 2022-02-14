
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int_crt_support; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_6(struct drm_i915_private *VAR_4)
{
 if (FUNC_3(VAR_4) >= 9)
  return 0;

 if (FUNC_5(VAR_4) || FUNC_4(VAR_4))
  return 0;

 if (FUNC_1(VAR_4) &&
     FUNC_2(VAR_2) & VAR_3)
  return 0;


 if (FUNC_2(FUNC_0(VAR_1)) & VAR_0)
  return 0;

 if (!VAR_4->vbt.int_crt_support)
  return 0;

 return 1;
}
