
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct uniphier_clk_cpugear {unsigned int mask; scalar_t__ regbase; int regmap; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,unsigned int,int,int ,int) ;
 int FUNC_1 (int ,scalar_t__,unsigned int,unsigned int) ;
 struct uniphier_clk_cpugear* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_3, u8 VAR_4)
{
 struct uniphier_clk_cpugear *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_1(VAR_5->regmap,
    VAR_5->regbase + VAR_0,
    VAR_5->mask, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_5->regmap,
    VAR_5->regbase + VAR_1,
    VAR_2,
    VAR_2);
 if (VAR_6)
  return VAR_6;

 return FUNC_0(VAR_5->regmap,
    VAR_5->regbase + VAR_1,
    VAR_7, !(VAR_7 & VAR_2),
    0, 1);
}
