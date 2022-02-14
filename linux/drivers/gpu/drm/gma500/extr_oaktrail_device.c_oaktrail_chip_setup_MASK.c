
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int has_gct; int regmap; } ;
struct drm_device {int dev; int pdev; struct drm_psb_private* dev_private; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_1)
{
 struct drm_psb_private *VAR_2 = VAR_1->dev_private;
 int VAR_3;

 if (FUNC_4(VAR_1->pdev))
  FUNC_0(VAR_1->dev, "Enabling MSI failed!\n");

 VAR_2->regmap = VAR_0;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;
 if (!VAR_2->has_gct) {

  FUNC_6(VAR_1);
  FUNC_5(VAR_1);
 }
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 return 0;
}
