
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_regmap_div_data {unsigned int shift; int width; int flags; int table; int offset; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 struct clk_regmap_div_data* FUNC_1 (struct clk_regmap*) ;
 unsigned long FUNC_2 (struct clk_hw*,unsigned long,unsigned int,int ,int ,int ) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 struct clk_regmap* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_5(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_4(VAR_0);
 struct clk_regmap_div_data *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_2->map, VAR_3->offset, &VAR_4);
 if (VAR_5)

  return 0;

 VAR_4 >>= VAR_3->shift;
 VAR_4 &= FUNC_0(VAR_3->width);
 return FUNC_2(VAR_0, VAR_1, VAR_4, VAR_3->table, VAR_3->flags,
       VAR_3->width);
}
