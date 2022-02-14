
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_system {int id; int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct clk_system* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_1)
{
 struct clk_system *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->regmap, VAR_0, 1 << VAR_2->id);
}
