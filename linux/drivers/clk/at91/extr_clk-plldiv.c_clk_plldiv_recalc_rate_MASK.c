
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_plldiv {int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct clk_plldiv* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_2,
         unsigned long VAR_3)
{
 struct clk_plldiv *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5;

 FUNC_0(VAR_4->regmap, VAR_0, &VAR_5);

 if (VAR_5 & VAR_1)
  return VAR_3 / 2;

 return VAR_3;
}
