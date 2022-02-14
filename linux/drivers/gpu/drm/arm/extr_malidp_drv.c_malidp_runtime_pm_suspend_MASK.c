
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct malidp_hw_device {int pm_suspended; int pclk; int aclk; int mclk; TYPE_1__* hw; } ;
struct malidp_drm {struct malidp_hw_device* dev; } ;
struct drm_device {struct malidp_drm* dev_private; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* in_config_mode ) (struct malidp_hw_device*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct drm_device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct malidp_hw_device*) ;
 int FUNC_4 (struct malidp_hw_device*) ;
 int FUNC_5 (struct malidp_hw_device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_2(VAR_0);
 struct malidp_drm *VAR_2 = VAR_1->dev_private;
 struct malidp_hw_device *VAR_3 = VAR_2->dev;


 FUNC_0(!VAR_3->hw->in_config_mode(VAR_3));

 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
 VAR_3->pm_suspended = 1;
 FUNC_1(VAR_3->mclk);
 FUNC_1(VAR_3->aclk);
 FUNC_1(VAR_3->pclk);

 return 0;
}
