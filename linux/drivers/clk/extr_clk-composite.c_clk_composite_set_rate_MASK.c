
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_ops {int (* set_rate ) (struct clk_hw*,unsigned long,unsigned long) ;} ;
struct clk_hw {int dummy; } ;
struct clk_composite {struct clk_hw* rate_hw; struct clk_ops* rate_ops; } ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*,unsigned long,unsigned long) ;
 struct clk_composite* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1,
          unsigned long VAR_2)
{
 struct clk_composite *VAR_3 = FUNC_2(VAR_0);
 const struct clk_ops *VAR_4 = VAR_3->rate_ops;
 struct clk_hw *VAR_5 = VAR_3->rate_hw;

 FUNC_0(VAR_5, VAR_0);

 return VAR_4->set_rate(VAR_5, VAR_1, VAR_2);
}
