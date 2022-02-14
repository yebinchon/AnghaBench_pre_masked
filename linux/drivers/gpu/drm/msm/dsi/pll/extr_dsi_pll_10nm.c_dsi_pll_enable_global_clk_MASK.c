
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsi_pll_10nm {scalar_t__ phy_cmn_mmio; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct dsi_pll_10nm *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1->phy_cmn_mmio + VAR_0);
 FUNC_2(VAR_1->phy_cmn_mmio + VAR_0,
    VAR_2 | FUNC_0(5));
}
