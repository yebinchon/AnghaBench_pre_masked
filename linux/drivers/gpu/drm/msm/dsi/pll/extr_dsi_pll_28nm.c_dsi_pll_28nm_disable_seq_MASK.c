
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int dummy; } ;
struct dsi_pll_28nm {scalar_t__ mmio; int id; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int) ;
 struct dsi_pll_28nm* FUNC_2 (struct msm_dsi_pll*) ;

__attribute__((used)) static void FUNC_3(struct msm_dsi_pll *VAR_1)
{
 struct dsi_pll_28nm *VAR_2 = FUNC_2(VAR_1);

 FUNC_0("id=%d", VAR_2->id);
 FUNC_1(VAR_2->mmio + VAR_0, 0x00);
}
