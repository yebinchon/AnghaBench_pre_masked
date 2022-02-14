
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pistachio_mux {size_t id; int num_parents; int shift; scalar_t__ reg; int parents; int name; } ;
struct TYPE_2__ {struct clk** clks; } ;
struct pistachio_clk_provider {TYPE_1__ clk_data; scalar_t__ base; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int *,int ,int ,int ,int ,scalar_t__,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct pistachio_clk_provider *VAR_1,
    struct pistachio_mux *VAR_2,
    unsigned int VAR_3)
{
 struct clk *VAR_4;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = FUNC_0(((void*)0), VAR_2[VAR_5].name, VAR_2[VAR_5].parents,
           VAR_2[VAR_5].num_parents,
           VAR_0,
           VAR_1->base + VAR_2[VAR_5].reg, VAR_2[VAR_5].shift,
           FUNC_1(VAR_2[VAR_5].num_parents),
           0, ((void*)0));
  VAR_1->clk_data.clks[VAR_2[VAR_5].id] = VAR_4;
 }
}
