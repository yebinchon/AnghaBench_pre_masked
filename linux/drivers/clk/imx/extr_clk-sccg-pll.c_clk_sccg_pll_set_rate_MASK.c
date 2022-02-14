
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_sccg_pll_setup {int divq; int divr2; int divr1; int divf2; int divf1; int bypass; } ;
struct clk_sccg_pll {scalar_t__ base; struct clk_sccg_pll_setup setup; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct clk_sccg_pll*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct clk_sccg_pll* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_8, unsigned long VAR_9,
       unsigned long VAR_10)
{
 struct clk_sccg_pll *VAR_11 = FUNC_4(VAR_8);
 struct clk_sccg_pll_setup *VAR_12 = &VAR_11->setup;
 u32 VAR_13;


 VAR_13 = FUNC_2(VAR_11->base + VAR_0);
 VAR_13 &= ~VAR_7;
 VAR_13 |= FUNC_0(VAR_7, VAR_12->bypass);
 FUNC_5(VAR_13, VAR_11->base + VAR_0);

 VAR_13 = FUNC_3(VAR_11->base + VAR_1);
 VAR_13 &= ~(VAR_2 | VAR_3);
 VAR_13 &= ~(VAR_5 | VAR_6 | VAR_4);
 VAR_13 |= FUNC_0(VAR_2, VAR_12->divf1);
 VAR_13 |= FUNC_0(VAR_3, VAR_12->divf2);
 VAR_13 |= FUNC_0(VAR_5, VAR_12->divr1);
 VAR_13 |= FUNC_0(VAR_6, VAR_12->divr2);
 VAR_13 |= FUNC_0(VAR_4, VAR_12->divq);
 FUNC_6(VAR_13, VAR_11->base + VAR_1);

 return FUNC_1(VAR_11);
}
