
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_dualdiv_param {scalar_t__ m2; scalar_t__ n2; scalar_t__ m1; scalar_t__ n1; scalar_t__ dual; } ;
struct meson_clk_dualdiv_data {int m2; int n2; int m1; int n1; int dual; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 struct meson_clk_dualdiv_param* FUNC_0 (unsigned long,unsigned long,struct meson_clk_dualdiv_data*) ;
 struct meson_clk_dualdiv_data* FUNC_1 (struct clk_regmap*) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
          unsigned long VAR_3)
{
 struct clk_regmap *VAR_4 = FUNC_3(VAR_1);
 struct meson_clk_dualdiv_data *VAR_5 = FUNC_1(VAR_4);
 const struct meson_clk_dualdiv_param *VAR_6 =
  FUNC_0(VAR_2, VAR_3, VAR_5);

 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_4->map, &VAR_5->dual, VAR_6->dual);
 FUNC_2(VAR_4->map, &VAR_5->n1, VAR_6->n1 - 1);
 FUNC_2(VAR_4->map, &VAR_5->m1, VAR_6->m1 - 1);
 FUNC_2(VAR_4->map, &VAR_5->n2, VAR_6->n2 - 1);
 FUNC_2(VAR_4->map, &VAR_5->m2, VAR_6->m2 - 1);

 return 0;
}
