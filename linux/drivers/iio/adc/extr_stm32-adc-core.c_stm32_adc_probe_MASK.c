
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_adc_priv_cfg {int (* clk_sel ) (struct platform_device*,struct stm32_adc_priv*) ;} ;
struct TYPE_5__ {int vref_mv; int phys_base; int * base; } ;
struct stm32_adc_priv {struct stm32_adc_priv_cfg const* cfg; TYPE_2__ common; int * vref; int * bclk; int * aclk; int * vdda; } ;
struct resource {int start; } ;
struct device {TYPE_1__* driver; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_4__ {int of_match_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,...) ;
 void* FUNC_4 (struct device*,char*) ;
 int * FUNC_5 (struct device*,struct resource*) ;
 struct stm32_adc_priv* FUNC_6 (struct device*,int,int ) ;
 void* FUNC_7 (struct device*,char*) ;
 TYPE_3__* FUNC_8 (int ,struct device*) ;
 int FUNC_9 (struct device_node*,int *,int *,struct device*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,TYPE_2__*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*,int ) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*,struct stm32_adc_priv*) ;
 int FUNC_26 (struct platform_device*,struct stm32_adc_priv*) ;
 int FUNC_27 (struct platform_device*,struct stm32_adc_priv*) ;
 int FUNC_28 (struct platform_device*,struct stm32_adc_priv*) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_7)
{
 struct stm32_adc_priv *VAR_8;
 struct device *VAR_9 = &VAR_7->dev;
 struct device_node *VAR_10 = VAR_7->dev.of_node;
 struct resource *VAR_11;
 int VAR_12;

 if (!VAR_7->dev.of_node)
  return -VAR_0;

 VAR_8 = FUNC_6(&VAR_7->dev, sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_2;
 FUNC_11(VAR_7, &VAR_8->common);

 VAR_8->cfg = (const struct stm32_adc_priv_cfg *)
  FUNC_8(VAR_9->driver->of_match_table, VAR_9)->data;

 VAR_11 = FUNC_10(VAR_7, VAR_5, 0);
 VAR_8->common.base = FUNC_5(&VAR_7->dev, VAR_11);
 if (FUNC_0(VAR_8->common.base))
  return FUNC_1(VAR_8->common.base);
 VAR_8->common.phys_base = VAR_11->start;

 VAR_8->vdda = FUNC_7(&VAR_7->dev, "vdda");
 if (FUNC_0(VAR_8->vdda)) {
  VAR_12 = FUNC_1(VAR_8->vdda);
  if (VAR_12 != -VAR_3)
   FUNC_3(&VAR_7->dev, "vdda get failed, %d\n", VAR_12);
  return VAR_12;
 }

 VAR_8->vref = FUNC_7(&VAR_7->dev, "vref");
 if (FUNC_0(VAR_8->vref)) {
  VAR_12 = FUNC_1(VAR_8->vref);
  FUNC_3(&VAR_7->dev, "vref get failed, %d\n", VAR_12);
  return VAR_12;
 }

 VAR_8->aclk = FUNC_4(&VAR_7->dev, "adc");
 if (FUNC_0(VAR_8->aclk)) {
  VAR_12 = FUNC_1(VAR_8->aclk);
  if (VAR_12 != -VAR_1) {
   FUNC_3(&VAR_7->dev, "Can't get 'adc' clock\n");
   return VAR_12;
  }
  VAR_8->aclk = ((void*)0);
 }

 VAR_8->bclk = FUNC_4(&VAR_7->dev, "bus");
 if (FUNC_0(VAR_8->bclk)) {
  VAR_12 = FUNC_1(VAR_8->bclk);
  if (VAR_12 != -VAR_1) {
   FUNC_3(&VAR_7->dev, "Can't get 'bus' clock\n");
   return VAR_12;
  }
  VAR_8->bclk = ((void*)0);
 }

 VAR_12 = FUNC_25(VAR_9, VAR_8);
 if (VAR_12)
  return VAR_12;

 FUNC_14(VAR_9);
 FUNC_18(VAR_9);
 FUNC_19(VAR_9, VAR_6);
 FUNC_21(VAR_9);
 FUNC_13(VAR_9);

 VAR_12 = FUNC_23(VAR_9);
 if (VAR_12)
  goto err_pm_stop;

 VAR_12 = FUNC_22(VAR_8->vref);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_7->dev, "vref get voltage failed, %d\n", VAR_12);
  goto err_hw_stop;
 }
 VAR_8->common.vref_mv = VAR_12 / 1000;
 FUNC_2(&VAR_7->dev, "vref+=%dmV\n", VAR_8->common.vref_mv);

 VAR_12 = VAR_8->cfg->clk_sel(VAR_7, VAR_8);
 if (VAR_12 < 0)
  goto err_hw_stop;

 VAR_12 = FUNC_26(VAR_7, VAR_8);
 if (VAR_12 < 0)
  goto err_hw_stop;

 VAR_12 = FUNC_9(VAR_10, ((void*)0), ((void*)0), &VAR_7->dev);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_7->dev, "failed to populate DT children\n");
  goto err_irq_remove;
 }

 FUNC_15(VAR_9);
 FUNC_16(VAR_9);

 return 0;

err_irq_remove:
 FUNC_27(VAR_7, VAR_8);
err_hw_stop:
 FUNC_24(VAR_9);
err_pm_stop:
 FUNC_12(VAR_9);
 FUNC_20(VAR_9);
 FUNC_17(VAR_9);

 return VAR_12;
}
