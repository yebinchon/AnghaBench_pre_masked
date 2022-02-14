
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl111_drm_dev_private {int bridge; scalar_t__ panel; } ;
struct drm_device {struct pl111_drm_dev_private* dev_private; } ;
struct device {int dummy; } ;
struct amba_device {struct device dev; } ;


 struct drm_device* FUNC_0 (struct amba_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct amba_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct drm_device *VAR_2 = FUNC_0(VAR_0);
 struct pl111_drm_dev_private *VAR_3 = VAR_2->dev_private;

 FUNC_2(VAR_2);
 if (VAR_3->panel)
  FUNC_4(VAR_3->bridge);
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
 FUNC_5(VAR_1);

 return 0;
}
