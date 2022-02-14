
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ti_lmu_bank {scalar_t__ ramp_up_usec; scalar_t__ ramp_down_usec; int runtime_ramp_reg; struct regmap* regmap; } ;
struct regmap {int dummy; } ;


 int FUNC_0 (struct regmap*,int ,int) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct ti_lmu_bank *VAR_0)
{
 struct regmap *VAR_1 = VAR_0->regmap;
 u8 VAR_2, VAR_3, VAR_4;

 if (VAR_0->ramp_up_usec == 0 && VAR_0->ramp_down_usec == 0) {
  VAR_3 = 0;
  VAR_4 = 0;
 } else {
  VAR_3 = FUNC_1(VAR_0->ramp_up_usec);
  VAR_4 = FUNC_1(VAR_0->ramp_down_usec);
 }

 VAR_2 = (VAR_3 << 4) | VAR_4;

 return FUNC_0(VAR_1, VAR_0->runtime_ramp_reg, VAR_2);

}
