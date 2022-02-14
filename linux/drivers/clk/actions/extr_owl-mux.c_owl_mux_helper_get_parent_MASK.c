
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct owl_mux_hw {int shift; int width; int reg; } ;
struct owl_clk_common {int regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;

u8 FUNC_2(const struct owl_clk_common *VAR_0,
        const struct owl_mux_hw *VAR_1)
{
 u32 VAR_2;
 u8 VAR_3;

 FUNC_1(VAR_0->regmap, VAR_1->reg, &VAR_2);
 VAR_3 = VAR_2 >> VAR_1->shift;
 VAR_3 &= FUNC_0(VAR_1->width) - 1;

 return VAR_3;
}
