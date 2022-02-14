
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {struct device* parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_7__ {int notifier_call; } ;
struct TYPE_5__ {struct clk_init_data* init; } ;
struct TYPE_6__ {TYPE_1__ hw; struct regmap* regmap; } ;
struct clk_regmap_mux_div {int reg_offset; int hid_width; int src_width; int src_shift; TYPE_3__ clk_nb; int pclk; TYPE_2__ clkr; int parent_map; scalar_t__ hid_shift; } ;
struct clk_init_data {char* name; int flags; int * ops; int num_parents; int parent_names; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_5 (struct device*,char*,int) ;
 struct regmap* FUNC_6 (struct device*,int *) ;
 int FUNC_7 (struct device*,int *) ;
 int FUNC_8 (struct device*,TYPE_2__*) ;
 struct clk_regmap_mux_div* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,int ,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (struct platform_device*,struct clk_regmap_mux_div*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct device *VAR_11 = VAR_10->parent;
 struct clk_regmap_mux_div *VAR_12;
 struct regmap *VAR_13;
 struct clk_init_data VAR_14 = { };
 int VAR_15 = -VAR_1;

 VAR_13 = FUNC_6(VAR_11, ((void*)0));
 if (!VAR_13) {
  FUNC_5(VAR_10, "failed to get regmap: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_12 = FUNC_9(VAR_10, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_14.name = "a53mux";
 VAR_14.parent_names = VAR_6;
 VAR_14.num_parents = FUNC_0(VAR_6);
 VAR_14.ops = &VAR_5;
 VAR_14.flags = VAR_0;

 VAR_12->clkr.hw.init = &VAR_14;
 VAR_12->clkr.regmap = VAR_13;
 VAR_12->reg_offset = 0x50;
 VAR_12->hid_width = 5;
 VAR_12->hid_shift = 0;
 VAR_12->src_width = 3;
 VAR_12->src_shift = 8;
 VAR_12->parent_map = VAR_7;

 VAR_12->pclk = FUNC_7(VAR_11, ((void*)0));
 if (FUNC_1(VAR_12->pclk)) {
  VAR_15 = FUNC_2(VAR_12->pclk);
  FUNC_5(VAR_10, "failed to get clk: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_12->clk_nb.notifier_call = VAR_4;
 VAR_15 = FUNC_3(VAR_12->pclk, &VAR_12->clk_nb);
 if (VAR_15) {
  FUNC_5(VAR_10, "failed to register clock notifier: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_8(VAR_10, &VAR_12->clkr);
 if (VAR_15) {
  FUNC_5(VAR_10, "failed to register regmap clock: %d\n", VAR_15);
  goto err;
 }

 VAR_15 = FUNC_10(VAR_10, VAR_8,
       &VAR_12->clkr.hw);
 if (VAR_15) {
  FUNC_5(VAR_10, "failed to add clock provider: %d\n", VAR_15);
  goto err;
 }

 FUNC_11(VAR_9, VAR_12);

 return 0;

err:
 FUNC_4(VAR_12->pclk, &VAR_12->clk_nb);
 return VAR_15;
}
