
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_ringbuffer {int id; int seqno; } ;
struct msm_gpu {int recover_work; int hangcheck_timer; TYPE_1__* funcs; struct drm_device* dev; } ;
struct msm_drm_private {int wq; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
struct TYPE_2__ {struct msm_ringbuffer* (* active_ring ) (struct msm_gpu*) ;} ;


 int FUNC_0 (int ,char*,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct msm_gpu*,int ) ;
 int FUNC_3 (struct msm_gpu*,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 struct msm_ringbuffer* FUNC_5 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_6(struct msm_gpu *VAR_9)
{
 struct drm_device *VAR_10 = VAR_9->dev;
 struct msm_drm_private *VAR_11 = VAR_10->dev_private;
 struct msm_ringbuffer *VAR_12 = VAR_9->funcs->active_ring(VAR_9);

 FUNC_0(VAR_10->dev, "gpu fault ring %d fence %x status %8.8X rb %4.4x/%4.4x ib1 %16.16llX/%4.4x ib2 %16.16llX/%4.4x\n",
  VAR_12 ? VAR_12->id : -1, VAR_12 ? VAR_12->seqno : 0,
  FUNC_2(VAR_9, VAR_8),
  FUNC_2(VAR_9, VAR_6),
  FUNC_2(VAR_9, VAR_7),
  FUNC_3(VAR_9, VAR_0, VAR_1),
  FUNC_2(VAR_9, VAR_2),
  FUNC_3(VAR_9, VAR_3, VAR_4),
  FUNC_2(VAR_9, VAR_5));


 FUNC_1(&VAR_9->hangcheck_timer);

 FUNC_4(VAR_11->wq, &VAR_9->recover_work);
}
