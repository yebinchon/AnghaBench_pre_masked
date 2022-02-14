
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_crtc {int pending; int * event; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_2__ {int * event; } ;


 int FUNC_0 (int) ;
 struct omap_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_0)
{
 struct omap_crtc *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pending);
 VAR_1->pending = 1;

 if (VAR_0->state->event) {
  VAR_1->event = VAR_0->state->event;
  VAR_0->state->event = ((void*)0);
 }
}
