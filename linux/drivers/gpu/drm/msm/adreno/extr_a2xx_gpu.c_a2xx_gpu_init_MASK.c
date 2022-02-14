
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct msm_gpu {int aspace; int num_perfcntrs; int perfcntrs; } ;
struct msm_drm_private {struct platform_device* gpu_pdev; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
struct adreno_gpu {struct msm_gpu base; int reg_offsets; int registers; } ;
struct a2xx_gpu {struct adreno_gpu base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct msm_gpu* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct msm_gpu*) ;
 int VAR_6 ;
 int FUNC_3 (struct drm_device*,struct platform_device*,struct adreno_gpu*,int *,int) ;
 scalar_t__ FUNC_4 (struct adreno_gpu*) ;
 scalar_t__ FUNC_5 (struct adreno_gpu*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_7 ;
 struct a2xx_gpu* FUNC_7 (int,int ) ;
 int VAR_8 ;

struct msm_gpu *FUNC_8(struct drm_device *VAR_9)
{
 struct a2xx_gpu *VAR_10 = ((void*)0);
 struct adreno_gpu *VAR_11;
 struct msm_gpu *VAR_12;
 struct msm_drm_private *VAR_13 = VAR_9->dev_private;
 struct platform_device *VAR_14 = VAR_13->gpu_pdev;
 int VAR_15;

 if (!VAR_14) {
  FUNC_6(VAR_9->dev, "no a2xx device\n");
  VAR_15 = -VAR_1;
  goto fail;
 }

 VAR_10 = FUNC_7(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  VAR_15 = -VAR_0;
  goto fail;
 }

 VAR_11 = &VAR_10->base;
 VAR_12 = &VAR_11->base;

 VAR_12->perfcntrs = VAR_8;
 VAR_12->num_perfcntrs = FUNC_0(VAR_8);

 if (FUNC_4(VAR_11))
  VAR_11->registers = VAR_3;
 else if (FUNC_5(VAR_11))
  VAR_11->registers = VAR_5;
 else
  VAR_11->registers = VAR_4;

 VAR_11->reg_offsets = VAR_6;

 VAR_15 = FUNC_3(VAR_9, VAR_14, VAR_11, &VAR_7, 1);
 if (VAR_15)
  goto fail;

 if (!VAR_12->aspace) {
  FUNC_6(VAR_9->dev, "No memory protection without MMU\n");
  VAR_15 = -VAR_1;
  goto fail;
 }

 return VAR_12;

fail:
 if (VAR_10)
  FUNC_2(&VAR_10->base.base);

 return FUNC_1(VAR_15);
}
