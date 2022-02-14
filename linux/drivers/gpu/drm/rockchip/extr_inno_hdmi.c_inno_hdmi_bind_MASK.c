
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct TYPE_7__ {TYPE_2__* funcs; } ;
struct TYPE_8__ {TYPE_1__* funcs; } ;
struct inno_hdmi {int * pclk; int * ddc; TYPE_3__ encoder; TYPE_4__ connector; int tmds_rate; struct device* dev; int * regs; struct drm_device* drm_dev; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int (* destroy ) (TYPE_3__*) ;} ;
struct TYPE_5__ {int (* destroy ) (TYPE_4__*) ;} ;


 int FUNC_0 (struct device*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,struct inno_hdmi*) ;
 int * FUNC_8 (struct device*,char*) ;
 int * FUNC_9 (struct device*,struct resource*) ;
 struct inno_hdmi* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (struct device*,int,int ,int ,int ,int ,struct inno_hdmi*) ;
 int FUNC_12 (struct inno_hdmi*,int ,int ,int ) ;
 int FUNC_13 (int *) ;
 int VAR_5 ;
 int * FUNC_14 (struct inno_hdmi*) ;
 int FUNC_15 (struct inno_hdmi*) ;
 int VAR_6 ;
 int FUNC_16 (struct drm_device*,struct inno_hdmi*) ;
 int FUNC_17 (struct inno_hdmi*) ;
 int VAR_7 ;
 int FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (TYPE_3__*) ;
 struct platform_device* FUNC_22 (struct device*) ;
 int FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct device *VAR_8, struct device *VAR_9,
     void *VAR_10)
{
 struct platform_device *VAR_11 = FUNC_22(VAR_8);
 struct drm_device *VAR_12 = VAR_10;
 struct inno_hdmi *VAR_13;
 struct resource *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_13 = FUNC_10(VAR_8, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->dev = VAR_8;
 VAR_13->drm_dev = VAR_12;

 VAR_14 = FUNC_19(VAR_11, VAR_3, 0);
 VAR_13->regs = FUNC_9(VAR_8, VAR_14);
 if (FUNC_1(VAR_13->regs))
  return FUNC_2(VAR_13->regs);

 VAR_13->pclk = FUNC_8(VAR_13->dev, "pclk");
 if (FUNC_1(VAR_13->pclk)) {
  FUNC_0(VAR_13->dev, "Unable to get HDMI pclk clk\n");
  return FUNC_2(VAR_13->pclk);
 }

 VAR_16 = FUNC_5(VAR_13->pclk);
 if (VAR_16) {
  FUNC_0(VAR_13->dev,
         "Cannot enable HDMI pclk clock: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_15 = FUNC_18(VAR_11, 0);
 if (VAR_15 < 0) {
  VAR_16 = VAR_15;
  goto err_disable_clk;
 }

 FUNC_17(VAR_13);

 VAR_13->ddc = FUNC_14(VAR_13);
 if (FUNC_1(VAR_13->ddc)) {
  VAR_16 = FUNC_2(VAR_13->ddc);
  VAR_13->ddc = ((void*)0);
  goto err_disable_clk;
 }







 VAR_13->tmds_rate = FUNC_4(VAR_13->pclk);
 FUNC_15(VAR_13);

 VAR_16 = FUNC_16(VAR_12, VAR_13);
 if (VAR_16)
  goto err_put_adapter;

 FUNC_7(VAR_8, VAR_13);


 FUNC_12(VAR_13, VAR_2, VAR_7, FUNC_23(1));

 VAR_16 = FUNC_11(VAR_8, VAR_15, VAR_5,
     VAR_6, VAR_4,
     FUNC_6(VAR_8), VAR_13);
 if (VAR_16 < 0)
  goto err_cleanup_hdmi;

 return 0;
err_cleanup_hdmi:
 VAR_13->connector.funcs->destroy(&VAR_13->connector);
 VAR_13->encoder.funcs->destroy(&VAR_13->encoder);
err_put_adapter:
 FUNC_13(VAR_13->ddc);
err_disable_clk:
 FUNC_3(VAR_13->pclk);
 return VAR_16;
}
