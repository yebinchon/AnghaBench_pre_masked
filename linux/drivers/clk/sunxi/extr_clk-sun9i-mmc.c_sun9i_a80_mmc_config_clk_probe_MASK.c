
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nr_resets; struct device_node* of_node; int * ops; int owner; } ;
struct clk_onecell_data {int clk_num; scalar_t__* clks; } ;
struct sun9i_mmc_clk_data {scalar_t__ reset; TYPE_1__ rcdev; int lock; scalar_t__ membase; scalar_t__ clk; struct clk_onecell_data clk_data; } ;
struct resource {int dummy; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {char* name; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,char const*,char const*,int ,scalar_t__,int ,int ,int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*,char*,...) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,struct resource*) ;
 scalar_t__* FUNC_9 (TYPE_2__*,int,int,int ) ;
 struct sun9i_mmc_clk_data* FUNC_10 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (struct device_node*,int ,struct clk_onecell_data*) ;
 int FUNC_13 (struct device_node*) ;
 int VAR_6 ;
 int FUNC_14 (struct device_node*,char*,int,char const**) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct sun9i_mmc_clk_data*) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (struct resource*) ;
 int FUNC_21 (int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev.of_node;
 struct sun9i_mmc_clk_data *VAR_10;
 struct clk_onecell_data *VAR_11;
 const char *VAR_12 = VAR_9->name;
 const char *VAR_13;
 struct resource *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_10 = FUNC_10(&VAR_8->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_21(&VAR_10->lock);

 VAR_14 = FUNC_15(VAR_8, VAR_2, 0);

 VAR_15 = FUNC_0((FUNC_20(VAR_14)), VAR_4);
 VAR_10->membase = FUNC_8(&VAR_8->dev, VAR_14);
 if (FUNC_1(VAR_10->membase))
  return FUNC_2(VAR_10->membase);

 VAR_11 = &VAR_10->clk_data;
 VAR_11->clk_num = VAR_15;
 VAR_11->clks = FUNC_9(&VAR_8->dev, VAR_15, sizeof(struct clk *),
          VAR_1);
 if (!VAR_11->clks)
  return -VAR_0;

 VAR_10->clk = FUNC_7(&VAR_8->dev, ((void*)0));
 if (FUNC_1(VAR_10->clk)) {
  FUNC_6(&VAR_8->dev, "Could not get clock\n");
  return FUNC_2(VAR_10->clk);
 }

 VAR_10->reset = FUNC_11(&VAR_8->dev, ((void*)0));
 if (FUNC_1(VAR_10->reset)) {
  FUNC_6(&VAR_8->dev, "Could not get reset control\n");
  return FUNC_2(VAR_10->reset);
 }

 VAR_17 = FUNC_18(VAR_10->reset);
 if (VAR_17) {
  FUNC_6(&VAR_8->dev, "Reset deassert err %d\n", VAR_17);
  return VAR_17;
 }

 VAR_13 = FUNC_3(VAR_10->clk);
 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  FUNC_14(VAR_9, "clock-output-names",
           VAR_16, &VAR_12);

  VAR_11->clks[VAR_16] = FUNC_4(&VAR_8->dev, VAR_12,
            VAR_13, 0,
            VAR_10->membase + VAR_4 * VAR_16,
            VAR_3, 0,
            &VAR_10->lock);

  if (FUNC_1(VAR_11->clks[VAR_16])) {
   VAR_17 = FUNC_2(VAR_11->clks[VAR_16]);
   goto err_clk_register;
  }
 }

 VAR_17 = FUNC_12(VAR_9, VAR_6, VAR_11);
 if (VAR_17)
  goto err_clk_provider;

 VAR_10->rcdev.owner = VAR_5;
 VAR_10->rcdev.nr_resets = VAR_15;
 VAR_10->rcdev.ops = &VAR_7;
 VAR_10->rcdev.of_node = VAR_8->dev.of_node;

 VAR_17 = FUNC_19(&VAR_10->rcdev);
 if (VAR_17)
  goto err_rc_reg;

 FUNC_16(VAR_8, VAR_10);

 return 0;

err_rc_reg:
 FUNC_13(VAR_9);

err_clk_provider:
 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
  FUNC_5(VAR_11->clks[VAR_16]);

err_clk_register:
 FUNC_17(VAR_10->reset);

 return VAR_17;
}
