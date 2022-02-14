
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int clk_num; int * clks; } ;
struct pistachio_clk_provider {TYPE_1__ clk_data; int node; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (char*,unsigned int,int ) ;

void FUNC_4(struct pistachio_clk_provider *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->clk_data.clk_num; VAR_2++) {
  if (FUNC_0(VAR_1->clk_data.clks[VAR_2]))
   FUNC_3("Failed to register clock %d: %ld\n", VAR_2,
    FUNC_1(VAR_1->clk_data.clks[VAR_2]));
 }

 FUNC_2(VAR_1->node, VAR_0, &VAR_1->clk_data);
}
