
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_div_internal {unsigned int shift; int width; } ;
struct sprd_clk_common {int hw; int reg; int regmap; } ;


 unsigned long FUNC_0 (int *,unsigned long,unsigned long,int *,int ,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

unsigned long FUNC_2(struct sprd_clk_common *VAR_0,
       const struct sprd_div_internal *VAR_1,
       unsigned long VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_1(VAR_0->regmap, VAR_0->reg, &VAR_4);
 VAR_3 = VAR_4 >> VAR_1->shift;
 VAR_3 &= (1 << VAR_1->width) - 1;

 return FUNC_0(&VAR_0->hw, VAR_2, VAR_3, ((void*)0), 0,
       VAR_1->width);
}
