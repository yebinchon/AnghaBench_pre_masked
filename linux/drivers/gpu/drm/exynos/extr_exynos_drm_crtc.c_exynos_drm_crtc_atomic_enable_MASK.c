
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_crtc {TYPE_1__* ops; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int (* enable ) (struct exynos_drm_crtc*) ;} ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct exynos_drm_crtc*) ;
 struct exynos_drm_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_0,
       struct drm_crtc_state *VAR_1)
{
 struct exynos_drm_crtc *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2->ops->enable)
  VAR_2->ops->enable(VAR_2);

 FUNC_0(VAR_0);
}
