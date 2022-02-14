
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bridge; } ;
struct rcar_du_encoder {TYPE_2__ base; } ;
struct rcar_du_device {struct rcar_du_encoder** encoders; TYPE_1__* info; } ;
struct rcar_du_crtc_state {int outputs; } ;
struct rcar_du_crtc {size_t index; struct rcar_du_device* dev; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_4__* dev; TYPE_3__* state; } ;
struct TYPE_8__ {int event_lock; } ;
struct TYPE_7__ {int * event; } ;
struct TYPE_5__ {int lvds_clk_mask; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 int FUNC_2 (struct rcar_du_crtc*) ;
 int FUNC_3 (struct rcar_du_crtc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct rcar_du_crtc* FUNC_7 (struct drm_crtc*) ;
 struct rcar_du_crtc_state* FUNC_8 (struct drm_crtc_state*) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_2,
     struct drm_crtc_state *VAR_3)
{
 struct rcar_du_crtc *VAR_4 = FUNC_7(VAR_2);
 struct rcar_du_crtc_state *VAR_5 = FUNC_8(VAR_3);
 struct rcar_du_device *VAR_6 = VAR_4->dev;

 FUNC_3(VAR_4);
 FUNC_2(VAR_4);

 if (VAR_6->info->lvds_clk_mask & FUNC_0(VAR_4->index) &&
     VAR_5->outputs == FUNC_0(VAR_0)) {
  struct rcar_du_encoder *VAR_7 =
   VAR_6->encoders[VAR_1 + VAR_4->index];





  FUNC_4(VAR_7->base.bridge);
 }

 FUNC_5(&VAR_2->dev->event_lock);
 if (VAR_2->state->event) {
  FUNC_1(VAR_2, VAR_2->state->event);
  VAR_2->state->event = ((void*)0);
 }
 FUNC_6(&VAR_2->dev->event_lock);
}
