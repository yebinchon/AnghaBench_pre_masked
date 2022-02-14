
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_7__ {int downdifferential; int upthreshold; } ;
struct TYPE_6__ {int sr_idle; int sr_mc_gate_idle; int standby_idle; int pd_idle; int srpd_lite_idle; int lpddr4_odt_dis_freq; int lpddr3_odt_dis_freq; int ddr3_odt_dis_freq; int ddr3_speed_bin; } ;
struct rk3399_dmcfreq {int odt_pd_arg0; int odt_pd_arg1; struct device* dev; struct dev_pm_opp* devfreq; TYPE_4__ ondemand_data; int rate; int volt; struct dev_pm_opp* dmc_clk; TYPE_2__ timing; int odt_dis_freq; struct dev_pm_opp* regmap_pmu; struct dev_pm_opp* edev; struct dev_pm_opp* vdd_center; int lock; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct dram_timing {int dummy; } ;
struct device_node {int dummy; } ;
struct dev_pm_opp {int dummy; } ;
struct arm_smccc_res {scalar_t__ a0; } ;
struct TYPE_5__ {int initial_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct dev_pm_opp*) ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,int,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;
 int FUNC_3 (struct dev_pm_opp*) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct dev_pm_opp*) ;
 int FUNC_6 (struct dev_pm_opp*) ;
 scalar_t__ FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct dev_pm_opp*) ;
 int FUNC_10 (struct dev_pm_opp*) ;
 struct dev_pm_opp* FUNC_11 (struct device*,int ) ;
 struct dev_pm_opp* FUNC_12 (struct device*,int *,int ) ;
 struct dev_pm_opp* FUNC_13 (struct device*,char*) ;
 struct dev_pm_opp* FUNC_14 (struct device*,TYPE_1__*,int ,TYPE_4__*) ;
 int FUNC_15 (struct device*,struct dev_pm_opp*) ;
 struct rk3399_dmcfreq* FUNC_16 (struct device*,int,int ) ;
 struct dev_pm_opp* FUNC_17 (struct device*,char*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_2__*,struct device_node*) ;
 struct device_node* FUNC_20 (struct device_node*,char*,int ) ;
 int FUNC_21 (struct device_node*,char*,int *) ;
 int FUNC_22 (struct platform_device*,struct rk3399_dmcfreq*) ;
 int FUNC_23 (struct dev_pm_opp*,int ,int*) ;
 TYPE_1__ VAR_11 ;
 struct dev_pm_opp* FUNC_24 (struct device_node*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_12)
{
 struct arm_smccc_res VAR_13;
 struct device *VAR_14 = &VAR_12->dev;
 struct device_node *VAR_15 = VAR_12->dev.of_node, *VAR_16;
 struct rk3399_dmcfreq *VAR_17;
 int VAR_18, VAR_19, VAR_20;
 uint32_t *VAR_21;
 struct dev_pm_opp *VAR_22;
 u32 VAR_23;
 u32 VAR_24;

 VAR_17 = FUNC_16(VAR_14, sizeof(struct rk3399_dmcfreq), VAR_4);
 if (!VAR_17)
  return -VAR_2;

 FUNC_18(&VAR_17->lock);

 VAR_17->vdd_center = FUNC_17(VAR_14, "center");
 if (FUNC_0(VAR_17->vdd_center)) {
  if (FUNC_1(VAR_17->vdd_center) == -VAR_3)
   return -VAR_3;

  FUNC_4(VAR_14, "Cannot get the regulator \"center\"\n");
  return FUNC_1(VAR_17->vdd_center);
 }

 VAR_17->dmc_clk = FUNC_13(VAR_14, "dmc_clk");
 if (FUNC_0(VAR_17->dmc_clk)) {
  if (FUNC_1(VAR_17->dmc_clk) == -VAR_3)
   return -VAR_3;

  FUNC_4(VAR_14, "Cannot get the clk dmc_clk\n");
  return FUNC_1(VAR_17->dmc_clk);
 }

 VAR_17->edev = FUNC_11(VAR_14, 0);
 if (FUNC_0(VAR_17->edev))
  return -VAR_3;

 VAR_18 = FUNC_10(VAR_17->edev);
 if (VAR_18 < 0) {
  FUNC_4(VAR_14, "failed to enable devfreq-event devices\n");
  return VAR_18;
 }






 if (!FUNC_19(&VAR_17->timing, VAR_15)) {
  VAR_21 = &VAR_17->timing.ddr3_speed_bin;
  VAR_20 = sizeof(struct dram_timing) / 4;
  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
   FUNC_2(VAR_10, *VAR_21++, VAR_19,
          VAR_9,
          0, 0, 0, 0, &VAR_13);
   if (VAR_13.a0) {
    FUNC_4(VAR_14, "Failed to set dram param: %ld\n",
     VAR_13.a0);
    return -VAR_1;
   }
  }
 }

 VAR_16 = FUNC_20(VAR_15, "rockchip,pmu", 0);
 if (VAR_16) {
  VAR_17->regmap_pmu = FUNC_24(VAR_16);
  if (FUNC_0(VAR_17->regmap_pmu))
   return FUNC_1(VAR_17->regmap_pmu);
 }

 FUNC_23(VAR_17->regmap_pmu, VAR_7, &VAR_24);
 VAR_23 = (VAR_24 >> VAR_6) &
      VAR_5;

 switch (VAR_23) {
 case 130:
  VAR_17->odt_dis_freq = VAR_17->timing.ddr3_odt_dis_freq;
  break;
 case 129:
  VAR_17->odt_dis_freq = VAR_17->timing.lpddr3_odt_dis_freq;
  break;
 case 128:
  VAR_17->odt_dis_freq = VAR_17->timing.lpddr4_odt_dis_freq;
  break;
 default:
  return -VAR_1;
 };

 FUNC_2(VAR_10, 0, 0,
        VAR_8,
        0, 0, 0, 0, &VAR_13);
 VAR_17->odt_pd_arg0 = (VAR_17->timing.sr_idle & 0xff) |
       ((VAR_17->timing.sr_mc_gate_idle & 0xff) << 8) |
       ((VAR_17->timing.standby_idle & 0xffff) << 16);
 VAR_17->odt_pd_arg1 = (VAR_17->timing.pd_idle & 0xfff) |
       ((VAR_17->timing.srpd_lite_idle & 0xfff) << 16);





 if (FUNC_7(VAR_14)) {
  FUNC_4(VAR_14, "Invalid operating-points in device tree.\n");
  return -VAR_1;
 }

 FUNC_21(VAR_15, "upthreshold",
        &VAR_17->ondemand_data.upthreshold);
 FUNC_21(VAR_15, "downdifferential",
        &VAR_17->ondemand_data.downdifferential);

 VAR_17->rate = FUNC_3(VAR_17->dmc_clk);

 VAR_22 = FUNC_12(VAR_14, &VAR_17->rate, 0);
 if (FUNC_0(VAR_22)) {
  VAR_18 = FUNC_1(VAR_22);
  goto err_free_opp;
 }

 VAR_17->rate = FUNC_5(VAR_22);
 VAR_17->volt = FUNC_6(VAR_22);
 FUNC_9(VAR_22);

 VAR_11.initial_freq = VAR_17->rate;

 VAR_17->devfreq = FUNC_14(VAR_14,
        &VAR_11,
        VAR_0,
        &VAR_17->ondemand_data);
 if (FUNC_0(VAR_17->devfreq)) {
  VAR_18 = FUNC_1(VAR_17->devfreq);
  goto err_free_opp;
 }

 FUNC_15(VAR_14, VAR_17->devfreq);

 VAR_17->dev = VAR_14;
 FUNC_22(VAR_12, VAR_17);

 return 0;

err_free_opp:
 FUNC_8(&VAR_12->dev);
 return VAR_18;
}
