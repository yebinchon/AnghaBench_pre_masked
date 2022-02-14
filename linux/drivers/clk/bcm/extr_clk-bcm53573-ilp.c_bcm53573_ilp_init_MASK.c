
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device_node {int name; } ;
struct clk_init_data {char const** parent_names; int num_parents; int * ops; int name; } ;
struct TYPE_4__ {struct clk_init_data* init; } ;
struct bcm53573_ilp {TYPE_1__ hw; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct bcm53573_ilp*) ;
 struct bcm53573_ilp* FUNC_5 (int,int ) ;
 int FUNC_6 (struct device_node*,int ,TYPE_1__*) ;
 char* FUNC_7 (struct device_node*,int ) ;
 int VAR_3 ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct device_node *VAR_4)
{
 struct bcm53573_ilp *VAR_5;
 struct clk_init_data VAR_6 = { };
 const char *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return;

 VAR_7 = FUNC_7(VAR_4, 0);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto err_free_ilp;
 }

 VAR_5->regmap = FUNC_10(FUNC_8(VAR_4));
 if (FUNC_0(VAR_5->regmap)) {
  VAR_8 = FUNC_1(VAR_5->regmap);
  goto err_free_ilp;
 }

 VAR_6.name = VAR_4->name;
 VAR_6.ops = &VAR_2;
 VAR_6.parent_names = &VAR_7;
 VAR_6.num_parents = 1;

 VAR_5->hw.init = &VAR_6;
 VAR_8 = FUNC_2(((void*)0), &VAR_5->hw);
 if (VAR_8)
  goto err_free_ilp;

 VAR_8 = FUNC_6(VAR_4, VAR_3, &VAR_5->hw);
 if (VAR_8)
  goto err_clk_hw_unregister;

 return;

err_clk_hw_unregister:
 FUNC_3(&VAR_5->hw);
err_free_ilp:
 FUNC_4(VAR_5);
 FUNC_9("Failed to init ILP clock: %d\n", VAR_8);
}
