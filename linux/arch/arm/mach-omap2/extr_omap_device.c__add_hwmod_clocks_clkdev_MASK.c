
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hwmod {int opt_clks_cnt; TYPE_1__* opt_clks; int main_clk; } ;
struct omap_device {int dummy; } ;
struct TYPE_2__ {char* role; int clk; } ;


 int FUNC_0 (struct omap_device*,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct omap_device *VAR_0,
         struct omap_hwmod *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0, "fck", VAR_1->main_clk);

 for (VAR_2 = 0; VAR_2 < VAR_1->opt_clks_cnt; VAR_2++)
  FUNC_0(VAR_0, VAR_1->opt_clks[VAR_2].role, VAR_1->opt_clks[VAR_2].clk);
}
