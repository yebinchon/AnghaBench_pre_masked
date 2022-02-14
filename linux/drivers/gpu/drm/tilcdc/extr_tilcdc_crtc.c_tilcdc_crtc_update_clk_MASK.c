
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_drm_private {int clk; } ;
struct tilcdc_crtc {scalar_t__ lcd_fck_rate; } ;
struct drm_device {int dev; struct tilcdc_drm_private* dev_private; } ;
struct drm_crtc {int mutex; struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (struct drm_crtc*) ;
 scalar_t__ FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (struct drm_crtc*) ;
 struct tilcdc_crtc* FUNC_9 (struct drm_crtc*) ;

void FUNC_10(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct tilcdc_drm_private *VAR_2 = VAR_1->dev_private;
 struct tilcdc_crtc *VAR_3 = FUNC_9(VAR_0);

 FUNC_1(&VAR_0->mutex, ((void*)0));
 if (VAR_3->lcd_fck_rate != FUNC_0(VAR_2->clk)) {
  if (FUNC_7(VAR_0)) {
   FUNC_3(VAR_1->dev);
   FUNC_5(VAR_0);

   FUNC_8(VAR_0);

   FUNC_6(VAR_0);
   FUNC_4(VAR_1->dev);
  }
 }
 FUNC_2(&VAR_0->mutex);
}
