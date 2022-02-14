
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
typedef struct regmap clk_hw ;
struct TYPE_3__ {int nr_resets; int of_node; int * ops; int owner; } ;
struct aspeed_reset {TYPE_1__ rcdev; struct regmap* map; } ;
struct aspeed_gate_data {int clock_idx; int reset_idx; int flags; int parent_name; int name; } ;
struct TYPE_4__ {struct regmap** hws; } ;


 int FUNC_0 (struct aspeed_gate_data*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int,int) ;
 int VAR_17 ;
 scalar_t__ FUNC_3 (struct regmap*) ;
 int FUNC_4 (struct regmap*) ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_2__* VAR_20 ;
 struct regmap* FUNC_5 (struct device*,int ,int ,int ,struct regmap*,int,int ,int,int *) ;
 int VAR_21 ;
 struct aspeed_gate_data* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 struct regmap* FUNC_6 (struct device*,char*,char*,int ,scalar_t__,int,int,int ,int ,int *) ;
 struct regmap* FUNC_7 (struct device*,char*,int *,int ,int) ;
 struct regmap* FUNC_8 (struct device*,char*,char*,int ,scalar_t__,int,int ,int *) ;
 struct regmap* FUNC_9 (struct device*,char*,struct aspeed_gate_data*,int,int ,scalar_t__,int,int,int ,int *) ;
 struct aspeed_gate_data* VAR_27 ;
 int FUNC_10 (struct device*,char*) ;
 struct aspeed_reset* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct device*,TYPE_1__*) ;
 int FUNC_13 (struct regmap*,int,int*) ;
 int FUNC_14 (struct regmap*,scalar_t__,int ,int) ;
 int FUNC_15 (struct regmap*,int,int) ;
 scalar_t__ VAR_28 ;
 struct regmap* FUNC_16 (int ) ;
 struct aspeed_gate_data* VAR_29 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_30)
{
 struct device *VAR_31 = &VAR_30->dev;
 struct aspeed_reset *VAR_32;
 struct regmap *VAR_33;
 struct clk_hw *VAR_34;
 u32 VAR_35, VAR_36;
 int VAR_37, VAR_38;

 VAR_33 = FUNC_16(VAR_31->of_node);
 if (FUNC_3(VAR_33)) {
  FUNC_10(VAR_31, "no syscon regmap\n");
  return FUNC_4(VAR_33);
 }

 VAR_32 = FUNC_11(VAR_31, sizeof(*VAR_32), VAR_17);
 if (!VAR_32)
  return -VAR_16;

 VAR_32->map = VAR_33;

 VAR_32->rcdev.owner = VAR_18;
 VAR_32->rcdev.nr_resets = 64;
 VAR_32->rcdev.ops = &VAR_23;
 VAR_32->rcdev.of_node = VAR_31->of_node;

 VAR_38 = FUNC_12(VAR_31, &VAR_32->rcdev);
 if (VAR_38) {
  FUNC_10(VAR_31, "could not register reset controller\n");
  return VAR_38;
 }


 FUNC_13(VAR_33, VAR_14, &VAR_35);
 if (VAR_35 & VAR_19)
  VAR_36 = 24000000 / 13;
 else
  VAR_36 = 24000000;
 VAR_34 = FUNC_7(VAR_31, "uart", ((void*)0), 0, VAR_36);
 if (FUNC_3(VAR_34))
  return FUNC_4(VAR_34);
 VAR_20->hws[VAR_8] = VAR_34;


 FUNC_13(VAR_33, 0x80, &VAR_35);
 if (VAR_35 & FUNC_1(31))
  VAR_36 = 24000000 / 13;
 else
  VAR_36 = 24000000;
 VAR_34 = FUNC_7(VAR_31, "uartx", ((void*)0), 0, VAR_36);
 if (FUNC_3(VAR_34))
  return FUNC_4(VAR_34);
 VAR_20->hws[VAR_9] = VAR_34;


 VAR_34 = FUNC_8(VAR_31, "emmc_extclk_gate", "hpll", 0,
   VAR_28 + VAR_11, 15, 0,
   &VAR_21);
 if (FUNC_3(VAR_34))
  return FUNC_4(VAR_34);
 VAR_34 = FUNC_6(VAR_31, "emmc_extclk", "emmc_extclk_gate", 0,
   VAR_28 + VAR_11, 12, 3, 0,
   VAR_24,
   &VAR_21);
 if (FUNC_3(VAR_34))
  return FUNC_4(VAR_34);
 VAR_20->hws[VAR_3] = VAR_34;


 VAR_34 = FUNC_8(VAR_31, "sd_extclk_gate", "hpll", 0,
   VAR_28 + VAR_13, 31, 0,
   &VAR_21);
 if (FUNC_3(VAR_34))
  return FUNC_4(VAR_34);
 VAR_34 = FUNC_6(VAR_31, "sd_extclk", "sd_extclk_gate",
   0, VAR_28 + VAR_13, 28, 3, 0,
   VAR_24,
   &VAR_21);
 if (FUNC_3(VAR_34))
  return FUNC_4(VAR_34);
 VAR_20->hws[VAR_7] = VAR_34;


 VAR_34 = FUNC_6(VAR_31, "mac12", "hpll", 0,
   VAR_28 + VAR_11, 16, 3, 0,
   VAR_26,
   &VAR_21);
 if (FUNC_3(VAR_34))
  return FUNC_4(VAR_34);
 VAR_20->hws[VAR_5] = VAR_34;


 VAR_34 = FUNC_6(VAR_31, "mac34", "hpll", 0,
   VAR_28 + 0x310, 24, 3, 0,
   VAR_26,
   &VAR_21);
 if (FUNC_3(VAR_34))
  return FUNC_4(VAR_34);
 VAR_20->hws[VAR_6] = VAR_34;


 VAR_34 = FUNC_6(VAR_31, "lhclk", "hpll", 0,
   VAR_28 + VAR_11, 20, 3, 0,
   VAR_24,
   &VAR_21);
 if (FUNC_3(VAR_34))
  return FUNC_4(VAR_34);
 VAR_20->hws[VAR_4] = VAR_34;


 FUNC_14(VAR_33, VAR_11, FUNC_2(10, 8), FUNC_1(10));

 VAR_34 = FUNC_9(VAR_31, "d1clk", VAR_27,
   FUNC_0(VAR_27), 0,
   VAR_28 + VAR_11, 8, 3, 0,
   &VAR_21);
 if (FUNC_3(VAR_34))
  return FUNC_4(VAR_34);
 VAR_20->hws[VAR_1] = VAR_34;


 FUNC_15(VAR_33, 0x308, 0x12000);


 VAR_34 = FUNC_6(VAR_31, "bclk", "hpll", 0,
   VAR_28 + VAR_11, 20, 3, 0,
   VAR_24,
   &VAR_21);
 if (FUNC_3(VAR_34))
  return FUNC_4(VAR_34);
 VAR_20->hws[VAR_0] = VAR_34;


 VAR_34 = FUNC_9(VAR_31, "vclk", VAR_29,
   FUNC_0(VAR_29), 0,
   VAR_28 + VAR_12, 12, 3, 0,
   &VAR_21);
 if (FUNC_3(VAR_34))
  return FUNC_4(VAR_34);
 VAR_20->hws[VAR_10] = VAR_34;


 VAR_34 = FUNC_6(VAR_31, "eclk", ((void*)0), 0,
   VAR_28 + VAR_11, 28, 3, 0,
   VAR_25,
   &VAR_21);
 if (FUNC_3(VAR_34))
  return FUNC_4(VAR_34);
 VAR_20->hws[VAR_2] = VAR_34;

 for (VAR_37 = 0; VAR_37 < FUNC_0(VAR_22); VAR_37++) {
  const struct aspeed_gate_data *VAR_39 = &VAR_22[VAR_37];
  u32 VAR_40;





  VAR_40 = (VAR_39->clock_idx == 14) ? 0 : VAR_15;
  VAR_34 = FUNC_5(VAR_31,
    VAR_39->name,
    VAR_39->parent_name,
    VAR_39->flags,
    VAR_33,
    VAR_39->clock_idx,
    VAR_39->reset_idx,
    VAR_40,
    &VAR_21);
  if (FUNC_3(VAR_34))
   return FUNC_4(VAR_34);
  VAR_20->hws[VAR_37] = VAR_34;
 }

 return 0;
}
