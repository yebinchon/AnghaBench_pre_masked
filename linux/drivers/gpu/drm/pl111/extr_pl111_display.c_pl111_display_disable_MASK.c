
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pl111_drm_dev_private {int clk; scalar_t__ ctrl; scalar_t__ regs; int (* variant_display_disable ) (struct drm_device*) ;TYPE_1__* variant; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_simple_display_pipe {struct drm_crtc crtc; } ;
struct drm_device {struct pl111_drm_dev_private* dev_private; } ;
struct TYPE_2__ {int broken_vblank; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int,scalar_t__) ;

void FUNC_6(struct drm_simple_display_pipe *VAR_1)
{
 struct drm_crtc *VAR_2 = &VAR_1->crtc;
 struct drm_device *VAR_3 = VAR_2->dev;
 struct pl111_drm_dev_private *VAR_4 = VAR_3->dev_private;
 u32 VAR_5;

 if (!VAR_4->variant->broken_vblank)
  FUNC_1(VAR_2);


 VAR_5 = FUNC_3(VAR_4->regs + VAR_4->ctrl);
 if (VAR_5 & VAR_0) {
  VAR_5 &= ~VAR_0;
  FUNC_5(VAR_5, VAR_4->regs + VAR_4->ctrl);
 }





 FUNC_2(20);

 if (VAR_4->variant_display_disable)
  VAR_4->variant_display_disable(VAR_3);


 FUNC_5(0, VAR_4->regs + VAR_4->ctrl);

 FUNC_0(VAR_4->clk);
}
