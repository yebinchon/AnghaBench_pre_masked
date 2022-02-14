
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r9a06g032_clk_bitsel {int selector; int clocks; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 struct r9a06g032_clk_bitsel* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct r9a06g032_clk_bitsel *VAR_2 = FUNC_1(VAR_0);


 FUNC_0(VAR_2->clocks, VAR_2->selector, !!VAR_1);

 return 0;
}
