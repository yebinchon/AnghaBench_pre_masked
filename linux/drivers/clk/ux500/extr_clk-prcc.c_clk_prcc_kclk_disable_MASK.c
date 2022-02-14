
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_prcc {scalar_t__ is_enabled; scalar_t__ base; int cg_sel; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct clk_prcc* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_1)
{
 struct clk_prcc *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->cg_sel, (VAR_2->base + VAR_0));
 VAR_2->is_enabled = 0;
}
