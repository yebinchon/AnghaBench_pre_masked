
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sprd_mux_ssel {unsigned int shift; int width; int* table; } ;
struct sprd_clk_common {int hw; int reg; int regmap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

u8 FUNC_2(const struct sprd_clk_common *VAR_0,
         const struct sprd_mux_ssel *VAR_1)
{
 unsigned int VAR_2;
 u8 VAR_3;
 int VAR_4;
 int VAR_5;

 FUNC_1(VAR_0->regmap, VAR_0->reg, &VAR_2);
 VAR_3 = VAR_2 >> VAR_1->shift;
 VAR_3 &= (1 << VAR_1->width) - 1;

 if (!VAR_1->table)
  return VAR_3;

 VAR_4 = FUNC_0(&VAR_0->hw);

 for (VAR_5 = 0; VAR_5 < VAR_4 - 1; VAR_5++)
  if (VAR_3 >= VAR_1->table[VAR_5] && VAR_3 < VAR_1->table[VAR_5 + 1])
   return VAR_5;

 return VAR_4 - 1;
}
