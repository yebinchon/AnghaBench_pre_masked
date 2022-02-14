
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct clk_hw*,int ) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_0)
{
 if (FUNC_1(VAR_0, 0) < 0)
  FUNC_0("failed to disable clk\n");
}
