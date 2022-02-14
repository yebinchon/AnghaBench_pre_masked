
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct msm_gpu {TYPE_1__* funcs; } ;
struct msm_drm_private {struct platform_device* gpu_pdev; } ;
struct drm_device {int render; int primary; int dev; int struct_mutex; struct msm_drm_private* dev_private; } ;
struct adreno_gpu {int dummy; } ;
struct TYPE_2__ {int (* debugfs_init ) (struct msm_gpu*,int ) ;} ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct adreno_gpu*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct msm_gpu*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct msm_gpu* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct msm_gpu*,int ) ;
 int FUNC_12 (struct msm_gpu*,int ) ;
 struct adreno_gpu* FUNC_13 (struct msm_gpu*) ;

struct msm_gpu *FUNC_14(struct drm_device *VAR_0)
{
 struct msm_drm_private *VAR_1 = VAR_0->dev_private;
 struct platform_device *VAR_2 = VAR_1->gpu_pdev;
 struct msm_gpu *VAR_3 = ((void*)0);
 struct adreno_gpu *VAR_4;
 int VAR_5;

 if (VAR_2)
  VAR_3 = FUNC_6(VAR_2);

 if (!VAR_3) {
  FUNC_2(VAR_0->dev, "no GPU device was found\n");
  return ((void*)0);
 }

 VAR_4 = FUNC_13(VAR_3);







 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return ((void*)0);


 FUNC_10(&VAR_2->dev);

 VAR_5 = FUNC_7(&VAR_2->dev);
 if (VAR_5 < 0) {
  FUNC_9(&VAR_2->dev);
  FUNC_0(VAR_0->dev, "Couldn't power up the GPU: %d\n", VAR_5);
  return ((void*)0);
 }

 FUNC_4(&VAR_0->struct_mutex);
 VAR_5 = FUNC_3(VAR_3);
 FUNC_5(&VAR_0->struct_mutex);
 FUNC_8(&VAR_2->dev);
 if (VAR_5) {
  FUNC_0(VAR_0->dev, "gpu hw init failed: %d\n", VAR_5);
  return ((void*)0);
 }
 return VAR_3;
}
