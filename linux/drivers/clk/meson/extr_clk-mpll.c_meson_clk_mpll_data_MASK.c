
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_mpll_data {int dummy; } ;
struct clk_regmap {scalar_t__ data; } ;



__attribute__((used)) static inline struct meson_clk_mpll_data *
FUNC_0(struct clk_regmap *VAR_0)
{
 return (struct meson_clk_mpll_data *)VAR_0->data;
}
