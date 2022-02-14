
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct lochnagar_config {int nparents; int parents; int clks; } ;
struct lochnagar_clk_priv {struct lochnagar_clk* lclks; int regmap; struct device* dev; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct lochnagar_clk {scalar_t__ name; TYPE_1__ hw; struct lochnagar_clk_priv* priv; } ;
struct clk_init_data {scalar_t__ name; int num_parents; int parent_data; int * ops; } ;


 int FUNC_0 (struct lochnagar_clk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct device*,TYPE_1__*) ;
 struct lochnagar_clk_priv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int ,struct lochnagar_clk_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct lochnagar_clk*,int ,int) ;
 struct of_device_id* FUNC_7 (int ,struct device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct clk_init_data VAR_7 = {
  .ops = &VAR_3,
 };
 struct device *VAR_8 = &VAR_6->dev;
 struct lochnagar_clk_priv *VAR_9;
 const struct of_device_id *VAR_10;
 struct lochnagar_clk *VAR_11;
 struct lochnagar_config *VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = FUNC_7(VAR_5, VAR_8);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = VAR_8;
 VAR_9->regmap = FUNC_2(VAR_8->parent, ((void*)0));
 VAR_12 = (struct lochnagar_config *)VAR_10->data;

 FUNC_6(VAR_9->lclks, VAR_12->clks, sizeof(VAR_9->lclks));

 VAR_7.parent_data = VAR_12->parents;
 VAR_7.num_parents = VAR_12->nparents;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_9->lclks); VAR_14++) {
  VAR_11 = &VAR_9->lclks[VAR_14];

  if (!VAR_11->name)
   continue;

  VAR_7.name = VAR_11->name;

  VAR_11->priv = VAR_9;
  VAR_11->hw.init = &VAR_7;

  VAR_13 = FUNC_3(VAR_8, &VAR_11->hw);
  if (VAR_13) {
   FUNC_1(VAR_8, "Failed to register %s: %d\n",
    VAR_11->name, VAR_13);
   return VAR_13;
  }
 }

 VAR_13 = FUNC_5(VAR_8, VAR_4, VAR_9);
 if (VAR_13 < 0)
  FUNC_1(VAR_8, "Failed to register provider: %d\n", VAR_13);

 return VAR_13;
}
