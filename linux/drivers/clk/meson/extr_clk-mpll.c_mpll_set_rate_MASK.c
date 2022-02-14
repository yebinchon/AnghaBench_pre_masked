
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_mpll_data {scalar_t__ lock; int n2; int sdm; int flags; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct meson_clk_mpll_data* FUNC_2 (struct clk_regmap*) ;
 int FUNC_3 (int ,int *,unsigned int) ;
 int FUNC_4 (unsigned long,unsigned long,unsigned int*,unsigned int*,int ) ;
 int FUNC_5 (scalar_t__,unsigned long) ;
 int FUNC_6 (scalar_t__,unsigned long) ;
 struct clk_regmap* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_0,
    unsigned long VAR_1,
    unsigned long VAR_2)
{
 struct clk_regmap *VAR_3 = FUNC_7(VAR_0);
 struct meson_clk_mpll_data *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5, VAR_6;
 unsigned long VAR_7 = 0;

 FUNC_4(VAR_1, VAR_2, &VAR_5, &VAR_6, VAR_4->flags);

 if (VAR_4->lock)
  FUNC_5(VAR_4->lock, VAR_7);
 else
  FUNC_0(VAR_4->lock);


 FUNC_3(VAR_3->map, &VAR_4->sdm, VAR_5);


 FUNC_3(VAR_3->map, &VAR_4->n2, VAR_6);

 if (VAR_4->lock)
  FUNC_6(VAR_4->lock, VAR_7);
 else
  FUNC_1(VAR_4->lock);

 return 0;
}
