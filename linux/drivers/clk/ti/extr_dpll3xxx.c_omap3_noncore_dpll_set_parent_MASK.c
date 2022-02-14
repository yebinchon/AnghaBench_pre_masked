
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct clk_hw_omap {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw_omap*) ;
 int FUNC_1 (struct clk_hw_omap*) ;
 struct clk_hw_omap* FUNC_2 (struct clk_hw*) ;

int FUNC_3(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct clk_hw_omap *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 if (!VAR_1)
  return -VAR_0;

 if (VAR_2)
  VAR_4 = FUNC_0(VAR_3);
 else
  VAR_4 = FUNC_1(VAR_3);

 return VAR_4;
}
