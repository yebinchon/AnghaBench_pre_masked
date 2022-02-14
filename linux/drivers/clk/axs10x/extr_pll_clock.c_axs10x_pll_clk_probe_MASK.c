
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {TYPE_1__* of_node; } ;
struct platform_device {struct device dev; } ;
struct clk_init_data {char const** parent_names; int num_parents; int name; int * ops; } ;
struct TYPE_6__ {struct clk_init_data* init; } ;
struct axs10x_pll_clk {TYPE_3__ hw; int pll_cfg; struct device* dev; void* lock; void* base; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_4 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,TYPE_3__*) ;
 void* FUNC_4 (struct device*,struct resource*) ;
 struct axs10x_pll_clk* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_3__*) ;
 char* FUNC_7 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_8 (struct device*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 const char *VAR_8;
 struct axs10x_pll_clk *VAR_9;
 struct resource *VAR_10;
 struct clk_init_data VAR_11 = { };
 int VAR_12;

 VAR_9 = FUNC_5(VAR_7, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_9(VAR_6, VAR_3, 0);
 VAR_9->base = FUNC_4(VAR_7, VAR_10);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_10 = FUNC_9(VAR_6, VAR_3, 1);
 VAR_9->lock = FUNC_4(VAR_7, VAR_10);
 if (FUNC_0(VAR_9->lock))
  return FUNC_1(VAR_9->lock);

 VAR_11.name = VAR_7->of_node->name;
 VAR_11.ops = &VAR_4;
 VAR_8 = FUNC_7(VAR_7->of_node, 0);
 VAR_11.parent_names = &VAR_8;
 VAR_11.num_parents = 1;
 VAR_9->hw.init = &VAR_11;
 VAR_9->dev = VAR_7;
 VAR_9->pll_cfg = FUNC_8(VAR_7);

 if (!VAR_9->pll_cfg) {
  FUNC_2(VAR_7, "No OF match data provided\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_3(VAR_7, &VAR_9->hw);
 if (VAR_12) {
  FUNC_2(VAR_7, "failed to register %s clock\n", VAR_11.name);
  return VAR_12;
 }

 return FUNC_6(VAR_7->of_node, VAR_5,
   &VAR_9->hw);
}
