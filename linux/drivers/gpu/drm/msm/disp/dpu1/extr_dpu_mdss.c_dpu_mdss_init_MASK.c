
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct msm_drm_private {TYPE_1__* mdss; } ;
struct dss_module_power {int clk_config; int num_clk; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
struct TYPE_2__ {int * funcs; struct drm_device* dev; } ;
struct dpu_mdss {int * mmio; TYPE_1__ base; struct dss_module_power mp; int mmio_len; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dpu_mdss*) ;
 int FUNC_6 (struct dpu_mdss*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ) ;
 struct dpu_mdss* FUNC_9 (int ,int,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_11 (struct drm_device*,struct dpu_mdss*) ;
 int FUNC_12 (int,int ,struct dpu_mdss*) ;
 int VAR_4 ;
 int FUNC_13 (struct platform_device*,struct dss_module_power*) ;
 int FUNC_14 (int ,int ) ;
 int * FUNC_15 (struct platform_device*,char*,char*) ;
 int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct resource*) ;
 struct platform_device* FUNC_20 (int ) ;

int FUNC_21(struct drm_device *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_20(VAR_5->dev);
 struct msm_drm_private *VAR_7 = VAR_5->dev_private;
 struct resource *VAR_8;
 struct dpu_mdss *VAR_9;
 struct dss_module_power *VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 VAR_9 = FUNC_9(VAR_5->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->mmio = FUNC_15(VAR_6, "mdss", "mdss");
 if (FUNC_3(VAR_9->mmio))
  return FUNC_4(VAR_9->mmio);

 FUNC_1("mapped mdss address space @%pK\n", VAR_9->mmio);

 VAR_8 = FUNC_17(VAR_6, VAR_2, "mdss");
 if (!VAR_8) {
  FUNC_2("failed to get memory resource for mdss\n");
  return -VAR_0;
 }
 VAR_9->mmio_len = FUNC_19(VAR_8);

 VAR_11 = FUNC_11(VAR_5, VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_10 = &VAR_9->mp;
 VAR_11 = FUNC_13(VAR_6, VAR_10);
 if (VAR_11) {
  FUNC_0("failed to parse clocks, ret=%d\n", VAR_11);
  goto clk_parse_err;
 }

 VAR_9->base.dev = VAR_5;
 VAR_9->base.funcs = &VAR_4;

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11)
  goto irq_domain_error;

 VAR_12 = FUNC_16(VAR_6, 0);
 if (VAR_12 < 0)
  goto irq_error;

 FUNC_12(VAR_12, VAR_3,
      VAR_9);

 VAR_7->mdss = &VAR_9->base;

 FUNC_18(VAR_5->dev);

 FUNC_10(VAR_7->mdss);

 return VAR_11;

irq_error:
 FUNC_6(VAR_9);
irq_domain_error:
 FUNC_14(VAR_10->clk_config, VAR_10->num_clk);
clk_parse_err:
 FUNC_8(&VAR_6->dev, VAR_10->clk_config);
 if (VAR_9->mmio)
  FUNC_7(&VAR_6->dev, VAR_9->mmio);
 VAR_9->mmio = ((void*)0);
 return VAR_11;
}
