
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct msm_gpu {int recover_work; int name; struct drm_device* dev; } ;
struct msm_drm_private {int wq; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
struct TYPE_2__ {struct msm_gpu base; } ;
struct a5xx_gpu {TYPE_1__ base; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct a5xx_gpu* VAR_2 ;
 struct a5xx_gpu* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct a5xx_gpu*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct a5xx_gpu *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 struct msm_gpu *VAR_6 = &VAR_5->base.base;
 struct drm_device *VAR_7 = VAR_6->dev;
 struct msm_drm_private *VAR_8 = VAR_7->dev_private;

 if (!FUNC_3(VAR_5, VAR_1, VAR_0))
  return;

 FUNC_0(VAR_7->dev, "%s: preemption timed out\n", VAR_6->name);
 FUNC_2(VAR_8->wq, &VAR_6->recover_work);
}
