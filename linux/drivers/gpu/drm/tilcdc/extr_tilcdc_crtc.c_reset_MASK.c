
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_drm_private {int rev; } ;
struct drm_device {struct tilcdc_drm_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int ,int ) ;
 int FUNC_1 (struct drm_device*,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 struct tilcdc_drm_private *VAR_4 = VAR_3->dev_private;

 if (VAR_4->rev != 2)
  return;

 FUNC_1(VAR_3, VAR_1, VAR_0);
 FUNC_2(250, 1000);
 FUNC_0(VAR_3, VAR_1, VAR_0);
}
