
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {int dummy; } ;
struct meson_crtc {struct meson_drm* priv; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct meson_drm*) ;
 struct meson_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_0)
{
 struct meson_crtc *VAR_1 = FUNC_1(VAR_0);
 struct meson_drm *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_2);

 return 0;
}
