
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsi_pll_10nm {scalar_t__ mmio; scalar_t__ phy_cmn_mmio; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct dsi_pll_10nm *VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_2->phy_cmn_mmio + VAR_0);

 FUNC_3(VAR_2->phy_cmn_mmio + VAR_0,
    VAR_3 | FUNC_0(5));
 FUNC_3(VAR_2->mmio + VAR_1, 0xc0);
 FUNC_1(250);
}
