
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_pending_vblank_event {int dummy; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct armada_crtc {struct drm_pending_vblank_event* event; } ;
struct TYPE_2__ {int event; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_crtc*) ;
 struct armada_crtc* FUNC_2 (struct drm_crtc*) ;
 struct drm_pending_vblank_event* FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_0)
{
 struct armada_crtc *VAR_1 = FUNC_2(VAR_0);
 struct drm_pending_vblank_event *VAR_2;


 VAR_2 = FUNC_3(&VAR_0->state->event, ((void*)0));
 if (VAR_2) {
  FUNC_0(FUNC_1(VAR_0) != 0);
  VAR_1->event = VAR_2;
 }
}
