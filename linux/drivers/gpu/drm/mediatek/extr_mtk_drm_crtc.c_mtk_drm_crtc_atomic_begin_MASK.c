
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_drm_crtc {TYPE_1__* event; } ;
struct TYPE_4__ {TYPE_1__* event; } ;
struct mtk_crtc_state {TYPE_2__ base; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int state; } ;
struct TYPE_3__ {int pipe; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_crtc*) ;
 scalar_t__ FUNC_3 (struct drm_crtc*) ;
 struct mtk_drm_crtc* FUNC_4 (struct drm_crtc*) ;
 struct mtk_crtc_state* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_0,
          struct drm_crtc_state *VAR_1)
{
 struct mtk_crtc_state *VAR_2 = FUNC_5(VAR_0->state);
 struct mtk_drm_crtc *VAR_3 = FUNC_4(VAR_0);

 if (VAR_3->event && VAR_2->base.event)
  FUNC_0("new event while there is still a pending event\n");

 if (VAR_2->base.event) {
  VAR_2->base.event->pipe = FUNC_2(VAR_0);
  FUNC_1(FUNC_3(VAR_0) != 0);
  VAR_3->event = VAR_2->base.event;
  VAR_2->base.event = ((void*)0);
 }
}
