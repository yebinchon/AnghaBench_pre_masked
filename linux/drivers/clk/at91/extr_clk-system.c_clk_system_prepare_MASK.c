
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_system {int id; int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 struct clk_system* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1)
{
 struct clk_system *VAR_2 = FUNC_4(VAR_1);

 FUNC_3(VAR_2->regmap, VAR_0, 1 << VAR_2->id);

 if (!FUNC_2(VAR_2->id))
  return 0;

 while (!FUNC_0(VAR_2->regmap, VAR_2->id))
  FUNC_1();

 return 0;
}
