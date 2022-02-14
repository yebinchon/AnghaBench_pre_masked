
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu {TYPE_1__* funcs; struct drm_device* dev; } ;
struct drm_device {int dev; } ;
struct TYPE_2__ {int (* pm_resume ) (struct msm_gpu*) ;int (* pm_suspend ) (struct msm_gpu*) ;} ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct msm_gpu*) ;
 int FUNC_2 (struct msm_gpu*) ;
 int FUNC_3 (struct msm_gpu*) ;

void FUNC_4(struct msm_gpu *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 int VAR_2;




 VAR_0->funcs->pm_suspend(VAR_0);
 VAR_0->funcs->pm_resume(VAR_0);

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "gpu hw init failed: %d\n", VAR_2);

 }
}
