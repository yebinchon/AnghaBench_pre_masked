
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ti_lmu_bank {scalar_t__ max_brightness; int lsb_brightness_reg; int msb_brightness_reg; struct regmap* regmap; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct regmap*,int,int ,int) ;
 int FUNC_1 (struct regmap*,int,int) ;

__attribute__((used)) static int FUNC_2(struct ti_lmu_bank *VAR_3,
        int VAR_4)
{
 struct regmap *VAR_5 = VAR_3->regmap;
 u8 VAR_6, VAR_7;
 int VAR_8;
 if (VAR_3->max_brightness == VAR_2) {
  VAR_6 = VAR_3->lsb_brightness_reg;
  VAR_8 = FUNC_0(VAR_5, VAR_6,
      VAR_0,
      VAR_4);
  if (VAR_8)
   return VAR_8;

  VAR_7 = VAR_4 >> VAR_1;
 } else {
  VAR_7 = VAR_4;
 }

 VAR_6 = VAR_3->msb_brightness_reg;

 return FUNC_1(VAR_5, VAR_6, VAR_7);
}
