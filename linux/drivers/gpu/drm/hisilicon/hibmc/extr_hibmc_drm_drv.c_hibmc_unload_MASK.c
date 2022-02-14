
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hibmc_drm_private {scalar_t__ msi_enabled; } ;
struct drm_device {struct hibmc_drm_private* dev_private; int pdev; scalar_t__ irq_enabled; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct hibmc_drm_private*) ;
 int FUNC_3 (struct hibmc_drm_private*) ;
 int FUNC_4 (struct hibmc_drm_private*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_0)
{
 struct hibmc_drm_private *VAR_1 = VAR_0->dev_private;

 FUNC_2(VAR_1);

 FUNC_0(VAR_0);

 if (VAR_0->irq_enabled)
  FUNC_1(VAR_0);
 if (VAR_1->msi_enabled)
  FUNC_5(VAR_0->pdev);

 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 VAR_0->dev_private = ((void*)0);
 return 0;
}
