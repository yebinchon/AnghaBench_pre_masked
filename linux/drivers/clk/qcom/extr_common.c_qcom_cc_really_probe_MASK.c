
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_5__ {int nr_resets; int owner; int * ops; int of_node; } ;
struct qcom_reset_controller {TYPE_2__ rcdev; int reset_map; struct regmap* regmap; } ;
struct qcom_cc_desc {size_t num_clks; size_t num_clk_hws; scalar_t__ num_gdscs; scalar_t__ gdscs; int resets; int num_resets; struct clk_hw** clk_hws; struct clk_regmap** clks; } ;
struct qcom_cc {size_t num_rclks; struct clk_regmap** rclks; struct qcom_reset_controller reset; } ;
struct device {TYPE_1__* driver; int of_node; } ;
struct platform_device {struct device dev; } ;
struct gdsc_desc {scalar_t__ num; scalar_t__ scs; struct device* dev; } ;
struct clk_regmap {int dummy; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,struct gdsc_desc*) ;
 int FUNC_1 (struct device*,struct clk_hw*) ;
 int FUNC_2 (struct device*,struct clk_regmap*) ;
 void* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int ,struct qcom_cc*) ;
 int FUNC_5 (struct device*,TYPE_2__*) ;
 int FUNC_6 (struct gdsc_desc*,TYPE_2__*,struct regmap*) ;
 int VAR_2 ;
 int FUNC_7 (struct device*,struct qcom_cc*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_8(struct platform_device *VAR_5,
    const struct qcom_cc_desc *VAR_6, struct regmap *VAR_7)
{
 int VAR_8, VAR_9;
 struct device *VAR_10 = &VAR_5->dev;
 struct qcom_reset_controller *VAR_11;
 struct qcom_cc *VAR_12;
 struct gdsc_desc *VAR_13;
 size_t VAR_14 = VAR_6->num_clks;
 struct clk_regmap **VAR_15 = VAR_6->clks;
 size_t VAR_16 = VAR_6->num_clk_hws;
 struct clk_hw **VAR_17 = VAR_6->clk_hws;

 VAR_12 = FUNC_3(VAR_10, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = &VAR_12->reset;
 VAR_11->rcdev.of_node = VAR_10->of_node;
 VAR_11->rcdev.ops = &VAR_4;
 VAR_11->rcdev.owner = VAR_10->driver->owner;
 VAR_11->rcdev.nr_resets = VAR_6->num_resets;
 VAR_11->regmap = VAR_7;
 VAR_11->reset_map = VAR_6->resets;

 VAR_9 = FUNC_5(VAR_10, &VAR_11->rcdev);
 if (VAR_9)
  return VAR_9;

 if (VAR_6->gdscs && VAR_6->num_gdscs) {
  VAR_13 = FUNC_3(VAR_10, sizeof(*VAR_13), VAR_1);
  if (!VAR_13)
   return -VAR_0;
  VAR_13->dev = VAR_10;
  VAR_13->scs = VAR_6->gdscs;
  VAR_13->num = VAR_6->num_gdscs;
  VAR_9 = FUNC_6(VAR_13, &VAR_11->rcdev, VAR_7);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_0(VAR_10, VAR_3,
            VAR_13);
  if (VAR_9)
   return VAR_9;
 }

 VAR_12->rclks = VAR_15;
 VAR_12->num_rclks = VAR_14;

 FUNC_7(VAR_10, VAR_12);

 for (VAR_8 = 0; VAR_8 < VAR_16; VAR_8++) {
  VAR_9 = FUNC_1(VAR_10, VAR_17[VAR_8]);
  if (VAR_9)
   return VAR_9;
 }

 for (VAR_8 = 0; VAR_8 < VAR_14; VAR_8++) {
  if (!VAR_15[VAR_8])
   continue;

  VAR_9 = FUNC_2(VAR_10, VAR_15[VAR_8]);
  if (VAR_9)
   return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_10, VAR_2, VAR_12);
 if (VAR_9)
  return VAR_9;

 return 0;
}
