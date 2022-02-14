
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_device*,struct drm_modeset_acquire_ctx,int ,int) ;
 int FUNC_2 (struct drm_modeset_acquire_ctx,int) ;
 int FUNC_3 (struct drm_device*,struct drm_modeset_acquire_ctx*) ;

void FUNC_4(struct drm_device *VAR_0)
{
 struct drm_modeset_acquire_ctx VAR_1;
 int VAR_2;

 FUNC_1(VAR_0, VAR_1, 0, VAR_2);

 VAR_2 = FUNC_3(VAR_0, &VAR_1);
 if (VAR_2)
  FUNC_0("Disabling all crtc's during unload failed with %i\n", VAR_2);

 FUNC_2(VAR_1, VAR_2);
}
