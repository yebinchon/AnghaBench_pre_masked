
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_prcc {int cg_sel; int is_enabled; scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 struct clk_prcc* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_2)
{
 struct clk_prcc *VAR_3 = FUNC_2(VAR_2);

 FUNC_3(VAR_3->cg_sel, (VAR_3->base + VAR_0));
 while (!(FUNC_1(VAR_3->base + VAR_1) & VAR_3->cg_sel))
  FUNC_0();

 VAR_3->is_enabled = 1;
 return 0;
}
