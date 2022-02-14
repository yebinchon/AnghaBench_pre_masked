
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct drm_i915_private {TYPE_1__ fb_tracking; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_i915_private *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0);
 FUNC_2(VAR_0);

 FUNC_4(&VAR_0->fb_tracking.lock);

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  FUNC_0("Unable to create a private tmpfs mount, hugepage support will be disabled(%d).\n", VAR_1);

 return 0;
}
