
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; } ;
struct meson_clk_phase_data {TYPE_1__ ph; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (unsigned int,int ) ;
 struct meson_clk_phase_data* FUNC_1 (struct clk_regmap*) ;
 unsigned int FUNC_2 (int ,TYPE_1__*) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 struct clk_regmap *VAR_1 = FUNC_3(VAR_0);
 struct meson_clk_phase_data *VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3;

 VAR_3 = FUNC_2(VAR_1->map, &VAR_2->ph);

 return FUNC_0(VAR_3, VAR_2->ph.width);
}
