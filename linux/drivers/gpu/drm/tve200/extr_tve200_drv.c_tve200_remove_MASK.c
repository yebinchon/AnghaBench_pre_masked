
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tve200_drm_dev_private {int pclk; int bridge; scalar_t__ panel; } ;
struct platform_device {int dummy; } ;
struct drm_device {struct tve200_drm_dev_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ) ;
 struct drm_device* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_5(VAR_0);
 struct tve200_drm_dev_private *VAR_2 = VAR_1->dev_private;

 FUNC_2(VAR_1);
 if (VAR_2->panel)
  FUNC_4(VAR_2->bridge);
 FUNC_3(VAR_1);
 FUNC_0(VAR_2->pclk);
 FUNC_1(VAR_1);

 return 0;
}
