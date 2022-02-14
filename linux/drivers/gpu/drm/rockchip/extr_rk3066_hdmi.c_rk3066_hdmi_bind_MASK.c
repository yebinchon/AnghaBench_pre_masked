
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* funcs; } ;
struct TYPE_8__ {TYPE_1__* funcs; } ;
struct rk3066_hdmi {int * hclk; int * ddc; TYPE_3__ encoder; TYPE_4__ connector; int * grf_regmap; int * regs; struct drm_device* drm_dev; struct device* dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_6__ {int (* destroy ) (TYPE_3__*) ;} ;
struct TYPE_5__ {int (* destroy ) (TYPE_4__*) ;} ;


 int FUNC_0 (struct device*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,struct rk3066_hdmi*) ;
 int * FUNC_7 (struct device*,char*) ;
 int * FUNC_8 (struct device*,struct resource*) ;
 struct rk3066_hdmi* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,int,int ,int ,int ,int ,struct rk3066_hdmi*) ;
 int FUNC_11 (struct rk3066_hdmi*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int VAR_13 ;
 int * FUNC_15 (struct rk3066_hdmi*) ;
 int VAR_14 ;
 int FUNC_16 (struct drm_device*,struct rk3066_hdmi*) ;
 int FUNC_17 (struct rk3066_hdmi*,int ) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int * FUNC_20 (int ,char*) ;
 struct platform_device* FUNC_21 (struct device*) ;
 int FUNC_22 (int,int) ;

__attribute__((used)) static int FUNC_23(struct device *VAR_15, struct device *VAR_16,
       void *VAR_17)
{
 struct platform_device *VAR_18 = FUNC_21(VAR_15);
 struct drm_device *VAR_19 = VAR_17;
 struct rk3066_hdmi *VAR_20;
 struct resource *VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_20 = FUNC_9(VAR_15, sizeof(*VAR_20), VAR_2);
 if (!VAR_20)
  return -VAR_0;

 VAR_20->dev = VAR_15;
 VAR_20->drm_dev = VAR_19;

 VAR_21 = FUNC_14(VAR_18, VAR_11, 0);
 if (!VAR_21)
  return -VAR_1;

 VAR_20->regs = FUNC_8(VAR_15, VAR_21);
 if (FUNC_1(VAR_20->regs))
  return FUNC_2(VAR_20->regs);

 VAR_22 = FUNC_13(VAR_18, 0);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_20->hclk = FUNC_7(VAR_15, "hclk");
 if (FUNC_1(VAR_20->hclk)) {
  FUNC_0(VAR_15, "unable to get HDMI hclk clock\n");
  return FUNC_2(VAR_20->hclk);
 }

 VAR_23 = FUNC_4(VAR_20->hclk);
 if (VAR_23) {
  FUNC_0(VAR_15, "cannot enable HDMI hclk clock: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_20->grf_regmap = FUNC_20(VAR_15->of_node,
          "rockchip,grf");
 if (FUNC_1(VAR_20->grf_regmap)) {
  FUNC_0(VAR_15, "unable to get rockchip,grf\n");
  VAR_23 = FUNC_2(VAR_20->grf_regmap);
  goto err_disable_hclk;
 }


 FUNC_11(VAR_20, VAR_3, 25);

 VAR_20->ddc = FUNC_15(VAR_20);
 if (FUNC_1(VAR_20->ddc)) {
  VAR_23 = FUNC_2(VAR_20->ddc);
  VAR_20->ddc = ((void*)0);
  goto err_disable_hclk;
 }

 FUNC_17(VAR_20, VAR_10);
 FUNC_22(999, 1000);
 FUNC_11(VAR_20, VAR_5, VAR_4);
 FUNC_11(VAR_20, VAR_6, 0);
 FUNC_11(VAR_20, VAR_7, 0);
 FUNC_11(VAR_20, VAR_8, 0);
 FUNC_17(VAR_20, VAR_9);

 VAR_23 = FUNC_16(VAR_19, VAR_20);
 if (VAR_23)
  goto err_disable_i2c;

 FUNC_6(VAR_15, VAR_20);

 VAR_23 = FUNC_10(VAR_15, VAR_22, VAR_13,
     VAR_14, VAR_12,
     FUNC_5(VAR_15), VAR_20);
 if (VAR_23) {
  FUNC_0(VAR_15, "failed to request hdmi irq: %d\n", VAR_23);
  goto err_cleanup_hdmi;
 }

 return 0;

err_cleanup_hdmi:
 VAR_20->connector.funcs->destroy(&VAR_20->connector);
 VAR_20->encoder.funcs->destroy(&VAR_20->encoder);
err_disable_i2c:
 FUNC_12(VAR_20->ddc);
err_disable_hclk:
 FUNC_3(VAR_20->hclk);

 return VAR_23;
}
