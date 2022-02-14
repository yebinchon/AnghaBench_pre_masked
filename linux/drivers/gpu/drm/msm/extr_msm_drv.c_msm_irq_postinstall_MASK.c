
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_kms {TYPE_1__* funcs; } ;
struct msm_drm_private {struct msm_kms* kms; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct TYPE_2__ {int (* irq_postinstall ) (struct msm_kms*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct msm_kms*) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_0)
{
 struct msm_drm_private *VAR_1 = VAR_0->dev_private;
 struct msm_kms *VAR_2 = VAR_1->kms;
 FUNC_0(!VAR_2);

 if (VAR_2->funcs->irq_postinstall)
  return VAR_2->funcs->irq_postinstall(VAR_2);

 return 0;
}
