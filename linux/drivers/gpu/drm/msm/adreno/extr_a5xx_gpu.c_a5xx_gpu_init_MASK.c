
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct msm_gpu {TYPE_1__* aspace; } ;
struct msm_drm_private {struct platform_device* gpu_pdev; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
struct adreno_gpu {struct msm_gpu base; int reg_offsets; int registers; } ;
struct a5xx_gpu {int lm_leakage; struct adreno_gpu base; } ;
struct TYPE_2__ {int mmu; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct msm_gpu* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct msm_gpu*) ;
 int VAR_3 ;
 int FUNC_3 (struct msm_gpu*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct drm_device*,struct platform_device*,struct adreno_gpu*,int *,int) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 struct a5xx_gpu* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,struct msm_gpu*,int ) ;

struct msm_gpu *FUNC_8(struct drm_device *VAR_7)
{
 struct msm_drm_private *VAR_8 = VAR_7->dev_private;
 struct platform_device *VAR_9 = VAR_8->gpu_pdev;
 struct a5xx_gpu *VAR_10 = ((void*)0);
 struct adreno_gpu *VAR_11;
 struct msm_gpu *VAR_12;
 int VAR_13;

 if (!VAR_9) {
  FUNC_0(VAR_7->dev, "No A5XX device is defined\n");
  return FUNC_1(-VAR_1);
 }

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_1(-VAR_0);

 VAR_11 = &VAR_10->base;
 VAR_12 = &VAR_11->base;

 VAR_11->registers = VAR_5;
 VAR_11->reg_offsets = VAR_4;

 VAR_10->lm_leakage = 0x4E001A;

 FUNC_5(&VAR_9->dev);

 VAR_13 = FUNC_4(VAR_7, VAR_9, VAR_11, &VAR_6, 4);
 if (VAR_13) {
  FUNC_2(&(VAR_10->base.base));
  return FUNC_1(VAR_13);
 }

 if (VAR_12->aspace)
  FUNC_7(VAR_12->aspace->mmu, VAR_12, VAR_3);


 FUNC_3(VAR_12);

 return VAR_12;
}
