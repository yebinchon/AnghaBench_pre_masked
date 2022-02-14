
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_gpu {int recover_work; int name; struct drm_device* dev; } ;
struct msm_drm_private {int wq; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
struct adreno_gpu {int dummy; } ;
struct a5xx_gpu {int * cur_ring; int * next_ring; int preempt_timer; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct msm_gpu*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct a5xx_gpu*,int ) ;
 struct a5xx_gpu* FUNC_5 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_6 (struct msm_gpu*) ;
 int FUNC_7 (struct a5xx_gpu*,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct msm_gpu*,int *) ;

void FUNC_10(struct msm_gpu *VAR_5)
{
 uint32_t VAR_6;
 struct adreno_gpu *VAR_7 = FUNC_6(VAR_5);
 struct a5xx_gpu *VAR_8 = FUNC_5(VAR_7);
 struct drm_device *VAR_9 = VAR_5->dev;
 struct msm_drm_private *VAR_10 = VAR_9->dev_private;

 if (!FUNC_7(VAR_8, VAR_3, VAR_2))
  return;


 FUNC_1(&VAR_8->preempt_timer);







 VAR_6 = FUNC_2(VAR_5, VAR_4);
 if (FUNC_8(VAR_6)) {
  FUNC_4(VAR_8, VAR_0);
  FUNC_0(VAR_9->dev, "%s: Preemption failed to complete\n",
   VAR_5->name);
  FUNC_3(VAR_10->wq, &VAR_5->recover_work);
  return;
 }

 VAR_8->cur_ring = VAR_8->next_ring;
 VAR_8->next_ring = ((void*)0);

 FUNC_9(VAR_5, VAR_8->cur_ring);

 FUNC_4(VAR_8, VAR_1);
}
