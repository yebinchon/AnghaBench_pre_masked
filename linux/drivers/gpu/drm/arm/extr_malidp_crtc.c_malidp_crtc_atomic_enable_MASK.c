
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct videomode {int dummy; } ;
struct malidp_hw_device {TYPE_3__* hw; int pxlclk; } ;
struct malidp_drm {struct malidp_hw_device* dev; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_2__* state; TYPE_1__* dev; } ;
struct TYPE_8__ {int crtc_clock; } ;
struct TYPE_7__ {int (* leave_config_mode ) (struct malidp_hw_device*) ;int (* modeset ) (struct malidp_hw_device*,struct videomode*) ;} ;
struct TYPE_6__ {TYPE_4__ adjusted_mode; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct malidp_drm* FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (TYPE_4__*,struct videomode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct malidp_hw_device*,struct videomode*) ;
 int FUNC_8 (struct malidp_hw_device*) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_0,
          struct drm_crtc_state *VAR_1)
{
 struct malidp_drm *VAR_2 = FUNC_3(VAR_0);
 struct malidp_hw_device *VAR_3 = VAR_2->dev;
 struct videomode VAR_4;
 int VAR_5 = FUNC_6(VAR_0->dev->dev);

 if (VAR_5 < 0) {
  FUNC_0("Failed to enable runtime power management: %d\n", VAR_5);
  return;
 }

 FUNC_5(&VAR_0->state->adjusted_mode, &VAR_4);
 FUNC_1(VAR_3->pxlclk);


 FUNC_2(VAR_3->pxlclk, VAR_0->state->adjusted_mode.crtc_clock * 1000);

 VAR_3->hw->modeset(VAR_3, &VAR_4);
 VAR_3->hw->leave_config_mode(VAR_3);
 FUNC_4(VAR_0);
}
