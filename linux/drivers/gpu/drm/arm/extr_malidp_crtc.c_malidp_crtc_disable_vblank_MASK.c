
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct malidp_hw_device {TYPE_3__* hw; } ;
struct malidp_drm {struct malidp_hw_device* dev; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_4__ {int vsync_irq; } ;
struct TYPE_5__ {TYPE_1__ de_irq_map; } ;
struct TYPE_6__ {TYPE_2__ map; } ;


 int VAR_0 ;
 struct malidp_drm* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct malidp_hw_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_1)
{
 struct malidp_drm *VAR_2 = FUNC_0(VAR_1);
 struct malidp_hw_device *VAR_3 = VAR_2->dev;

 FUNC_1(VAR_3, VAR_0,
         VAR_3->hw->map.de_irq_map.vsync_irq);
}
