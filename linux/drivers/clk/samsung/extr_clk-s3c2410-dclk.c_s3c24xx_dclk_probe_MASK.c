
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct s3c24xx_dclk_drv_data {int clkout1_num_parents; int clkout1_parent_names; int clkout0_num_parents; int clkout0_parent_names; int mux_num_parents; int mux_parent_names; } ;
struct TYPE_8__ {int notifier_call; } ;
struct TYPE_6__ {int num; struct clk_hw** hws; } ;
struct s3c24xx_dclk {TYPE_3__ dclk0_div_change_nb; TYPE_3__ dclk1_div_change_nb; int dclk_lock; struct clk_hw* base; TYPE_1__ clk_data; int * dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct clk_hw {int clk; } ;
struct TYPE_9__ {int hws; } ;
struct TYPE_7__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct clk_hw*) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_1 (struct clk_hw*) ;
 TYPE_5__ VAR_13 ;
 int FUNC_2 (struct clk_hw*,char*,int *) ;
 struct clk_hw* FUNC_3 (int *,char*,char*,int ,struct clk_hw*,int,int,int ,int *) ;
 struct clk_hw* FUNC_4 (int *,char*,char*,int ,struct clk_hw*,int,int ,int *) ;
 struct clk_hw* FUNC_5 (int *,char*,int ,int ,int ,struct clk_hw*,int,int,int ,int *) ;
 int FUNC_6 (struct clk_hw*) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (int ,TYPE_3__*) ;
 int FUNC_9 (int *,char*,int) ;
 struct clk_hw* FUNC_10 (int *,struct resource*) ;
 struct s3c24xx_dclk* FUNC_11 (int *,int ,int ) ;
 TYPE_2__* FUNC_12 (struct platform_device*) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct s3c24xx_dclk*) ;
 int VAR_14 ;
 int VAR_15 ;
 struct clk_hw* FUNC_15 (int *,char*,int ,int ,int,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct s3c24xx_dclk*,int ,int) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_16)
{
 struct s3c24xx_dclk *VAR_17;
 struct resource *VAR_18;
 struct s3c24xx_dclk_drv_data *VAR_19;
 struct clk_hw **VAR_20;
 int VAR_21, VAR_22;

 VAR_17 = FUNC_11(&VAR_16->dev,
        FUNC_17(VAR_17, VAR_13.hws,
      VAR_1),
        VAR_7);
 if (!VAR_17)
  return -VAR_4;

 VAR_20 = VAR_17->clk_data.hws;

 VAR_17->dev = &VAR_16->dev;
 VAR_17->clk_data.num = VAR_1;
 FUNC_14(VAR_16, VAR_17);
 FUNC_16(&VAR_17->dclk_lock);

 VAR_18 = FUNC_13(VAR_16, VAR_8, 0);
 VAR_17->base = FUNC_10(&VAR_16->dev, VAR_18);
 if (FUNC_0(VAR_17->base))
  return FUNC_1(VAR_17->base);

 VAR_19 = (struct s3c24xx_dclk_drv_data *)
    FUNC_12(VAR_16)->driver_data;


 VAR_20[VAR_11] = FUNC_5(&VAR_16->dev, "mux_dclk0",
    VAR_19->mux_parent_names,
    VAR_19->mux_num_parents, 0,
    VAR_17->base, 1, 1, 0,
    &VAR_17->dclk_lock);
 VAR_20[VAR_12] = FUNC_5(&VAR_16->dev, "mux_dclk1",
    VAR_19->mux_parent_names,
    VAR_19->mux_num_parents, 0,
    VAR_17->base, 17, 1, 0,
    &VAR_17->dclk_lock);

 VAR_20[VAR_2] = FUNC_3(&VAR_16->dev, "div_dclk0",
    "mux_dclk0", 0, VAR_17->base,
    4, 4, 0, &VAR_17->dclk_lock);
 VAR_20[VAR_3] = FUNC_3(&VAR_16->dev, "div_dclk1",
    "mux_dclk1", 0, VAR_17->base,
    20, 4, 0, &VAR_17->dclk_lock);

 VAR_20[VAR_5] = FUNC_4(&VAR_16->dev, "gate_dclk0",
    "div_dclk0", VAR_0,
    VAR_17->base, 0, 0,
    &VAR_17->dclk_lock);
 VAR_20[VAR_6] = FUNC_4(&VAR_16->dev, "gate_dclk1",
    "div_dclk1", VAR_0,
    VAR_17->base, 16, 0,
    &VAR_17->dclk_lock);

 VAR_20[VAR_9] = FUNC_15(&VAR_16->dev,
    "clkout0", VAR_19->clkout0_parent_names,
    VAR_19->clkout0_num_parents, 4, 7);
 VAR_20[VAR_10] = FUNC_15(&VAR_16->dev,
    "clkout1", VAR_19->clkout1_parent_names,
    VAR_19->clkout1_num_parents, 8, 7);

 for (VAR_22 = 0; VAR_22 < VAR_1; VAR_22++)
  if (FUNC_0(VAR_20[VAR_22])) {
   FUNC_9(&VAR_16->dev, "clock %d failed to register\n", VAR_22);
   VAR_21 = FUNC_1(VAR_20[VAR_22]);
   goto err_clk_register;
  }

 VAR_21 = FUNC_2(VAR_20[VAR_11], "dclk0", ((void*)0));
 if (!VAR_21)
  VAR_21 = FUNC_2(VAR_20[VAR_12], "dclk1",
          ((void*)0));
 if (!VAR_21)
  VAR_21 = FUNC_2(VAR_20[VAR_9],
          "clkout0", ((void*)0));
 if (!VAR_21)
  VAR_21 = FUNC_2(VAR_20[VAR_10],
          "clkout1", ((void*)0));
 if (VAR_21) {
  FUNC_9(&VAR_16->dev, "failed to register aliases, %d\n", VAR_21);
  goto err_clk_register;
 }

 VAR_17->dclk0_div_change_nb.notifier_call =
      VAR_14;

 VAR_17->dclk1_div_change_nb.notifier_call =
      VAR_15;

 VAR_21 = FUNC_7(VAR_20[VAR_2]->clk,
        &VAR_17->dclk0_div_change_nb);
 if (VAR_21)
  goto err_clk_register;

 VAR_21 = FUNC_7(VAR_20[VAR_3]->clk,
        &VAR_17->dclk1_div_change_nb);
 if (VAR_21)
  goto err_dclk_notify;

 return 0;

err_dclk_notify:
 FUNC_8(VAR_20[VAR_2]->clk,
    &VAR_17->dclk0_div_change_nb);
err_clk_register:
 for (VAR_22 = 0; VAR_22 < VAR_1; VAR_22++)
  if (VAR_20[VAR_22] && !FUNC_0(VAR_20[VAR_22]))
   FUNC_6(VAR_20[VAR_22]);

 return VAR_21;
}
