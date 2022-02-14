
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {TYPE_1__* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_7__ {struct clk_init_data* init; } ;
struct hsdk_pll_clk {TYPE_4__ hw; int pll_devdata; struct device* dev; int regs; } ;
struct clk_init_data {unsigned int name; char const** parent_names; unsigned int num_parents; int * ops; } ;
struct TYPE_6__ {unsigned int name; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,TYPE_4__*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct hsdk_pll_clk* FUNC_5 (struct device*,int,int ) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_4__*) ;
 unsigned int FUNC_7 (TYPE_1__*) ;
 char* FUNC_8 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int FUNC_9 (struct device*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 int VAR_8;
 struct resource *VAR_9;
 const char *VAR_10;
 unsigned int VAR_11;
 struct hsdk_pll_clk *VAR_12;
 struct clk_init_data VAR_13 = { };
 struct device *VAR_14 = &VAR_7->dev;

 VAR_12 = FUNC_5(VAR_14, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_9 = FUNC_10(VAR_7, VAR_4, 0);
 VAR_12->regs = FUNC_4(VAR_14, VAR_9);
 if (FUNC_0(VAR_12->regs))
  return FUNC_1(VAR_12->regs);

 VAR_13.name = VAR_14->of_node->name;
 VAR_13.ops = &VAR_5;
 VAR_10 = FUNC_8(VAR_14->of_node, 0);
 VAR_13.parent_names = &VAR_10;
 VAR_11 = FUNC_7(VAR_14->of_node);
 if (VAR_11 == 0 || VAR_11 > VAR_0) {
  FUNC_2(VAR_14, "wrong clock parents number: %u\n", VAR_11);
  return -VAR_1;
 }
 VAR_13.num_parents = VAR_11;

 VAR_12->hw.init = &VAR_13;
 VAR_12->dev = VAR_14;
 VAR_12->pll_devdata = FUNC_9(VAR_14);

 if (!VAR_12->pll_devdata) {
  FUNC_2(VAR_14, "No OF match data provided\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_3(VAR_14, &VAR_12->hw);
 if (VAR_8) {
  FUNC_2(VAR_14, "failed to register %s clock\n", VAR_13.name);
  return VAR_8;
 }

 return FUNC_6(VAR_14->of_node, VAR_6,
   &VAR_12->hw);
}
