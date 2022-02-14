
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_ringbuffer {int id; int seqno; } ;
struct msm_gpu {int recover_work; int hangcheck_timer; TYPE_2__* pdev; TYPE_1__* funcs; struct drm_device* dev; } ;
struct msm_drm_private {int wq; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_gpu {int gmu; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct msm_ringbuffer* (* active_ring ) (struct msm_gpu*) ;} ;


 int FUNC_0 (int *,char*,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct msm_gpu*,int ) ;
 int FUNC_4 (struct msm_gpu*,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 struct msm_ringbuffer* FUNC_6 (struct msm_gpu*) ;
 struct a6xx_gpu* FUNC_7 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_8 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_9(struct msm_gpu *VAR_10)
{
 struct adreno_gpu *VAR_11 = FUNC_8(VAR_10);
 struct a6xx_gpu *VAR_12 = FUNC_7(VAR_11);
 struct drm_device *VAR_13 = VAR_10->dev;
 struct msm_drm_private *VAR_14 = VAR_13->dev_private;
 struct msm_ringbuffer *VAR_15 = VAR_10->funcs->active_ring(VAR_10);





 FUNC_2(&VAR_12->gmu, VAR_8, 1);

 FUNC_0(&VAR_10->pdev->dev,
  "gpu fault ring %d fence %x status %8.8X rb %4.4x/%4.4x ib1 %16.16llX/%4.4x ib2 %16.16llX/%4.4x\n",
  VAR_15 ? VAR_15->id : -1, VAR_15 ? VAR_15->seqno : 0,
  FUNC_3(VAR_10, VAR_9),
  FUNC_3(VAR_10, VAR_6),
  FUNC_3(VAR_10, VAR_7),
  FUNC_4(VAR_10, VAR_0, VAR_1),
  FUNC_3(VAR_10, VAR_2),
  FUNC_4(VAR_10, VAR_3, VAR_4),
  FUNC_3(VAR_10, VAR_5));


 FUNC_1(&VAR_10->hangcheck_timer);

 FUNC_5(VAR_14->wq, &VAR_10->recover_work);
}
