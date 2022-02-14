
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_clk_pll {TYPE_1__* params; } ;
struct TYPE_2__ {int defaults_set; scalar_t__* ext_misc_reg; scalar_t__ base_reg; scalar_t__ ssc_ctrl_en_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__,TYPE_1__*,int,int,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(const char *VAR_11, struct tegra_clk_pll *VAR_12,
  u32 VAR_13, u32 VAR_14, u32 VAR_15, u32 VAR_16)
{
 u32 VAR_17;
 u32 VAR_18 = FUNC_2(VAR_10 + VAR_12->params->base_reg);

 VAR_12->params->defaults_set = 1;

 if (VAR_18 & VAR_9) {





  if (VAR_18 & VAR_0) {
   FUNC_1("plldss boot enabled with IDDQ set\n");
   VAR_12->params->defaults_set = 0;
  }


  VAR_17 = VAR_13;
  FUNC_0(VAR_10, VAR_12->params, 0, VAR_17,
         VAR_3 &
         (~VAR_2));






  if (VAR_12->params->ssc_ctrl_en_mask) {
   VAR_17 = VAR_14;
   FUNC_0(VAR_10, VAR_12->params, 1,
    VAR_17, VAR_6);
   VAR_17 = VAR_15;
   FUNC_0(VAR_10, VAR_12->params, 2,
    VAR_17, VAR_7);
   VAR_17 = VAR_16;
   FUNC_0(VAR_10, VAR_12->params, 3,
    VAR_17, VAR_8);
  } else if (VAR_12->params->ext_misc_reg[1]) {
   VAR_17 = VAR_14;
   FUNC_0(VAR_10, VAR_12->params, 1,
    VAR_17, VAR_6 &
    (~VAR_4));
  }

  if (!VAR_12->params->defaults_set)
   FUNC_1("%s already enabled. Postponing set full defaults\n",
     VAR_11);


  if (VAR_18 & VAR_1) {
   VAR_18 &= ~VAR_1;
   FUNC_4(VAR_18, VAR_10 +
     VAR_12->params->base_reg);
  }

  VAR_18 = FUNC_2(VAR_10 + VAR_12->params->ext_misc_reg[0]);
  VAR_18 &= ~VAR_2;
  VAR_18 |= VAR_13 & VAR_2;
  FUNC_4(VAR_18, VAR_10 + VAR_12->params->ext_misc_reg[0]);
  FUNC_3(1);

  return;
 }


 VAR_18 |= VAR_0;
 VAR_18 &= ~VAR_1;
 FUNC_4(VAR_18, VAR_10 + VAR_12->params->base_reg);


 if (!VAR_12->params->ext_misc_reg[1]) {
  FUNC_4(VAR_13, VAR_10 +
    VAR_12->params->ext_misc_reg[0]);
  FUNC_3(1);
  return;
 }

 FUNC_4(VAR_13, VAR_10 +
   VAR_12->params->ext_misc_reg[0]);

 FUNC_4(VAR_14 & (~VAR_5),
   VAR_10 + VAR_12->params->ext_misc_reg[1]);
 FUNC_4(VAR_15, VAR_10 + VAR_12->params->ext_misc_reg[2]);
 FUNC_4(VAR_16, VAR_10 + VAR_12->params->ext_misc_reg[3]);
 FUNC_3(1);
}
