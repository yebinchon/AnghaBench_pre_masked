
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct msm_gpu {int needs_hw_init; TYPE_2__* pdev; TYPE_1__* funcs; int aspace; } ;
struct msm_drm_private {struct msm_gpu* gpu; } ;
struct drm_device {int struct_mutex; struct msm_drm_private* dev_private; } ;
struct adreno_gpu {int ** fw; } ;
struct a5xx_gpu {int * pfp_bo; int * pm4_bo; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* recover ) (struct msm_gpu*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct msm_gpu*) ;
 struct a5xx_gpu* FUNC_9 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_10 (struct msm_gpu*) ;

__attribute__((used)) static int
FUNC_11(void *VAR_4, u64 VAR_5)
{
 struct drm_device *VAR_6 = VAR_4;
 struct msm_drm_private *VAR_7 = VAR_6->dev_private;
 struct msm_gpu *VAR_8 = VAR_7->gpu;
 struct adreno_gpu *VAR_9 = FUNC_10(VAR_8);
 struct a5xx_gpu *VAR_10 = FUNC_9(VAR_9);

 if (!FUNC_0(VAR_2))
  return -VAR_3;







 FUNC_3(&VAR_6->struct_mutex);

 FUNC_7(VAR_9->fw[VAR_1]);
 VAR_9->fw[VAR_1] = ((void*)0);

 FUNC_7(VAR_9->fw[VAR_0]);
 VAR_9->fw[VAR_0] = ((void*)0);

 if (VAR_10->pm4_bo) {
  FUNC_2(VAR_10->pm4_bo, VAR_8->aspace);
  FUNC_1(VAR_10->pm4_bo);
  VAR_10->pm4_bo = ((void*)0);
 }

 if (VAR_10->pfp_bo) {
  FUNC_2(VAR_10->pfp_bo, VAR_8->aspace);
  FUNC_1(VAR_10->pfp_bo);
  VAR_10->pfp_bo = ((void*)0);
 }

 VAR_8->needs_hw_init = 1;

 FUNC_5(&VAR_8->pdev->dev);
 VAR_8->funcs->recover(VAR_8);

 FUNC_6(&VAR_8->pdev->dev);
 FUNC_4(&VAR_6->struct_mutex);

 return 0;
}
