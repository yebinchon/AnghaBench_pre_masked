
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct of_phandle_args {int dummy; } ;
struct davinci_lpsc_clk {int flags; int md; } ;
struct clk_hw {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_1 ;
 int FUNC_1 (struct clk*) ;
 struct clk_hw* FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 struct clk* FUNC_4 (struct of_phandle_args*) ;
 struct davinci_lpsc_clk* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct reset_controller_dev *VAR_2,
          const struct of_phandle_args *VAR_3)
{
 struct of_phandle_args VAR_4 = *VAR_3;
 struct clk *VAR_5;
 struct clk_hw *VAR_6;
 struct davinci_lpsc_clk *VAR_7;


 VAR_5 = FUNC_4(&VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_2(VAR_5);
 VAR_7 = FUNC_5(VAR_6);
 FUNC_3(VAR_5);


 if (!(VAR_7->flags & VAR_1))
  return -VAR_0;

 return VAR_7->md;
}
