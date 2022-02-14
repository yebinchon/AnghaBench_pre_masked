
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_pll_config {int cfg1; int cfg0; } ;
struct clk_zx_pll {scalar_t__ reg_base; struct zx_pll_config* lookup_table; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct clk_zx_pll*,unsigned long) ;
 struct clk_zx_pll* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1, unsigned long VAR_2,
      unsigned long VAR_3)
{

 struct clk_zx_pll *VAR_4 = FUNC_1(VAR_1);
 const struct zx_pll_config *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 VAR_5 = &VAR_4->lookup_table[VAR_6];

 FUNC_2(VAR_5->cfg0, VAR_4->reg_base);
 FUNC_2(VAR_5->cfg1, VAR_4->reg_base + VAR_0);

 return 0;
}
