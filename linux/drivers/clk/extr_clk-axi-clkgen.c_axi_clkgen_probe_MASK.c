
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_13__ {TYPE_1__* of_node; } ;
struct platform_device {TYPE_7__ dev; } ;
struct of_device_id {int dummy; } ;
struct clk_init_data {int num_parents; char const* name; int flags; char const** parent_names; int * ops; } ;
struct TYPE_12__ {struct clk_init_data* init; } ;
struct axi_clkgen {TYPE_6__ clk_hw; int base; } ;
struct TYPE_11__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (struct axi_clkgen*,int) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_7__*,struct resource*) ;
 struct axi_clkgen* FUNC_5 (TYPE_7__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_6__*) ;
 int FUNC_7 (TYPE_1__*) ;
 char* FUNC_8 (TYPE_1__*,unsigned int) ;
 int VAR_9 ;
 struct of_device_id* FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*,char const**) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_10)
{
 const struct of_device_id *VAR_11;
 struct axi_clkgen *VAR_12;
 struct clk_init_data VAR_13;
 const char *VAR_14[2];
 const char *VAR_15;
 struct resource *VAR_16;
 unsigned int VAR_17;
 int VAR_18;

 if (!VAR_10->dev.of_node)
  return -VAR_3;

 VAR_11 = FUNC_9(VAR_7, VAR_10->dev.of_node);
 if (!VAR_11)
  return -VAR_3;

 VAR_12 = FUNC_5(&VAR_10->dev, sizeof(*VAR_12), VAR_5);
 if (!VAR_12)
  return -VAR_4;

 VAR_16 = FUNC_11(VAR_10, VAR_6, 0);
 VAR_12->base = FUNC_4(&VAR_10->dev, VAR_16);
 if (FUNC_0(VAR_12->base))
  return FUNC_1(VAR_12->base);

 VAR_13.num_parents = FUNC_7(VAR_10->dev.of_node);
 if (VAR_13.num_parents < 1 || VAR_13.num_parents > 2)
  return -VAR_2;

 for (VAR_17 = 0; VAR_17 < VAR_13.num_parents; VAR_17++) {
  VAR_14[VAR_17] = FUNC_8(VAR_10->dev.of_node, VAR_17);
  if (!VAR_14[VAR_17])
   return -VAR_2;
 }

 VAR_15 = VAR_10->dev.of_node->name;
 FUNC_10(VAR_10->dev.of_node, "clock-output-names",
  &VAR_15);

 VAR_13.name = VAR_15;
 VAR_13.ops = &VAR_8;
 VAR_13.flags = VAR_1 | VAR_0;
 VAR_13.parent_names = VAR_14;

 FUNC_2(VAR_12, 0);

 VAR_12->clk_hw.init = &VAR_13;
 VAR_18 = FUNC_3(&VAR_10->dev, &VAR_12->clk_hw);
 if (VAR_18)
  return VAR_18;

 return FUNC_6(VAR_10->dev.of_node, VAR_9,
          &VAR_12->clk_hw);
}
