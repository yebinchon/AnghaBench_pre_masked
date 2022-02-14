
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_device {int requires_tv_dac_clk; int vdda_dac_reg; int base; struct platform_device* pdev; int * config; int venc_lock; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,struct resource*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct venc_device*) ;
 struct venc_device* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct venc_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (struct venc_device*) ;
 int FUNC_15 (struct venc_device*) ;
 int FUNC_16 (struct venc_device*) ;
 int VAR_6 ;
 int FUNC_17 (struct venc_device*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_7)
{
 struct venc_device *VAR_8;
 struct resource *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->pdev = VAR_7;

 FUNC_10(VAR_7, VAR_8);


 if (FUNC_13(VAR_6))
  VAR_8->requires_tv_dac_clk = 1;

 FUNC_8(&VAR_8->venc_lock);

 VAR_8->config = &VAR_5;

 VAR_9 = FUNC_9(VAR_8->pdev, VAR_3, 0);
 VAR_8->base = FUNC_4(&VAR_7->dev, VAR_9);
 if (FUNC_1(VAR_8->base)) {
  VAR_10 = FUNC_2(VAR_8->base);
  goto err_free;
 }

 VAR_8->vdda_dac_reg = FUNC_5(&VAR_7->dev, "vdda");
 if (FUNC_1(VAR_8->vdda_dac_reg)) {
  VAR_10 = FUNC_2(VAR_8->vdda_dac_reg);
  if (VAR_10 != -VAR_1)
   FUNC_0("can't get VDDA_DAC regulator\n");
  goto err_free;
 }

 VAR_10 = FUNC_14(VAR_8);
 if (VAR_10)
  goto err_free;

 VAR_10 = FUNC_16(VAR_8);
 if (VAR_10)
  goto err_free;

 FUNC_12(&VAR_7->dev);

 VAR_10 = FUNC_15(VAR_8);
 if (VAR_10)
  goto err_pm_disable;

 VAR_10 = FUNC_3(&VAR_7->dev, &VAR_4);
 if (VAR_10)
  goto err_uninit_output;

 return 0;

err_uninit_output:
 FUNC_17(VAR_8);
err_pm_disable:
 FUNC_11(&VAR_7->dev);
err_free:
 FUNC_6(VAR_8);
 return VAR_10;
}
