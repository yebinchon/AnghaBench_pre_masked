
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clk_num; struct clk** clks; } ;
struct mmp_clk_unit {int nr_clks; TYPE_1__ clk_data; struct clk** clk_table; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk** FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct device_node*,int ,TYPE_1__*) ;
 int VAR_1 ;

void FUNC_2(struct device_node *VAR_2, struct mmp_clk_unit *VAR_3,
  int VAR_4)
{
 struct clk **VAR_5;

 VAR_5 = FUNC_0(VAR_4, sizeof(struct clk *), VAR_0);
 if (!VAR_5)
  return;

 VAR_3->clk_table = VAR_5;
 VAR_3->nr_clks = VAR_4;
 VAR_3->clk_data.clks = VAR_5;
 VAR_3->clk_data.clk_num = VAR_4;
 FUNC_1(VAR_2, VAR_1, &VAR_3->clk_data);
}
