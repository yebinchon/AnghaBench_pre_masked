
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; } ;
struct meson_clk_cpu_dyndiv_data {TYPE_1__ div; } ;
struct clk_regmap {int dummy; } ;
struct clk_hw {int dummy; } ;


 long FUNC_0 (struct clk_hw*,unsigned long,unsigned long*,int *,int ,int ) ;
 struct meson_clk_cpu_dyndiv_data* FUNC_1 (struct clk_regmap*) ;
 struct clk_regmap* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_0,
         unsigned long VAR_1,
         unsigned long *VAR_2)
{
 struct clk_regmap *VAR_3 = FUNC_2(VAR_0);
 struct meson_clk_cpu_dyndiv_data *VAR_4 = FUNC_1(VAR_3);

 return FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0), VAR_4->div.width, 0);
}
