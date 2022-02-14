
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_clk_pll {TYPE_1__* params; } ;
struct TYPE_2__ {int defaults_set; scalar_t__* ext_misc_reg; scalar_t__ base_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(const char *VAR_6,
     struct tegra_clk_pll *VAR_7)
{
 VAR_7->params->defaults_set = 1;

 if (FUNC_2(VAR_5 + VAR_7->params->base_reg) & VAR_4) {

  FUNC_0(VAR_7->params);
  if (!VAR_7->params->defaults_set)
   FUNC_1("%s already enabled. Postponing set full defaults\n",
    VAR_6);
  return;
 }


 FUNC_4(VAR_0,
   VAR_5 + VAR_7->params->ext_misc_reg[0]);
 FUNC_4(VAR_1,
   VAR_5 + VAR_7->params->ext_misc_reg[1]);
 FUNC_4(VAR_2,
   VAR_5 + VAR_7->params->ext_misc_reg[2]);
 FUNC_4(VAR_3,
   VAR_5 + VAR_7->params->ext_misc_reg[3]);
 FUNC_3(1);
}
