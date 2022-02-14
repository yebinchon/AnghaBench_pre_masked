
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_pll_rate_table {int nr; int no; int nf; int nb; } ;
struct rockchip_clk_pll {scalar_t__ reg_base; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rockchip_clk_pll *VAR_8,
     struct rockchip_pll_rate_table *VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_1(VAR_8->reg_base + FUNC_0(0));
 VAR_9->nr = ((VAR_10 >> VAR_1)
    & VAR_0) + 1;
 VAR_9->no = ((VAR_10 >> VAR_3)
    & VAR_2) + 1;

 VAR_10 = FUNC_1(VAR_8->reg_base + FUNC_0(1));
 VAR_9->nf = ((VAR_10 >> VAR_5)
    & VAR_4) + 1;

 VAR_10 = FUNC_1(VAR_8->reg_base + FUNC_0(2));
 VAR_9->nb = ((VAR_10 >> VAR_7)
    & VAR_6) + 1;
}
