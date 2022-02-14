
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gp2ap020a00f_data {int cur_opmode; int regmap; } ;
typedef enum gp2ap020a00f_opmode { ____Placeholder_gp2ap020a00f_opmode } gp2ap020a00f_opmode ;
struct TYPE_2__ {unsigned int op_reg; unsigned int als_reg; unsigned int ps_reg; unsigned int led_reg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gp2ap020a00f_data *VAR_14,
     enum gp2ap020a00f_opmode VAR_15)
{
 unsigned int VAR_16;
 int VAR_17;

 if (VAR_15 != VAR_6) {
  VAR_17 = FUNC_0(VAR_14->regmap, VAR_8,
     &VAR_16);
  if (VAR_17 < 0)
   return VAR_17;




  if ((VAR_13[VAR_15].op_reg & VAR_7) !=
      (VAR_16 & VAR_7)) {

   VAR_17 = FUNC_1(VAR_14->regmap,
    VAR_8, VAR_4,
    VAR_5);
   if (VAR_17 < 0)
    return VAR_17;
  }

  VAR_17 = FUNC_1(VAR_14->regmap, VAR_0,
   VAR_10, VAR_13[VAR_15]
        .als_reg);
  if (VAR_17 < 0)
   return VAR_17;

  VAR_17 = FUNC_1(VAR_14->regmap, VAR_11,
   VAR_1, VAR_13[VAR_15]
        .ps_reg);
  if (VAR_17 < 0)
   return VAR_17;

  VAR_17 = FUNC_1(VAR_14->regmap, VAR_2,
   VAR_9, VAR_13[VAR_15]
        .led_reg);
  if (VAR_17 < 0)
   return VAR_17;
 }


 VAR_17 = FUNC_1(VAR_14->regmap,
     VAR_8,
     VAR_7 | VAR_3 |
     VAR_4 | VAR_12,
     VAR_13[VAR_15].op_reg);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_14->cur_opmode = VAR_15;

 return 0;
}
