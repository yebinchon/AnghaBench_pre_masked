
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int osd1_enabled; int osd1_commit; int vd1_enabled; int vd1_commit; } ;
struct meson_drm {scalar_t__ io_base; TYPE_1__ viu; } ;
struct meson_crtc {struct meson_drm* priv; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_3__* state; TYPE_2__* dev; } ;
struct TYPE_6__ {int * event; int active; } ;
struct TYPE_5__ {int event_lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct drm_crtc*,int *) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct meson_crtc* FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (int,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct drm_crtc *VAR_5,
          struct drm_crtc_state *VAR_6)
{
 struct meson_crtc *VAR_7 = FUNC_6(VAR_5);
 struct meson_drm *VAR_8 = VAR_7->priv;

 FUNC_0("\n");

 FUNC_3(VAR_5);

 VAR_8->viu.osd1_enabled = 0;
 VAR_8->viu.osd1_commit = 0;

 VAR_8->viu.vd1_enabled = 0;
 VAR_8->viu.vd1_commit = 0;


 FUNC_7(VAR_1 | VAR_3 |
       VAR_4 | VAR_2, 0,
       VAR_8->io_base + FUNC_1(VAR_0));

 if (VAR_5->state->event && !VAR_5->state->active) {
  FUNC_4(&VAR_5->dev->event_lock);
  FUNC_2(VAR_5, VAR_5->state->event);
  FUNC_5(&VAR_5->dev->event_lock);

  VAR_5->state->event = ((void*)0);
 }
}
