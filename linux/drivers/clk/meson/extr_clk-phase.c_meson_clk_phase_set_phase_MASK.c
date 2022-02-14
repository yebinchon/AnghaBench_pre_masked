
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; } ;
struct meson_clk_phase_data {TYPE_1__ ph; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (int,int ) ;
 struct meson_clk_phase_data* FUNC_1 (struct clk_regmap*) ;
 int FUNC_2 (int ,TYPE_1__*,unsigned int) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0, int VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_3(VAR_0);
 struct meson_clk_phase_data *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3->ph.width);
 FUNC_2(VAR_2->map, &VAR_3->ph, VAR_4);

 return 0;
}
