
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu_submitqueue {size_t prio; } ;
struct msm_gpu {TYPE_1__** rb; } ;
struct msm_drm_private {struct msm_gpu* gpu; } ;
struct drm_msm_wait_fence {int fence; int queueid; scalar_t__ pad; int timeout; } ;
struct drm_file {int driver_priv; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
typedef int ktime_t ;
struct TYPE_2__ {int fctx; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct msm_gpu_submitqueue* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct msm_gpu_submitqueue*) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_2, void *VAR_3,
  struct drm_file *VAR_4)
{
 struct msm_drm_private *VAR_5 = VAR_2->dev_private;
 struct drm_msm_wait_fence *VAR_6 = VAR_3;
 ktime_t VAR_7 = FUNC_4(VAR_6->timeout);
 struct msm_gpu_submitqueue *VAR_8;
 struct msm_gpu *VAR_9 = VAR_5->gpu;
 int VAR_10;

 if (VAR_6->pad) {
  FUNC_0("invalid pad: %08x\n", VAR_6->pad);
  return -VAR_0;
 }

 if (!VAR_9)
  return 0;

 VAR_8 = FUNC_1(VAR_4->driver_priv, VAR_6->queueid);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_3(VAR_9->rb[VAR_8->prio]->fctx, VAR_6->fence, &VAR_7,
  1);

 FUNC_2(VAR_8);
 return VAR_10;
}
