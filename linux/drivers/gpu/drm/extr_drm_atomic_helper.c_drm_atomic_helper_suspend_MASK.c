
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (struct drm_device*,struct drm_modeset_acquire_ctx,int ,int) ;
 int FUNC_1 (struct drm_modeset_acquire_ctx,int) ;
 int VAR_0 ;
 struct drm_atomic_state* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_device*,struct drm_modeset_acquire_ctx*) ;
 struct drm_atomic_state* FUNC_5 (struct drm_device*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_6 (struct drm_atomic_state*) ;

struct drm_atomic_state *FUNC_7(struct drm_device *VAR_1)
{
 struct drm_modeset_acquire_ctx VAR_2;
 struct drm_atomic_state *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_2(-VAR_0);

 FUNC_0(VAR_1, VAR_2, 0, VAR_4);

 VAR_3 = FUNC_5(VAR_1, &VAR_2);
 if (FUNC_3(VAR_3))
  goto unlock;

 VAR_4 = FUNC_4(VAR_1, &VAR_2);
 if (VAR_4 < 0) {
  FUNC_6(VAR_3);
  VAR_3 = FUNC_2(VAR_4);
  goto unlock;
 }

unlock:
 FUNC_1(VAR_2, VAR_4);
 if (VAR_4)
  return FUNC_2(VAR_4);

 return VAR_3;
}
