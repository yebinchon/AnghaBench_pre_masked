
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int osd1_enabled; int osd1_commit; int vd1_enabled; int vd1_commit; } ;
struct meson_drm {TYPE_1__ viu; } ;
struct meson_crtc {struct meson_drm* priv; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_3__* state; TYPE_2__* dev; } ;
struct TYPE_6__ {int * event; int active; } ;
struct TYPE_5__ {int event_lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct meson_crtc* FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct meson_crtc *VAR_2 = FUNC_5(VAR_0);
 struct meson_drm *VAR_3 = VAR_2->priv;

 FUNC_0("\n");

 FUNC_2(VAR_0);

 VAR_3->viu.osd1_enabled = 0;
 VAR_3->viu.osd1_commit = 0;

 VAR_3->viu.vd1_enabled = 0;
 VAR_3->viu.vd1_commit = 0;

 if (VAR_0->state->event && !VAR_0->state->active) {
  FUNC_3(&VAR_0->dev->event_lock);
  FUNC_1(VAR_0, VAR_0->state->event);
  FUNC_4(&VAR_0->dev->event_lock);

  VAR_0->state->event = ((void*)0);
 }
}
