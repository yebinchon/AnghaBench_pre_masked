
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_ops {unsigned long (* recalc_rate ) (struct clk_hw*,unsigned long) ;int (* set_rate ) (struct clk_hw*,unsigned long,unsigned long) ;int (* set_parent ) (struct clk_hw*,int ) ;} ;
struct clk_hw {int dummy; } ;
struct clk_composite {struct clk_hw* mux_hw; struct clk_hw* rate_hw; struct clk_ops* mux_ops; struct clk_ops* rate_ops; } ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long) ;
 int FUNC_2 (struct clk_hw*,unsigned long,unsigned long) ;
 int FUNC_3 (struct clk_hw*,int ) ;
 int FUNC_4 (struct clk_hw*,int ) ;
 int FUNC_5 (struct clk_hw*,unsigned long,unsigned long) ;
 struct clk_composite* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_0,
          unsigned long VAR_1,
          unsigned long VAR_2,
          u8 VAR_3)
{
 struct clk_composite *VAR_4 = FUNC_6(VAR_0);
 const struct clk_ops *VAR_5 = VAR_4->rate_ops;
 const struct clk_ops *VAR_6 = VAR_4->mux_ops;
 struct clk_hw *VAR_7 = VAR_4->rate_hw;
 struct clk_hw *VAR_8 = VAR_4->mux_hw;
 unsigned long VAR_9;

 FUNC_0(VAR_7, VAR_0);
 FUNC_0(VAR_8, VAR_0);

 VAR_9 = VAR_5->recalc_rate(VAR_7, VAR_2);
 if (VAR_9 > VAR_1) {
  VAR_5->set_rate(VAR_7, VAR_1, VAR_2);
  VAR_6->set_parent(VAR_8, VAR_3);
 } else {
  VAR_6->set_parent(VAR_8, VAR_3);
  VAR_5->set_rate(VAR_7, VAR_1, VAR_2);
 }

 return 0;
}
