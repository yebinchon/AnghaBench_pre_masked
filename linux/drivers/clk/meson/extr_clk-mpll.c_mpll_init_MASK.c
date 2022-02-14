
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_mpll_data {int flags; int misc; int ssen; int sdm_en; scalar_t__ init_count; int init_regs; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct meson_clk_mpll_data* FUNC_1 (struct clk_regmap*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 struct clk_regmap* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_4(VAR_1);
 struct meson_clk_mpll_data *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->init_count)
  FUNC_3(VAR_2->map, VAR_3->init_regs,
           VAR_3->init_count);


 FUNC_2(VAR_2->map, &VAR_3->sdm_en, 1);


 if (FUNC_0(&VAR_3->ssen)) {
  unsigned int VAR_4 =
   VAR_3->flags & VAR_0 ? 1 : 0;
  FUNC_2(VAR_2->map, &VAR_3->ssen, VAR_4);
 }


 if (FUNC_0(&VAR_3->misc))
  FUNC_2(VAR_2->map, &VAR_3->misc, 1);
}
