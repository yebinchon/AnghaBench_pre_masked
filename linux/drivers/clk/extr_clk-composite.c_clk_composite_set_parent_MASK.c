
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_ops {int (* set_parent ) (struct clk_hw*,int ) ;} ;
struct clk_hw {int dummy; } ;
struct clk_composite {struct clk_hw* mux_hw; struct clk_ops* mux_ops; } ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*,int ) ;
 struct clk_composite* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct clk_composite *VAR_2 = FUNC_2(VAR_0);
 const struct clk_ops *VAR_3 = VAR_2->mux_ops;
 struct clk_hw *VAR_4 = VAR_2->mux_hw;

 FUNC_0(VAR_4, VAR_0);

 return VAR_3->set_parent(VAR_4, VAR_1);
}
