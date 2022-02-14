
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int shift; int width; } ;
struct TYPE_3__ {unsigned int shift; int width; int reg_off; } ;
struct meson_clk_cpu_dyndiv_data {TYPE_2__ dyn; TYPE_1__ div; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (unsigned long,unsigned long,int *,int ,int ) ;
 struct meson_clk_cpu_dyndiv_data* FUNC_2 (struct clk_regmap*) ;
 int FUNC_3 (int ,TYPE_2__*,int) ;
 int FUNC_4 (int ,int ,int,unsigned int) ;
 struct clk_regmap* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2)
{
 struct clk_regmap *VAR_3 = FUNC_5(VAR_0);
 struct meson_clk_cpu_dyndiv_data *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, ((void*)0), VAR_4->div.width, 0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = (unsigned int)VAR_6 << VAR_4->div.shift;


 FUNC_3(VAR_3->map, &VAR_4->dyn, 1);


 return FUNC_4(VAR_3->map, VAR_4->div.reg_off,
      FUNC_0(VAR_4->div.width, VAR_4->div.shift) |
      FUNC_0(VAR_4->dyn.width, VAR_4->dyn.shift),
      VAR_5);
}
