
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_ops {int (* get_parent ) (struct clk_hw*) ;} ;
struct clk_hw {int dummy; } ;
struct clk_composite {struct clk_hw* mux_hw; struct clk_ops* mux_ops; } ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk_composite* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_composite *VAR_1 = FUNC_2(VAR_0);
 const struct clk_ops *VAR_2 = VAR_1->mux_ops;
 struct clk_hw *VAR_3 = VAR_1->mux_hw;

 FUNC_0(VAR_3, VAR_0);

 return VAR_2->get_parent(VAR_3);
}
