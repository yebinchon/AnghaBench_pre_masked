
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct msm_dsi_phy {int id; int base; TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__** src_pll_truthtable; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(struct msm_dsi_phy *VAR_1, int VAR_2, u32 VAR_3,
    u32 VAR_4)
{
 int VAR_5 = VAR_1->id;
 u32 VAR_6;

 if ((VAR_5 >= VAR_0) || (VAR_2 >= VAR_0))
  return;

 VAR_6 = FUNC_0(VAR_1->base + VAR_3);

 if (VAR_1->cfg->src_pll_truthtable[VAR_5][VAR_2])
  FUNC_1(VAR_1->base + VAR_3, VAR_6 | VAR_4);
 else
  FUNC_1(VAR_1->base + VAR_3, VAR_6 & (~VAR_4));
}
