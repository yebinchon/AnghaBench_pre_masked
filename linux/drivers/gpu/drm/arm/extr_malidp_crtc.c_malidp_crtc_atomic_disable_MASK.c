
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct malidp_hw_device {int pxlclk; TYPE_1__* hw; } ;
struct malidp_drm {struct malidp_hw_device* dev; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_2__* dev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* enter_config_mode ) (struct malidp_hw_device*) ;} ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 struct malidp_drm* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc_state*,int) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct malidp_hw_device*) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_0,
           struct drm_crtc_state *VAR_1)
{
 struct malidp_drm *VAR_2 = FUNC_2(VAR_0);
 struct malidp_hw_device *VAR_3 = VAR_2->dev;
 int VAR_4;


 FUNC_3(VAR_1, 0);

 FUNC_4(VAR_0);
 VAR_3->hw->enter_config_mode(VAR_3);

 FUNC_1(VAR_3->pxlclk);

 VAR_4 = FUNC_5(VAR_0->dev->dev);
 if (VAR_4 < 0) {
  FUNC_0("Failed to disable runtime power management: %d\n", VAR_4);
 }
}
