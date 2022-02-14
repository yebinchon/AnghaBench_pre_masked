
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {struct drm_atomic_state* modeset_restore_state; } ;
struct drm_device {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_atomic_state*) ;
 struct drm_atomic_state* FUNC_2 (struct drm_device*) ;
 struct drm_i915_private* FUNC_3 (struct drm_device*) ;

int FUNC_4(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_3(VAR_0);
 struct drm_atomic_state *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  FUNC_0("Suspending crtc's failed with %i\n", VAR_3);
 else
  VAR_1->modeset_restore_state = VAR_2;
 return VAR_3;
}
