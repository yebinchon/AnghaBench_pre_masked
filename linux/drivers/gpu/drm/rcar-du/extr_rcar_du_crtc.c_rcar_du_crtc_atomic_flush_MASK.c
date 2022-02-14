
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct drm_device* dev; } ;
struct rcar_du_crtc {int dev; int * event; TYPE_2__ crtc; } ;
struct drm_device {int event_lock; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_3__ {int * event; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct rcar_du_crtc*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rcar_du_crtc*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct rcar_du_crtc* FUNC_7 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_8(struct drm_crtc *VAR_1,
          struct drm_crtc_state *VAR_2)
{
 struct rcar_du_crtc *VAR_3 = FUNC_7(VAR_1);
 struct drm_device *VAR_4 = VAR_3->crtc.dev;
 unsigned long VAR_5;

 FUNC_2(VAR_3);

 if (VAR_1->state->event) {
  FUNC_0(FUNC_1(VAR_1) != 0);

  FUNC_5(&VAR_4->event_lock, VAR_5);
  VAR_3->event = VAR_1->state->event;
  VAR_1->state->event = ((void*)0);
  FUNC_6(&VAR_4->event_lock, VAR_5);
 }

 if (FUNC_3(VAR_3->dev, VAR_0))
  FUNC_4(VAR_3);
}
