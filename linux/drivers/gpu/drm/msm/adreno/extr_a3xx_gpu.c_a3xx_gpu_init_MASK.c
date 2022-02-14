
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ocmem_buf {int len; int addr; } ;
struct msm_gpu {int aspace; int num_perfcntrs; int perfcntrs; } ;
struct msm_drm_private {struct platform_device* gpu_pdev; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
struct adreno_gpu {int gmem; struct msm_gpu base; int reg_offsets; int registers; } ;
struct a3xx_gpu {struct adreno_gpu base; int ocmem_base; struct ocmem_buf* ocmem_hdl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct msm_gpu* FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct msm_gpu*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct drm_device*,struct platform_device*,struct adreno_gpu*,int *,int) ;
 scalar_t__ FUNC_6 (struct adreno_gpu*) ;
 int VAR_6 ;
 struct a3xx_gpu* FUNC_7 (int,int ) ;
 struct ocmem_buf* FUNC_8 (int ,int) ;
 int VAR_7 ;

struct msm_gpu *FUNC_9(struct drm_device *VAR_8)
{
 struct a3xx_gpu *VAR_9 = ((void*)0);
 struct adreno_gpu *VAR_10;
 struct msm_gpu *VAR_11;
 struct msm_drm_private *VAR_12 = VAR_8->dev_private;
 struct platform_device *VAR_13 = VAR_12->gpu_pdev;
 int VAR_14;

 if (!VAR_13) {
  FUNC_2(VAR_8->dev, "no a3xx device\n");
  VAR_14 = -VAR_1;
  goto fail;
 }

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_14 = -VAR_0;
  goto fail;
 }

 VAR_10 = &VAR_9->base;
 VAR_11 = &VAR_10->base;

 VAR_11->perfcntrs = VAR_7;
 VAR_11->num_perfcntrs = FUNC_0(VAR_7);

 VAR_10->registers = VAR_5;
 VAR_10->reg_offsets = VAR_4;

 VAR_14 = FUNC_5(VAR_8, VAR_13, VAR_10, &VAR_6, 1);
 if (VAR_14)
  goto fail;


 if (FUNC_6(VAR_10)) {
 }

 if (!VAR_11->aspace) {







  FUNC_2(VAR_8->dev, "No memory protection without IOMMU\n");
  VAR_14 = -VAR_1;
  goto fail;
 }

 return VAR_11;

fail:
 if (VAR_9)
  FUNC_4(&VAR_9->base.base);

 return FUNC_3(VAR_14);
}
