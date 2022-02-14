
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct platform_device_id {int driver_data; } ;
struct device {scalar_t__ of_node; struct device* parent; } ;
struct platform_device {struct device dev; } ;
struct max77686_hw_clk_info {char const* name; int flags; } ;
struct TYPE_4__ {char const* name; int * ops; int flags; } ;
struct TYPE_5__ {TYPE_1__* init; } ;
struct max77686_clk_init_data {TYPE_1__ clk_idata; TYPE_2__ hw; struct max77686_hw_clk_info const* clk_info; struct regmap* regmap; } ;
struct max77686_clk_driver_data {int chip; int num_clks; struct max77686_clk_init_data* max_clk_data; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct regmap* FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct device*,TYPE_2__*) ;
 int FUNC_3 (struct device*,TYPE_2__*,char const*,int *) ;
 struct max77686_clk_init_data* FUNC_4 (struct device*,int,int,int ) ;
 struct max77686_clk_driver_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ,struct max77686_clk_driver_data*) ;
 struct max77686_hw_clk_info* VAR_9 ;
 int VAR_10 ;
 struct max77686_hw_clk_info* VAR_11 ;
 struct max77686_hw_clk_info* VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (scalar_t__,char*,int,char const**) ;
 struct platform_device_id* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct regmap*,int ,int,int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_14)
{
 struct device *VAR_15 = &VAR_14->dev;
 struct device *VAR_16 = VAR_15->parent;
 const struct platform_device_id *VAR_17 = FUNC_8(VAR_14);
 struct max77686_clk_driver_data *VAR_18;
 const struct max77686_hw_clk_info *VAR_19;
 struct regmap *VAR_20;
 int VAR_21, VAR_22, VAR_23;

 VAR_18 = FUNC_5(VAR_15, sizeof(*VAR_18), VAR_3);
 if (!VAR_18)
  return -VAR_2;

 VAR_20 = FUNC_1(VAR_16, ((void*)0));
 if (!VAR_20) {
  FUNC_0(VAR_15, "Failed to get rtc regmap\n");
  return -VAR_1;
 }

 VAR_18->chip = VAR_17->driver_data;

 switch (VAR_18->chip) {
 case 129:
  VAR_23 = VAR_5;
  VAR_19 = VAR_11;
  break;

 case 128:
  VAR_23 = VAR_6;
  VAR_19 = VAR_12;
  break;

 case 130:
  VAR_23 = VAR_4;
  VAR_19 = VAR_9;
  break;

 default:
  FUNC_0(VAR_15, "Unknown Chip ID\n");
  return -VAR_0;
 }

 VAR_18->num_clks = VAR_23;
 VAR_18->max_clk_data = FUNC_4(VAR_15, VAR_23,
           sizeof(*VAR_18->max_clk_data),
           VAR_3);
 if (!VAR_18->max_clk_data)
  return -VAR_2;

 for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {
  struct max77686_clk_init_data *VAR_24;
  const char *VAR_25;

  VAR_24 = &VAR_18->max_clk_data[VAR_21];

  VAR_24->regmap = VAR_20;
  VAR_24->clk_info = &VAR_19[VAR_21];
  VAR_24->clk_idata.flags = VAR_19[VAR_21].flags;
  VAR_24->clk_idata.ops = &VAR_10;

  if (VAR_16->of_node &&
      !FUNC_7(VAR_16->of_node,
         "clock-output-names",
         VAR_21, &VAR_25))
   VAR_24->clk_idata.name = VAR_25;
  else
   VAR_24->clk_idata.name = VAR_19[VAR_21].name;

  VAR_24->hw.init = &VAR_24->clk_idata;

  VAR_22 = FUNC_2(VAR_15, &VAR_24->hw);
  if (VAR_22) {
   FUNC_0(VAR_15, "Failed to clock register: %d\n", VAR_22);
   return VAR_22;
  }

  VAR_22 = FUNC_3(VAR_15, &VAR_24->hw,
        VAR_24->clk_idata.name,
        ((void*)0));
  if (VAR_22 < 0) {
   FUNC_0(VAR_15, "Failed to clkdev register: %d\n", VAR_22);
   return VAR_22;
  }
 }

 if (VAR_16->of_node) {
  VAR_22 = FUNC_6(VAR_15, VAR_13,
        VAR_18);

  if (VAR_22 < 0) {
   FUNC_0(VAR_15, "Failed to register OF clock provider: %d\n",
    VAR_22);
   return VAR_22;
  }
 }


 if (VAR_18->chip == 128) {
  VAR_22 = FUNC_9(VAR_20, VAR_8,
      1 << VAR_7,
      1 << VAR_7);
  if (VAR_22 < 0) {
   FUNC_0(VAR_15, "Failed to config low-jitter: %d\n", VAR_22);
   return VAR_22;
  }
 }

 return 0;
}
