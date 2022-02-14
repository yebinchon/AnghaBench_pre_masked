
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct msm_gpu {TYPE_2__* aspace; } ;
struct msm_drm_private {struct platform_device* gpu_pdev; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct device_node {int dummy; } ;
struct adreno_gpu {struct msm_gpu base; int reg_offsets; int * registers; } ;
struct a6xx_gpu {struct adreno_gpu base; } ;
struct TYPE_4__ {int mmu; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct msm_gpu* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct msm_gpu*) ;
 int VAR_2 ;
 int FUNC_3 (struct a6xx_gpu*,struct device_node*) ;
 int VAR_3 ;
 int FUNC_4 (struct drm_device*,struct platform_device*,struct adreno_gpu*,int *,int) ;
 int VAR_4 ;
 struct a6xx_gpu* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,struct msm_gpu*,int ) ;
 struct device_node* FUNC_7 (int ,char*,int ) ;

struct msm_gpu *FUNC_8(struct drm_device *VAR_5)
{
 struct msm_drm_private *VAR_6 = VAR_5->dev_private;
 struct platform_device *VAR_7 = VAR_6->gpu_pdev;
 struct device_node *VAR_8;
 struct a6xx_gpu *VAR_9;
 struct adreno_gpu *VAR_10;
 struct msm_gpu *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_1(-VAR_0);

 VAR_10 = &VAR_9->base;
 VAR_11 = &VAR_10->base;

 VAR_10->registers = ((void*)0);
 VAR_10->reg_offsets = VAR_3;

 VAR_12 = FUNC_4(VAR_5, VAR_7, VAR_10, &VAR_4, 1);
 if (VAR_12) {
  FUNC_2(&(VAR_9->base.base));
  return FUNC_1(VAR_12);
 }


 VAR_8 = FUNC_7(VAR_7->dev.of_node, "qcom,gmu", 0);


 FUNC_0(!VAR_8);

 VAR_12 = FUNC_3(VAR_9, VAR_8);
 if (VAR_12) {
  FUNC_2(&(VAR_9->base.base));
  return FUNC_1(VAR_12);
 }

 if (VAR_11->aspace)
  FUNC_6(VAR_11->aspace->mmu, VAR_11,
    VAR_2);

 return VAR_11;
}
