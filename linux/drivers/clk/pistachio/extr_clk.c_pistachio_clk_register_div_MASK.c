
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pistachio_div {size_t id; int div_flags; int width; scalar_t__ reg; int parent; int name; } ;
struct TYPE_2__ {struct clk** clks; } ;
struct pistachio_clk_provider {TYPE_1__ clk_data; scalar_t__ base; } ;
struct clk {int dummy; } ;


 struct clk* FUNC_0 (int *,int ,int ,int ,scalar_t__,int ,int ,int ,int *) ;

void FUNC_1(struct pistachio_clk_provider *VAR_0,
    struct pistachio_div *VAR_1,
    unsigned int VAR_2)
{
 struct clk *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_0(((void*)0), VAR_1[VAR_4].name, VAR_1[VAR_4].parent,
        0, VAR_0->base + VAR_1[VAR_4].reg, 0,
        VAR_1[VAR_4].width, VAR_1[VAR_4].div_flags,
        ((void*)0));
  VAR_0->clk_data.clks[VAR_1[VAR_4].id] = VAR_3;
 }
}
