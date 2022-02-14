
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct clk_rcg_dfs_data {int dummy; } ;


 int FUNC_0 (struct clk_rcg_dfs_data const*,struct regmap*) ;

int FUNC_1(struct regmap *VAR_0,
        const struct clk_rcg_dfs_data *VAR_1, size_t VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(&VAR_1[VAR_3], VAR_0);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
