
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_kms {TYPE_1__* funcs; } ;
struct msm_drm_private {struct msm_kms* kms; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* irq ) (struct msm_kms*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct msm_kms*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_0, void *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1;
 struct msm_drm_private *VAR_3 = VAR_2->dev_private;
 struct msm_kms *VAR_4 = VAR_3->kms;
 FUNC_0(!VAR_4);
 return VAR_4->funcs->irq(VAR_4);
}
