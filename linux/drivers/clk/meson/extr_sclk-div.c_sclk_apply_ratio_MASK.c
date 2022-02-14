
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; int den; } ;
struct meson_sclk_div_data {int cached_div; int hi; TYPE_1__ cached_duty; } ;
struct clk_regmap {int map; } ;


 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct clk_regmap *VAR_0,
        struct meson_sclk_div_data *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1->cached_div *
         VAR_1->cached_duty.num,
         VAR_1->cached_duty.den);

 if (VAR_2)
  VAR_2 -= 1;

 FUNC_1(VAR_0->map, &VAR_1->hi, VAR_2);
}
