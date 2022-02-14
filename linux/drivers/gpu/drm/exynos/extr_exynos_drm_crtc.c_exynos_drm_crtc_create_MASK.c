
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_crtc_ops {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct exynos_drm_crtc {int type; struct drm_crtc base; void* ctx; struct exynos_drm_crtc_ops const* ops; } ;
struct drm_plane {TYPE_1__* funcs; } ;
struct drm_device {int dummy; } ;
typedef enum exynos_drm_output_type { ____Placeholder_exynos_drm_output_type } exynos_drm_output_type ;
struct TYPE_2__ {int (* destroy ) (struct drm_plane*) ;} ;


 int VAR_0 ;
 struct exynos_drm_crtc* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_crtc*,struct drm_plane*,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct exynos_drm_crtc*) ;
 struct exynos_drm_crtc* FUNC_4 (int,int ) ;
 int FUNC_5 (struct drm_plane*) ;

struct exynos_drm_crtc *FUNC_6(struct drm_device *VAR_4,
     struct drm_plane *VAR_5,
     enum exynos_drm_output_type VAR_6,
     const struct exynos_drm_crtc_ops *VAR_7,
     void *VAR_8)
{
 struct exynos_drm_crtc *VAR_9;
 struct drm_crtc *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->type = VAR_6;
 VAR_9->ops = VAR_7;
 VAR_9->ctx = VAR_8;

 VAR_10 = &VAR_9->base;

 VAR_11 = FUNC_2(VAR_4, VAR_10, VAR_5, ((void*)0),
     &VAR_2, ((void*)0));
 if (VAR_11 < 0)
  goto err_crtc;

 FUNC_1(VAR_10, &VAR_3);

 return VAR_9;

err_crtc:
 VAR_5->funcs->destroy(VAR_5);
 FUNC_3(VAR_9);
 return FUNC_0(VAR_11);
}
