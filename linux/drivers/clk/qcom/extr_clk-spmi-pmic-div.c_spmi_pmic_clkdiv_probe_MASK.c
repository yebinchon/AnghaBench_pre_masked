
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spmi_pmic_div_clk_cc {int nclks; struct clkdiv* clks; } ;
struct regmap {int dummy; } ;
struct device {int parent; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct clkdiv {int base; int cxo_period_ns; TYPE_1__ hw; struct regmap* regmap; int lock; } ;
struct clk_init_data {char* name; char const** parent_names; int num_parents; int * ops; } ;
struct clk {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_5 ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct device*,char*,...) ;
 struct regmap* FUNC_6 (int ,int *) ;
 int FUNC_7 (struct device*,TYPE_1__*) ;
 struct spmi_pmic_div_clk_cc* FUNC_8 (struct device*,int ,int ) ;
 int FUNC_9 (struct device*,int ,struct spmi_pmic_div_clk_cc*) ;
 char* FUNC_10 (struct device_node*,int ) ;
 int FUNC_11 (struct device_node*,char*,int*) ;
 int FUNC_12 (char*,int,char*,int) ;
 int FUNC_13 (int *) ;
 int VAR_8 ;
 int FUNC_14 (struct spmi_pmic_div_clk_cc*,int ,int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_9)
{
 struct spmi_pmic_div_clk_cc *VAR_10;
 struct clk_init_data VAR_11 = {};
 struct clkdiv *VAR_12;
 struct clk *VAR_13;
 struct regmap *VAR_14;
 struct device *VAR_15 = &VAR_9->dev;
 struct device_node *VAR_16 = VAR_15->of_node;
 const char *VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 char VAR_22[20];
 u32 VAR_23;

 VAR_20 = FUNC_11(VAR_16, "reg", &VAR_23);
 if (VAR_20 < 0) {
  FUNC_5(VAR_15, "reg property reading failed\n");
  return VAR_20;
 }

 VAR_14 = FUNC_6(VAR_15->parent, ((void*)0));
 if (!VAR_14) {
  FUNC_5(VAR_15, "Couldn't get parent's regmap\n");
  return -VAR_0;
 }

 VAR_20 = FUNC_11(VAR_16, "qcom,num-clkdivs", &VAR_18);
 if (VAR_20 < 0) {
  FUNC_5(VAR_15, "qcom,num-clkdivs property reading failed, ret=%d\n",
   VAR_20);
  return VAR_20;
 }

 if (!VAR_18)
  return -VAR_0;

 VAR_10 = FUNC_8(VAR_15, FUNC_14(VAR_10, VAR_7, VAR_18), VAR_4);
 if (!VAR_10)
  return -VAR_2;
 VAR_10->nclks = VAR_18;

 VAR_13 = FUNC_2(VAR_15, "xo");
 if (FUNC_0(VAR_13)) {
  VAR_20 = FUNC_1(VAR_13);
  if (VAR_20 != -VAR_3)
   FUNC_5(VAR_15, "failed to get xo clock\n");
  return VAR_20;
 }
 VAR_21 = FUNC_3(VAR_13);
 FUNC_4(VAR_13);

 VAR_17 = FUNC_10(VAR_16, 0);
 if (!VAR_17) {
  FUNC_5(VAR_15, "missing parent clock\n");
  return -VAR_1;
 }

 VAR_11.name = VAR_22;
 VAR_11.parent_names = &VAR_17;
 VAR_11.num_parents = 1;
 VAR_11.ops = &VAR_6;

 for (VAR_19 = 0, VAR_12 = VAR_10->clks; VAR_19 < VAR_18; VAR_19++) {
  FUNC_12(VAR_22, sizeof(VAR_22), "div_clk%d", VAR_19 + 1);

  FUNC_13(&VAR_12[VAR_19].lock);
  VAR_12[VAR_19].base = VAR_23 + VAR_19 * 0x100;
  VAR_12[VAR_19].regmap = VAR_14;
  VAR_12[VAR_19].cxo_period_ns = VAR_5 / VAR_21;
  VAR_12[VAR_19].hw.init = &VAR_11;

  VAR_20 = FUNC_7(VAR_15, &VAR_12[VAR_19].hw);
  if (VAR_20)
   return VAR_20;
 }

 return FUNC_9(VAR_15, VAR_8, VAR_10);
}
