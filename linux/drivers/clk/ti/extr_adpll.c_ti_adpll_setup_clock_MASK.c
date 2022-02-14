
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int clk_num; struct clk** clks; } ;
struct ti_adpll_data {int pa; TYPE_2__ outputs; int dev; TYPE_1__* clocks; } ;
struct clk_lookup {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {void (* unregister ) (struct clk*) ;struct clk_lookup* cl; struct clk* clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk_lookup* FUNC_0 (struct clk*,char*,int *) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*,int,char*,int,char const*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static int FUNC_5(struct ti_adpll_data *VAR_2, struct clk *VAR_3,
    int VAR_4, int VAR_5, const char *VAR_6,
    void (*VAR_7)(struct clk *VAR_8))
{
 struct clk_lookup *VAR_9;
 const char *VAR_10 = ((void*)0);
 char VAR_11[VAR_0];

 VAR_2->clocks[VAR_4].clk = VAR_3;
 VAR_2->clocks[VAR_4].unregister = VAR_7;


 VAR_10 = FUNC_4(VAR_6, '.');
 if (VAR_10 && FUNC_3(VAR_10) > 1) {
  if (FUNC_3(VAR_10) > VAR_0)
   FUNC_1(VAR_2->dev, "clock %s con_id lookup may fail\n",
     VAR_6);
  FUNC_2(VAR_11, 16, "pll%03lx%s", VAR_2->pa & 0xfff, VAR_10 + 1);
  VAR_9 = FUNC_0(VAR_3, VAR_11, ((void*)0));
  if (!VAR_9)
   return -VAR_1;
  VAR_2->clocks[VAR_4].cl = VAR_9;
 } else {
  FUNC_1(VAR_2->dev, "no con_id for clock %s\n", VAR_6);
 }

 if (VAR_5 < 0)
  return 0;

 VAR_2->outputs.clks[VAR_5] = VAR_3;
 VAR_2->outputs.clk_num++;

 return 0;
}
