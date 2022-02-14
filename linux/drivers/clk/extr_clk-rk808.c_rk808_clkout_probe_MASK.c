
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct clk_init_data* init; } ;
struct rk808_clkout {TYPE_4__ clkout2_hw; TYPE_4__ clkout1_hw; struct rk808* rk808; } ;
struct rk808 {int variant; struct i2c_client* i2c; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct clk_init_data {char* name; int * ops; scalar_t__ num_parents; int * parent_names; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rk808* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 struct rk808_clkout* FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,struct rk808_clkout*) ;
 int VAR_2 ;
 int FUNC_4 (struct device_node*,char*,int,char**) ;
 int VAR_3 ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct rk808 *VAR_5 = FUNC_0(VAR_4->dev.parent);
 struct i2c_client *VAR_6 = VAR_5->i2c;
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 struct clk_init_data VAR_8 = {};
 struct rk808_clkout *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(&VAR_6->dev,
        sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->rk808 = VAR_5;

 VAR_8.parent_names = ((void*)0);
 VAR_8.num_parents = 0;
 VAR_8.name = "rk808-clkout1";
 VAR_8.ops = &VAR_3;
 VAR_9->clkout1_hw.init = &VAR_8;


 FUNC_4(VAR_7, "clock-output-names",
          0, &VAR_8.name);

 VAR_10 = FUNC_1(&VAR_6->dev, &VAR_9->clkout1_hw);
 if (VAR_10)
  return VAR_10;

 VAR_8.name = "rk808-clkout2";
 VAR_8.ops = FUNC_5(VAR_5->variant);
 VAR_9->clkout2_hw.init = &VAR_8;


 FUNC_4(VAR_7, "clock-output-names",
          1, &VAR_8.name);

 VAR_10 = FUNC_1(&VAR_6->dev, &VAR_9->clkout2_hw);
 if (VAR_10)
  return VAR_10;

 return FUNC_3(&VAR_4->dev, VAR_2,
        VAR_9);
}
