
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct tegra_dfll_soc_data {int dummy; } ;
struct tegra_dfll {TYPE_1__* dev; void* lut_base; void* i2c_controller_base; void* i2c_base; void* base; int pmu_if; int vdd_reg; int dvco_rst; struct tegra_dfll_soc_data* soc; } ;
struct resource {int start; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 void* FUNC_3 (TYPE_1__*,int ,int ) ;
 struct tegra_dfll* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (struct tegra_dfll*) ;
 int FUNC_8 (struct tegra_dfll*) ;
 int FUNC_9 (struct tegra_dfll*) ;
 int FUNC_10 (struct tegra_dfll*) ;
 int FUNC_11 (struct tegra_dfll*) ;
 int FUNC_12 (struct tegra_dfll*) ;
 int FUNC_13 (struct tegra_dfll*) ;
 int FUNC_14 (struct tegra_dfll*) ;
 scalar_t__ FUNC_15 (int ,char*) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int) ;
 int FUNC_17 (struct platform_device*,struct tegra_dfll*) ;
 int FUNC_18 (struct resource*) ;

int FUNC_19(struct platform_device *VAR_7,
   struct tegra_dfll_soc_data *VAR_8)
{
 struct resource *VAR_9;
 struct tegra_dfll *VAR_10;
 int VAR_11;

 if (!VAR_8) {
  FUNC_2(&VAR_7->dev, "no tegra_dfll_soc_data provided\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_4(&VAR_7->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;
 VAR_10->dev = &VAR_7->dev;
 FUNC_17(VAR_7, VAR_10);

 VAR_10->soc = VAR_8;

 VAR_10->dvco_rst = FUNC_6(VAR_10->dev, "dvco");
 if (FUNC_0(VAR_10->dvco_rst)) {
  FUNC_2(VAR_10->dev, "couldn't get dvco reset\n");
  return FUNC_1(VAR_10->dvco_rst);
 }

 VAR_11 = FUNC_9(VAR_10);
 if (VAR_11) {
  FUNC_2(VAR_10->dev, "couldn't parse device tree parameters\n");
  return VAR_11;
 }

 if (FUNC_15(VAR_10->dev->of_node, "nvidia,pwm-to-pmic")) {
  VAR_10->pmu_if = VAR_6;
  VAR_11 = FUNC_11(VAR_10);
 } else {
  VAR_10->vdd_reg = FUNC_5(VAR_10->dev, "vdd-cpu");
  if (FUNC_0(VAR_10->vdd_reg)) {
   FUNC_2(VAR_10->dev, "couldn't get vdd_cpu regulator\n");
   return FUNC_1(VAR_10->vdd_reg);
  }
  VAR_10->pmu_if = VAR_5;
  VAR_11 = FUNC_10(VAR_10);
 }
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11) {
  FUNC_2(VAR_10->dev, "couldn't build LUT\n");
  return VAR_11;
 }

 VAR_9 = FUNC_16(VAR_7, VAR_4, 0);
 if (!VAR_9) {
  FUNC_2(VAR_10->dev, "no control register resource\n");
  return -VAR_1;
 }

 VAR_10->base = FUNC_3(VAR_10->dev, VAR_9->start, FUNC_18(VAR_9));
 if (!VAR_10->base) {
  FUNC_2(VAR_10->dev, "couldn't ioremap DFLL control registers\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_16(VAR_7, VAR_4, 1);
 if (!VAR_9) {
  FUNC_2(VAR_10->dev, "no i2c_base resource\n");
  return -VAR_1;
 }

 VAR_10->i2c_base = FUNC_3(VAR_10->dev, VAR_9->start, FUNC_18(VAR_9));
 if (!VAR_10->i2c_base) {
  FUNC_2(VAR_10->dev, "couldn't ioremap i2c_base resource\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_16(VAR_7, VAR_4, 2);
 if (!VAR_9) {
  FUNC_2(VAR_10->dev, "no i2c_controller_base resource\n");
  return -VAR_1;
 }

 VAR_10->i2c_controller_base = FUNC_3(VAR_10->dev, VAR_9->start,
            FUNC_18(VAR_9));
 if (!VAR_10->i2c_controller_base) {
  FUNC_2(VAR_10->dev,
   "couldn't ioremap i2c_controller_base resource\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_16(VAR_7, VAR_4, 3);
 if (!VAR_9) {
  FUNC_2(VAR_10->dev, "no lut_base resource\n");
  return -VAR_1;
 }

 VAR_10->lut_base = FUNC_3(VAR_10->dev, VAR_9->start, FUNC_18(VAR_9));
 if (!VAR_10->lut_base) {
  FUNC_2(VAR_10->dev,
   "couldn't ioremap lut_base resource\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_13(VAR_10);
 if (VAR_11) {
  FUNC_2(&VAR_7->dev, "DFLL clock init error\n");
  return VAR_11;
 }


 VAR_11 = FUNC_12(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_14(VAR_10);
 if (VAR_11) {
  FUNC_2(&VAR_7->dev, "DFLL clk registration failed\n");
  return VAR_11;
 }

 FUNC_8(VAR_10);

 return 0;
}
