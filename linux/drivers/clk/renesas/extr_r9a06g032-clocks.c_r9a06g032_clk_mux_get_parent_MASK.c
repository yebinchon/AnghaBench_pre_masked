
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r9a06g032_clk_bitsel {int selector; int clocks; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct r9a06g032_clk_bitsel* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_0)
{
 struct r9a06g032_clk_bitsel *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->clocks, VAR_1->selector);
}
