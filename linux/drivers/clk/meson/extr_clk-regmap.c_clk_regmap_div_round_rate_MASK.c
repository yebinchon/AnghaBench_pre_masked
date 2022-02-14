
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_regmap_div_data {int flags; unsigned int shift; int width; int table; int offset; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 struct clk_regmap_div_data* FUNC_1 (struct clk_regmap*) ;
 long FUNC_2 (struct clk_hw*,unsigned long,unsigned long*,int ,int ,int,unsigned int) ;
 long FUNC_3 (struct clk_hw*,unsigned long,unsigned long*,int ,int ,int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 struct clk_regmap* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_6(struct clk_hw *VAR_1, unsigned long VAR_2,
          unsigned long *VAR_3)
{
 struct clk_regmap *VAR_4 = FUNC_5(VAR_1);
 struct clk_regmap_div_data *VAR_5 = FUNC_1(VAR_4);
 unsigned int VAR_6;
 int VAR_7;


 if (VAR_5->flags & VAR_0) {
  VAR_7 = FUNC_4(VAR_4->map, VAR_5->offset, &VAR_6);
  if (VAR_7)

   return 0;

  VAR_6 >>= VAR_5->shift;
  VAR_6 &= FUNC_0(VAR_5->width);

  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5->table,
          VAR_5->width, VAR_5->flags, VAR_6);
 }

 return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5->table, VAR_5->width,
      VAR_5->flags);
}
