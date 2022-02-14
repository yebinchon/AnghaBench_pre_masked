
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_file_private {int queuelock; int submitqueues; } ;
struct msm_drm_private {TYPE_1__* gpu; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct TYPE_2__ {scalar_t__ nr_rings; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int ,scalar_t__) ;
 int FUNC_2 (struct drm_device*,struct msm_file_private*,int,int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

int FUNC_4(struct drm_device *VAR_1, struct msm_file_private *VAR_2)
{
 struct msm_drm_private *VAR_3 = VAR_1->dev_private;
 int VAR_4;

 if (!VAR_2)
  return 0;





 VAR_4 = VAR_3->gpu ?
  FUNC_1(VAR_0, 2, 0, VAR_3->gpu->nr_rings - 1) : 0;

 FUNC_0(&VAR_2->submitqueues);

 FUNC_3(&VAR_2->queuelock);

 return FUNC_2(VAR_1, VAR_2, VAR_4, 0, ((void*)0));
}
