
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_regmap_div_data {unsigned int shift; int width; int offset; int flags; int table; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct clk_regmap_div_data* FUNC_1 (struct clk_regmap*) ;
 int FUNC_2 (unsigned long,unsigned long,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int,unsigned int) ;
 struct clk_regmap* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2)
{
 struct clk_regmap *VAR_3 = FUNC_4(VAR_0);
 struct clk_regmap_div_data *VAR_4 = FUNC_1(VAR_3);
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_4->table, VAR_4->width,
         VAR_4->flags);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = (unsigned int)VAR_6 << VAR_4->shift;
 return FUNC_3(VAR_3->map, VAR_4->offset,
      FUNC_0(VAR_4->width) << VAR_4->shift, VAR_5);
}
