
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uniphier_clk_cpugear {unsigned int mask; scalar_t__ regbase; int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,scalar_t__,unsigned int*) ;
 struct uniphier_clk_cpugear* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_2)
{
 struct uniphier_clk_cpugear *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = FUNC_0(VAR_2);
 int VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_1(VAR_3->regmap,
     VAR_3->regbase + VAR_1, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_6 &= VAR_3->mask;

 return VAR_6 < VAR_4 ? VAR_6 : -VAR_0;
}
