
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_si514 {int regmap; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct clk_si514* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2)
{
 struct clk_si514 *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->regmap, VAR_1, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return !!(VAR_4 & VAR_0);
}
