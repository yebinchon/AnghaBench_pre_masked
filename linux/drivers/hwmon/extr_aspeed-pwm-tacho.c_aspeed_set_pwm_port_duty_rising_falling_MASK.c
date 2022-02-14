
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct regmap {int dummy; } ;
struct TYPE_2__ {size_t duty_ctrl_rise_point; size_t duty_ctrl_fall_point; int duty_ctrl_rise_fall_mask; int duty_ctrl_reg; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct regmap*,int ,int ,size_t) ;

__attribute__((used)) static void FUNC_1(struct regmap *VAR_1,
          u8 VAR_2, u8 VAR_3,
          u8 VAR_4)
{
 u32 VAR_5 = (VAR_3 <<
    VAR_0[VAR_2].duty_ctrl_rise_point);
 VAR_5 |= (VAR_4 <<
        VAR_0[VAR_2].duty_ctrl_fall_point);

 FUNC_0(VAR_1, VAR_0[VAR_2].duty_ctrl_reg,
      VAR_0[VAR_2].duty_ctrl_rise_fall_mask,
      VAR_5);
}
