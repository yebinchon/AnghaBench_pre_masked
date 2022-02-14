
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clkdiv {scalar_t__ base; int regmap; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,scalar_t__,unsigned int*) ;
 struct clkdiv* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_3(struct clk_hw *VAR_2, unsigned long VAR_3)
{
 struct clkdiv *VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5;

 FUNC_1(VAR_4->regmap, VAR_4->base + VAR_1, &VAR_5);
 VAR_5 &= VAR_0;

 return VAR_3 / FUNC_0(VAR_5);
}
