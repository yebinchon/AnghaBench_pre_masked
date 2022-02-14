
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_drm_private {int crtc; } ;
struct drm_device {struct tilcdc_drm_private* dev_private; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_0, void *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1;
 struct tilcdc_drm_private *VAR_3 = VAR_2->dev_private;
 return FUNC_0(VAR_3->crtc);
}
