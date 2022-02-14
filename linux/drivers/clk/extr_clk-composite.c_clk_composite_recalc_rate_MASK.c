
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_ops {unsigned long (* recalc_rate ) (struct clk_hw*,unsigned long) ;} ;
struct clk_hw {int dummy; } ;
struct clk_composite {struct clk_hw* rate_hw; struct clk_ops* rate_ops; } ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long) ;
 struct clk_composite* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
         unsigned long VAR_1)
{
 struct clk_composite *VAR_2 = FUNC_2(VAR_0);
 const struct clk_ops *VAR_3 = VAR_2->rate_ops;
 struct clk_hw *VAR_4 = VAR_2->rate_hw;

 FUNC_0(VAR_4, VAR_0);

 return VAR_3->recalc_rate(VAR_4, VAR_1);
}
