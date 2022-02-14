
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clkgen_pll {scalar_t__ lock; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 struct clkgen_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 struct clkgen_pll *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2 = 0;
 int VAR_3 = 0;

 if (VAR_1->lock)
  FUNC_1(VAR_1->lock, VAR_2);

 VAR_3 = FUNC_0(VAR_0);

 if (VAR_1->lock)
  FUNC_2(VAR_1->lock, VAR_2);

 return VAR_3;
}
