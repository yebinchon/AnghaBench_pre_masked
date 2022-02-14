
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu {int retire_work; TYPE_1__* dev; } ;
struct msm_drm_private {int wq; } ;
struct TYPE_2__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct msm_gpu*) ;

void FUNC_2(struct msm_gpu *VAR_0)
{
 struct msm_drm_private *VAR_1 = VAR_0->dev->dev_private;
 FUNC_0(VAR_1->wq, &VAR_0->retire_work);
 FUNC_1(VAR_0);
}
