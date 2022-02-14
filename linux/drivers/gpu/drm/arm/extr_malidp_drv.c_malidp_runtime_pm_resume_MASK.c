
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malidp_hw_device {int pm_suspended; int mclk; int aclk; int pclk; } ;
struct malidp_drm {struct malidp_hw_device* dev; } ;
struct drm_device {struct malidp_drm* dev_private; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct drm_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct malidp_hw_device*) ;
 int FUNC_3 (struct malidp_hw_device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_1(VAR_0);
 struct malidp_drm *VAR_2 = VAR_1->dev_private;
 struct malidp_hw_device *VAR_3 = VAR_2->dev;

 FUNC_0(VAR_3->pclk);
 FUNC_0(VAR_3->aclk);
 FUNC_0(VAR_3->mclk);
 VAR_3->pm_suspended = 0;
 FUNC_2(VAR_3);
 FUNC_3(VAR_3);

 return 0;
}
