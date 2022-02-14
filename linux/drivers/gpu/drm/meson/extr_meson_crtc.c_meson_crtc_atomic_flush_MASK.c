
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int osd1_commit; int vd1_commit; } ;
struct meson_drm {TYPE_1__ viu; } ;
struct meson_crtc {struct meson_drm* priv; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 struct meson_crtc* FUNC_0 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct meson_crtc *VAR_2 = FUNC_0(VAR_0);
 struct meson_drm *VAR_3 = VAR_2->priv;

 VAR_3->viu.osd1_commit = 1;
 VAR_3->viu.vd1_commit = 1;
}
