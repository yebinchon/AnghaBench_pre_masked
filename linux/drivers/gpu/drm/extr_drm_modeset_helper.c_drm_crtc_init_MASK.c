
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc_funcs {int dummy; } ;
struct drm_crtc {int dummy; } ;


 struct drm_plane* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*,struct drm_crtc*,struct drm_plane*,int *,struct drm_crtc_funcs const*,int *) ;

int FUNC_2(struct drm_device *VAR_0, struct drm_crtc *VAR_1,
    const struct drm_crtc_funcs *VAR_2)
{
 struct drm_plane *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 return FUNC_1(VAR_0, VAR_1, VAR_3, ((void*)0), VAR_2,
      ((void*)0));
}
