
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_crtc {TYPE_1__* ops; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int (* te_handler ) (struct exynos_drm_crtc*) ;} ;


 int FUNC_0 (struct exynos_drm_crtc*) ;
 struct exynos_drm_crtc* FUNC_1 (struct drm_crtc*) ;

void FUNC_2(struct drm_crtc *VAR_0)
{
 struct exynos_drm_crtc *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->ops->te_handler)
  VAR_1->ops->te_handler(VAR_1);
}
