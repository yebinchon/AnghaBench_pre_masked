
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_crtc {int dev; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_2__ {int enable; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rcar_du_crtc*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct rcar_du_crtc*) ;
 struct rcar_du_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_1,
          struct drm_crtc_state *VAR_2)
{
 struct rcar_du_crtc *VAR_3 = FUNC_4(VAR_1);

 FUNC_0(!VAR_1->state->enable);
 FUNC_1(VAR_3);

 if (FUNC_2(VAR_3->dev, VAR_0))
  FUNC_3(VAR_3);
}
