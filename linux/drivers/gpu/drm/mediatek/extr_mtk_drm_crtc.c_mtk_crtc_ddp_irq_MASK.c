
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_drm_private {TYPE_2__* data; } ;
struct mtk_drm_crtc {int dummy; } ;
struct mtk_ddp_comp {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_4__ {int shadow_register; } ;
struct TYPE_3__ {struct mtk_drm_private* dev_private; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct mtk_drm_crtc*) ;
 struct mtk_drm_crtc* FUNC_2 (struct drm_crtc*) ;

void FUNC_3(struct drm_crtc *VAR_0, struct mtk_ddp_comp *VAR_1)
{
 struct mtk_drm_crtc *VAR_2 = FUNC_2(VAR_0);
 struct mtk_drm_private *VAR_3 = VAR_0->dev->dev_private;

 if (!VAR_3->data->shadow_register)
  FUNC_0(VAR_0);

 FUNC_1(VAR_2);
}
