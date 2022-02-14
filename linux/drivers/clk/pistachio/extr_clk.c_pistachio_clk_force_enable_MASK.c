
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct clk** clks; } ;
struct pistachio_clk_provider {TYPE_1__ clk_data; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (char*,int ,int) ;

void FUNC_4(struct pistachio_clk_provider *VAR_0,
    unsigned int *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct clk *VAR_5 = VAR_0->clk_data.clks[VAR_1[VAR_3]];

  if (FUNC_0(VAR_5))
   continue;

  VAR_4 = FUNC_2(VAR_5);
  if (VAR_4)
   FUNC_3("Failed to enable clock %s: %d\n",
          FUNC_1(VAR_5), VAR_4);
 }
}
