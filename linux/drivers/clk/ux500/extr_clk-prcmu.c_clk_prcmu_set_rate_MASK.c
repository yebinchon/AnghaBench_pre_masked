
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_prcmu {int cg_sel; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,unsigned long) ;
 struct clk_prcmu* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
         unsigned long VAR_2)
{
 struct clk_prcmu *VAR_3 = FUNC_1(VAR_0);
 return FUNC_0(VAR_3->cg_sel, VAR_1);
}
