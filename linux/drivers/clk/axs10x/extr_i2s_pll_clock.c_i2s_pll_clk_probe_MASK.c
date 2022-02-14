
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct i2s_pll_clk {TYPE_1__ hw; struct device* dev; struct clk* base; } ;
struct device_node {char* name; } ;
struct clk_init_data {char const* name; char const** parent_names; int num_parents; int * ops; } ;
struct clk {int dummy; } ;
typedef int init ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct device*,char*,char const*,int) ;
 struct clk* FUNC_3 (struct device*,TYPE_1__*) ;
 struct clk* FUNC_4 (struct device*,struct resource*) ;
 struct i2s_pll_clk* FUNC_5 (struct device*,int,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct clk_init_data*,int ,int) ;
 int FUNC_7 (struct device_node*,int ,struct clk*) ;
 char* FUNC_8 (struct device_node*,int ) ;
 int VAR_4 ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct device_node *VAR_7 = VAR_6->of_node;
 const char *VAR_8;
 const char *VAR_9;
 struct clk *VAR_10;
 struct i2s_pll_clk *VAR_11;
 struct clk_init_data VAR_12;
 struct resource *VAR_13;

 VAR_11 = FUNC_5(VAR_6, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_13 = FUNC_9(VAR_5, VAR_2, 0);
 VAR_11->base = FUNC_4(VAR_6, VAR_13);
 if (FUNC_0(VAR_11->base))
  return FUNC_1(VAR_11->base);

 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_8 = VAR_7->name;
 VAR_12.name = VAR_8;
 VAR_12.ops = &VAR_3;
 VAR_9 = FUNC_8(VAR_7, 0);
 VAR_12.parent_names = &VAR_9;
 VAR_12.num_parents = 1;
 VAR_11->hw.init = &VAR_12;
 VAR_11->dev = VAR_6;

 VAR_10 = FUNC_3(VAR_6, &VAR_11->hw);
 if (FUNC_0(VAR_10)) {
  FUNC_2(VAR_6, "failed to register %s clock (%ld)\n",
    VAR_8, FUNC_1(VAR_10));
  return FUNC_1(VAR_10);
 }

 return FUNC_7(VAR_7, VAR_4, VAR_10);
}
