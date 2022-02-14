
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; } ;
struct meson_clk_cpu_dyndiv_data {TYPE_1__ div; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (struct clk_hw*,unsigned long,int ,int *,int ,int ) ;
 struct meson_clk_cpu_dyndiv_data* FUNC_1 (struct clk_regmap*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
            unsigned long VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_3(VAR_0);
 struct meson_clk_cpu_dyndiv_data *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_0, VAR_1,
       FUNC_2(VAR_2->map, &VAR_3->div),
       ((void*)0), 0, VAR_3->div.width);
}
