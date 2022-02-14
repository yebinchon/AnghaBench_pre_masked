
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct regmap {int dummy; } ;
struct TYPE_2__ {size_t h_value; size_t l_value; size_t unit_value; int clk_ctrl_mask; int clk_ctrl_reg; } ;


 int FUNC_0 (struct regmap*,int ,int ,size_t) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct regmap *VAR_1, u8 VAR_2,
     u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 u32 VAR_6 = ((VAR_3 << VAR_0[VAR_2].h_value) |
    (VAR_4 << VAR_0[VAR_2].l_value) |
    (VAR_5 << VAR_0[VAR_2].unit_value));

 FUNC_0(VAR_1, VAR_0[VAR_2].clk_ctrl_reg,
      VAR_0[VAR_2].clk_ctrl_mask, VAR_6);
}
