
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int awake; } ;
struct drm_i915_private {int drm; TYPE_1__ gt; } ;


 int FUNC_0 (int *) ;
 struct drm_i915_private* FUNC_1 () ;

bool FUNC_2(void)
{
 struct drm_i915_private *VAR_0;
 bool VAR_1;

 VAR_0 = FUNC_1();
 if (!VAR_0)
  return 0;

 VAR_1 = VAR_0->gt.awake;

 FUNC_0(&VAR_0->drm);
 return VAR_1;
}
