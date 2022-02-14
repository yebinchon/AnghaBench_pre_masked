
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
struct aspeed_clk_soc_data {int eclk_div_table; int div_table; int mac_div_table; struct regmap* (* calc_pll ) (char*,int) ;} ;
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
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_2__* VAR_19 ;
 struct regmap* FUNC_3 (struct device*,int ,int ,int ,struct regmap*,int,int ,int,int *) ;
 int VAR_20 ;
 struct aspeed_gate_data* VAR_21 ;
 int VAR_22 ;
 struct aspeed_gate_data* VAR_23 ;
 struct regmap* FUNC_4 (struct device*,char*,char*,int ,scalar_t__,int,int,int ,int ,int *) ;
 struct regmap* FUNC_5 (struct device*,char*,char*,int ,int) ;
 struct regmap* FUNC_6 (struct device*,char*,char*,int ,scalar_t__,int,int ,int *) ;
 struct regmap* FUNC_7 (struct device*,char*,struct aspeed_gate_data*,int,int ,scalar_t__,int,int,int ,int *) ;
 int FUNC_8 (struct device*,char*) ;
 struct aspeed_reset* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,TYPE_1__*) ;
 struct aspeed_gate_data* VAR_24 ;
 struct aspeed_clk_soc_data* FUNC_11 (struct device*) ;
 int FUNC_12 (struct regmap*,int ,int*) ;
 scalar_t__ VAR_25 ;
 struct regmap* FUNC_13 (char*,int) ;
 struct regmap* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_26)
{
 const struct aspeed_clk_soc_data *VAR_27;
 struct device *VAR_28 = &VAR_26->dev;
 struct aspeed_reset *VAR_29;
 struct regmap *VAR_30;
 struct clk_hw *VAR_31;
 u32 VAR_32, VAR_33;
 int VAR_34, VAR_35;

 VAR_30 = FUNC_14(VAR_28->of_node);
 if (FUNC_1(VAR_30)) {
  FUNC_8(VAR_28, "no syscon regmap\n");
  return FUNC_2(VAR_30);
 }

 VAR_29 = FUNC_9(VAR_28, sizeof(*VAR_29), VAR_16);
 if (!VAR_29)
  return -VAR_15;

 VAR_29->map = VAR_30;
 VAR_29->rcdev.owner = VAR_17;
 VAR_29->rcdev.nr_resets = FUNC_0(VAR_23);
 VAR_29->rcdev.ops = &VAR_22;
 VAR_29->rcdev.of_node = VAR_28->of_node;

 VAR_35 = FUNC_10(VAR_28, &VAR_29->rcdev);
 if (VAR_35) {
  FUNC_8(VAR_28, "could not register reset controller\n");
  return VAR_35;
 }


 VAR_27 = FUNC_11(VAR_28);
 if (!VAR_27) {
  FUNC_8(VAR_28, "no match data for platform\n");
  return -VAR_14;
 }


 FUNC_12(VAR_30, VAR_11, &VAR_32);
 if (VAR_32 & VAR_18)
  VAR_33 = 24000000 / 13;
 else
  VAR_33 = 24000000;

 VAR_31 = FUNC_5(VAR_28, "uart", ((void*)0), 0, VAR_33);
 if (FUNC_1(VAR_31))
  return FUNC_2(VAR_31);
 VAR_19->hws[VAR_10] = VAR_31;





 FUNC_12(VAR_30, VAR_12, &VAR_32);
 VAR_31 = VAR_27->calc_pll("mpll", VAR_32);
 if (FUNC_1(VAR_31))
  return FUNC_2(VAR_31);
 VAR_19->hws[VAR_6] = VAR_31;


 VAR_31 = FUNC_6(VAR_28, "sd_extclk_gate", "hpll", 0,
      VAR_25 + VAR_8, 15, 0,
      &VAR_20);
 if (FUNC_1(VAR_31))
  return FUNC_2(VAR_31);
 VAR_31 = FUNC_4(VAR_28, "sd_extclk", "sd_extclk_gate",
   0, VAR_25 + VAR_8, 12, 3, 0,
   VAR_27->div_table,
   &VAR_20);
 if (FUNC_1(VAR_31))
  return FUNC_2(VAR_31);
 VAR_19->hws[VAR_7] = VAR_31;


 VAR_31 = FUNC_4(VAR_28, "mac", "hpll", 0,
   VAR_25 + VAR_8, 16, 3, 0,
   VAR_27->mac_div_table,
   &VAR_20);
 if (FUNC_1(VAR_31))
  return FUNC_2(VAR_31);
 VAR_19->hws[VAR_5] = VAR_31;


 VAR_31 = FUNC_4(VAR_28, "lhclk", "hpll", 0,
   VAR_25 + VAR_8, 20, 3, 0,
   VAR_27->div_table,
   &VAR_20);
 if (FUNC_1(VAR_31))
  return FUNC_2(VAR_31);
 VAR_19->hws[VAR_4] = VAR_31;


 VAR_31 = FUNC_4(VAR_28, "bclk", "hpll", 0,
   VAR_25 + VAR_9, 0, 2, 0,
   VAR_27->div_table,
   &VAR_20);
 if (FUNC_1(VAR_31))
  return FUNC_2(VAR_31);
 VAR_19->hws[VAR_1] = VAR_31;


 VAR_31 = FUNC_5(((void*)0), "fixed-24m", "clkin",
     0, 24000000);
 if (FUNC_1(VAR_31))
  return FUNC_2(VAR_31);
 VAR_19->hws[VAR_0] = VAR_31;

 VAR_31 = FUNC_7(VAR_28, "eclk-mux", VAR_24,
     FUNC_0(VAR_24), 0,
     VAR_25 + VAR_8, 2, 0x3, 0,
     &VAR_20);
 if (FUNC_1(VAR_31))
  return FUNC_2(VAR_31);
 VAR_19->hws[VAR_3] = VAR_31;

 VAR_31 = FUNC_4(VAR_28, "eclk", "eclk-mux", 0,
        VAR_25 + VAR_8, 28,
        3, 0, VAR_27->eclk_div_table,
        &VAR_20);
 if (FUNC_1(VAR_31))
  return FUNC_2(VAR_31);
 VAR_19->hws[VAR_2] = VAR_31;
 for (VAR_34 = 0; VAR_34 < FUNC_0(VAR_21); VAR_34++) {
  const struct aspeed_gate_data *VAR_36 = &VAR_21[VAR_34];
  u32 VAR_37;




  VAR_37 = (VAR_36->clock_idx == 14) ? 0 : VAR_13;
  VAR_31 = FUNC_3(VAR_28,
    VAR_36->name,
    VAR_36->parent_name,
    VAR_36->flags,
    VAR_30,
    VAR_36->clock_idx,
    VAR_36->reset_idx,
    VAR_37,
    &VAR_20);
  if (FUNC_1(VAR_31))
   return FUNC_2(VAR_31);
  VAR_19->hws[VAR_34] = VAR_31;
 }

 return 0;
}
