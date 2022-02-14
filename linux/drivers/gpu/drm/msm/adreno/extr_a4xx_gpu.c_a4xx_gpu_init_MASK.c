
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ocmem_buf {int len; int addr; } ;
struct msm_gpu {int aspace; scalar_t__ num_perfcntrs; int * perfcntrs; } ;
struct msm_drm_private {struct platform_device* gpu_pdev; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
struct adreno_gpu {int gmem; struct msm_gpu base; int reg_offsets; int registers; } ;
struct a4xx_gpu {struct adreno_gpu base; int ocmem_base; struct ocmem_buf* ocmem_hdl; } ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct msm_gpu* FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct msm_gpu*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct drm_device*,struct platform_device*,struct adreno_gpu*,int *,int) ;
 scalar_t__ FUNC_5 (struct adreno_gpu*) ;
 int VAR_6 ;
 struct a4xx_gpu* FUNC_6 (int,int ) ;
 struct ocmem_buf* FUNC_7 (int ,int) ;

struct msm_gpu *FUNC_8(struct drm_device *VAR_7)
{
 struct a4xx_gpu *VAR_8 = ((void*)0);
 struct adreno_gpu *VAR_9;
 struct msm_gpu *VAR_10;
 struct msm_drm_private *VAR_11 = VAR_7->dev_private;
 struct platform_device *VAR_12 = VAR_11->gpu_pdev;
 int VAR_13;

 if (!VAR_12) {
  FUNC_1(VAR_7->dev, "no a4xx device\n");
  VAR_13 = -VAR_1;
  goto fail;
 }

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_13 = -VAR_0;
  goto fail;
 }

 VAR_9 = &VAR_8->base;
 VAR_10 = &VAR_9->base;

 VAR_10->perfcntrs = ((void*)0);
 VAR_10->num_perfcntrs = 0;

 VAR_9->registers = VAR_5;
 VAR_9->reg_offsets = VAR_4;

 VAR_13 = FUNC_4(VAR_7, VAR_12, VAR_9, &VAR_6, 1);
 if (VAR_13)
  goto fail;


 if (FUNC_5(VAR_9)) {
 }

 if (!VAR_10->aspace) {







  FUNC_1(VAR_7->dev, "No memory protection without IOMMU\n");
  VAR_13 = -VAR_1;
  goto fail;
 }

 return VAR_10;

fail:
 if (VAR_8)
  FUNC_3(&VAR_8->base.base);

 return FUNC_2(VAR_13);
}
