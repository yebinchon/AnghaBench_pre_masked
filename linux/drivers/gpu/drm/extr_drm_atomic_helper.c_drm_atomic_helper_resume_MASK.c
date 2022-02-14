
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (struct drm_device*,struct drm_modeset_acquire_ctx,int ,int) ;
 int FUNC_1 (struct drm_modeset_acquire_ctx,int) ;
 int FUNC_2 (struct drm_atomic_state*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_3 (struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_device*) ;

int FUNC_5(struct drm_device *VAR_0,
        struct drm_atomic_state *VAR_1)
{
 struct drm_modeset_acquire_ctx VAR_2;
 int VAR_3;

 FUNC_4(VAR_0);

 FUNC_0(VAR_0, VAR_2, 0, VAR_3);

 VAR_3 = FUNC_2(VAR_1, &VAR_2);

 FUNC_1(VAR_2, VAR_3);
 FUNC_3(VAR_1);

 return VAR_3;
}
