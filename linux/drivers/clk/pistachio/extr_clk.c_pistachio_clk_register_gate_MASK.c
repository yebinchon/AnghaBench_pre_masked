
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pistachio_gate {size_t id; int shift; scalar_t__ reg; int parent; int name; } ;
struct TYPE_2__ {struct clk** clks; } ;
struct pistachio_clk_provider {TYPE_1__ clk_data; scalar_t__ base; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int *,int ,int ,int ,scalar_t__,int ,int ,int *) ;

void FUNC_1(struct pistachio_clk_provider *VAR_1,
     struct pistachio_gate *VAR_2,
     unsigned int VAR_3)
{
 struct clk *VAR_4;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = FUNC_0(((void*)0), VAR_2[VAR_5].name, VAR_2[VAR_5].parent,
     VAR_0,
     VAR_1->base + VAR_2[VAR_5].reg, VAR_2[VAR_5].shift,
     0, ((void*)0));
  VAR_1->clk_data.clks[VAR_2[VAR_5].id] = VAR_4;
 }
}
