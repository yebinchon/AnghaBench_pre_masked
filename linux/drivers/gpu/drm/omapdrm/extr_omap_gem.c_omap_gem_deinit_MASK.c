
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_drm_private {int usergart; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct drm_device *VAR_0)
{
 struct omap_drm_private *VAR_1 = VAR_0->dev_private;




 FUNC_0(VAR_1->usergart);
}
