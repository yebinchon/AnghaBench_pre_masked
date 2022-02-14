
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_system {int id; int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 struct clk_system* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2)
{
 struct clk_system *VAR_3 = FUNC_2(VAR_2);
 unsigned int VAR_4;

 FUNC_1(VAR_3->regmap, VAR_0, &VAR_4);

 if (!(VAR_4 & (1 << VAR_3->id)))
  return 0;

 if (!FUNC_0(VAR_3->id))
  return 1;

 FUNC_1(VAR_3->regmap, VAR_1, &VAR_4);

 return VAR_4 & (1 << VAR_3->id) ? 1 : 0;
}
