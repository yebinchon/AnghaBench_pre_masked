
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct msm_gpu_submitqueue {scalar_t__ id; int node; scalar_t__ prio; scalar_t__ flags; int ref; } ;
struct msm_file_private {int queuelock; int submitqueues; int queueid; } ;
struct msm_drm_private {TYPE_1__* gpu; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct TYPE_2__ {scalar_t__ nr_rings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct msm_gpu_submitqueue* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_device *VAR_4, struct msm_file_private *VAR_5,
  u32 VAR_6, u32 VAR_7, u32 *VAR_8)
{
 struct msm_drm_private *VAR_9 = VAR_4->dev_private;
 struct msm_gpu_submitqueue *VAR_10;

 if (!VAR_5)
  return -VAR_1;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_3);

 if (!VAR_10)
  return -VAR_2;

 FUNC_0(&VAR_10->ref);
 VAR_10->flags = VAR_7;

 if (VAR_9->gpu) {
  if (VAR_6 >= VAR_9->gpu->nr_rings)
   return -VAR_0;

  VAR_10->prio = VAR_6;
 }

 FUNC_3(&VAR_5->queuelock);

 VAR_10->id = VAR_5->queueid++;

 if (VAR_8)
  *VAR_8 = VAR_10->id;

 FUNC_2(&VAR_10->node, &VAR_5->submitqueues);

 FUNC_4(&VAR_5->queuelock);

 return 0;
}
