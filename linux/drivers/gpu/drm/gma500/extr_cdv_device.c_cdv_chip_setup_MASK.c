
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int regmap; int hotplug_work; } ;
struct drm_device {int dev; int pdev; struct drm_psb_private* dev_private; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct drm_device*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_2->dev_private;
 FUNC_0(&VAR_3->hotplug_work, VAR_0);

 if (FUNC_4(VAR_2->pdev))
  FUNC_2(VAR_2->dev, "Enabling MSI failed!\n");
 VAR_3->regmap = VAR_1;
 FUNC_3(VAR_2);
 FUNC_6(VAR_2);
 FUNC_5(VAR_2);
 FUNC_1(VAR_2, 0);
 return 0;
}
