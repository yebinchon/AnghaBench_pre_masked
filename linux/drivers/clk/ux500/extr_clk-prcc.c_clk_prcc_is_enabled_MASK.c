
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_prcc {int is_enabled; } ;
struct clk_hw {int dummy; } ;


 struct clk_prcc* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_1(struct clk_hw *VAR_0)
{
 struct clk_prcc *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->is_enabled;
}
