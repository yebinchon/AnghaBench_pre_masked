
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_fbdev {int dummy; } ;
struct drm_i915_private {int fbdev; } ;


 struct intel_fbdev* FUNC_0 (int *) ;
 int FUNC_1 (struct intel_fbdev*) ;

void FUNC_2(struct drm_i915_private *VAR_0)
{
 struct intel_fbdev *VAR_1 = FUNC_0(&VAR_0->fbdev);

 if (!VAR_1)
  return;

 FUNC_1(VAR_1);
}
