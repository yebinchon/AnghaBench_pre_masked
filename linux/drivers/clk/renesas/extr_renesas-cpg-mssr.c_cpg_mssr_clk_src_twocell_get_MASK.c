
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {unsigned int* args; } ;
struct device {int dummy; } ;
struct cpg_mssr_priv {unsigned int last_dt_core_clk; unsigned int num_mod_clks; int num_core_clks; struct clk** clks; int stbyctrl; struct device* dev; } ;
struct clk {int dummy; } ;




 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (struct device*,char*,unsigned int,unsigned int,struct clk*,int ) ;
 int FUNC_7 (struct device*,char*,...) ;

__attribute__((used)) static
struct clk *FUNC_8(struct of_phandle_args *VAR_1,
      void *VAR_2)
{
 unsigned int VAR_3 = VAR_1->args[1];
 struct cpg_mssr_priv *VAR_4 = VAR_2;
 struct device *VAR_5 = VAR_4->dev;
 unsigned int VAR_6;
 const char *VAR_7;
 struct clk *VAR_8;
 int VAR_9;

 switch (VAR_1->args[0]) {
 case 129:
  VAR_7 = "core";
  if (VAR_3 > VAR_4->last_dt_core_clk) {
   FUNC_7(VAR_5, "Invalid %s clock index %u\n", VAR_7,
          VAR_3);
   return FUNC_0(-VAR_0);
  }
  VAR_8 = VAR_4->clks[VAR_3];
  break;

 case 128:
  VAR_7 = "module";
  if (VAR_4->stbyctrl) {
   VAR_6 = FUNC_3(VAR_3);
   VAR_9 = 7 - (VAR_3 % 10);
  } else {
   VAR_6 = FUNC_2(VAR_3);
   VAR_9 = 31 - (VAR_3 % 100);
  }
  if (VAR_9 < 0 || VAR_6 >= VAR_4->num_mod_clks) {
   FUNC_7(VAR_5, "Invalid %s clock index %u\n", VAR_7,
    VAR_3);
   return FUNC_0(-VAR_0);
  }
  VAR_8 = VAR_4->clks[VAR_4->num_core_clks + VAR_6];
  break;

 default:
  FUNC_7(VAR_5, "Invalid CPG clock type %u\n", VAR_1->args[0]);
  return FUNC_0(-VAR_0);
 }

 if (FUNC_1(VAR_8))
  FUNC_7(VAR_5, "Cannot get %s clock %u: %ld", VAR_7, VAR_3,
         FUNC_4(VAR_8));
 else
  FUNC_6(VAR_5, "clock (%u, %u) is %pC at %lu Hz\n",
   VAR_1->args[0], VAR_1->args[1], VAR_8,
   FUNC_5(VAR_8));
 return VAR_8;
}
