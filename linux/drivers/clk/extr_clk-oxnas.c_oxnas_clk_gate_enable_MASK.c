
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_oxnas_gate {int bit; int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 struct clk_oxnas_gate* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct clk_oxnas_gate *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->regmap, VAR_0, FUNC_0(VAR_2->bit));

 return 0;
}
