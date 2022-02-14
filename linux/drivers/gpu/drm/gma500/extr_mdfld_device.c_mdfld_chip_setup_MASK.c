
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int regmap; } ;
struct drm_device {int dev; int pdev; struct drm_psb_private* dev_private; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_1)
{
 struct drm_psb_private *VAR_2 = VAR_1->dev_private;
 if (FUNC_2(VAR_1->pdev))
  FUNC_0(VAR_1->dev, "Enabling MSI failed!\n");
 VAR_2->regmap = VAR_0;
 return FUNC_1(VAR_1);
}
