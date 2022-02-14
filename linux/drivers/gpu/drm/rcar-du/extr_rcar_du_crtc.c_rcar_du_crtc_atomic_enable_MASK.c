
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bridge; } ;
struct rcar_du_encoder {TYPE_2__ base; } ;
struct rcar_du_device {struct rcar_du_encoder** encoders; TYPE_1__* info; } ;
struct rcar_du_crtc_state {int outputs; } ;
struct rcar_du_crtc {size_t index; struct rcar_du_device* dev; } ;
struct drm_display_mode {int clock; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_3__* state; } ;
struct TYPE_6__ {struct drm_display_mode adjusted_mode; } ;
struct TYPE_4__ {int lvds_clk_mask; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct rcar_du_crtc*) ;
 int FUNC_2 (struct rcar_du_crtc*) ;
 int FUNC_3 (int ,int) ;
 struct rcar_du_crtc* FUNC_4 (struct drm_crtc*) ;
 struct rcar_du_crtc_state* FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_2,
           struct drm_crtc_state *VAR_3)
{
 struct rcar_du_crtc *VAR_4 = FUNC_4(VAR_2);
 struct rcar_du_crtc_state *VAR_5 = FUNC_5(VAR_2->state);
 struct rcar_du_device *VAR_6 = VAR_4->dev;

 FUNC_1(VAR_4);






 if (VAR_6->info->lvds_clk_mask & FUNC_0(VAR_4->index) &&
     VAR_5->outputs == FUNC_0(VAR_0)) {
  struct rcar_du_encoder *VAR_7 =
   VAR_6->encoders[VAR_1 + VAR_4->index];
  const struct drm_display_mode *VAR_8 =
   &VAR_2->state->adjusted_mode;

  FUNC_3(VAR_7->base.bridge,
         VAR_8->clock * 1000);
 }

 FUNC_2(VAR_4);
}
