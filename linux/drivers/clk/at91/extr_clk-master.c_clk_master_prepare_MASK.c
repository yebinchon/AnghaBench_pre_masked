
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_master {int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct clk_master* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_master *VAR_1 = FUNC_2(VAR_0);

 while (!FUNC_0(VAR_1->regmap))
  FUNC_1();

 return 0;
}
