
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int clk_num; struct pistachio_clk_provider* clks; } ;
struct pistachio_clk_provider {TYPE_1__ clk_data; int base; struct device_node* node; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct pistachio_clk_provider* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (struct pistachio_clk_provider*) ;
 struct pistachio_clk_provider* FUNC_2 (int,int ) ;
 int FUNC_3 (struct device_node*,int ) ;
 int FUNC_4 (char*) ;

struct pistachio_clk_provider *
FUNC_5(struct device_node *VAR_1, unsigned int VAR_2)
{
 struct pistachio_clk_provider *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return VAR_3;

 VAR_3->clk_data.clks = FUNC_0(VAR_2, sizeof(struct clk *), VAR_0);
 if (!VAR_3->clk_data.clks)
  goto free_provider;
 VAR_3->clk_data.clk_num = VAR_2;
 VAR_3->node = VAR_1;
 VAR_3->base = FUNC_3(VAR_1, 0);
 if (!VAR_3->base) {
  FUNC_4("Failed to map clock provider registers\n");
  goto free_clks;
 }

 return VAR_3;

free_clks:
 FUNC_1(VAR_3->clk_data.clks);
free_provider:
 FUNC_1(VAR_3);
 return ((void*)0);
}
