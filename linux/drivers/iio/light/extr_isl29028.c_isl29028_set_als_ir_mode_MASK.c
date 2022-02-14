
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29028_chip {int als_ir_mode; int regmap; int lux_scale; } ;
typedef enum isl29028_als_ir_mode { ____Placeholder_isl29028_als_ir_mode } isl29028_als_ir_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int FUNC_0 (struct isl29028_chip*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct isl29028_chip *VAR_10,
        enum isl29028_als_ir_mode VAR_11)
{
 int VAR_12;

 if (VAR_10->als_ir_mode == VAR_11)
  return 0;

 VAR_12 = FUNC_0(VAR_10, VAR_10->lux_scale);
 if (VAR_12 < 0)
  return VAR_12;

 switch (VAR_11) {
 case 130:
  VAR_12 = FUNC_2(VAR_10->regmap, VAR_9,
      VAR_5,
      VAR_3);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_2(VAR_10->regmap, VAR_9,
      VAR_7,
      VAR_6);
  break;
 case 129:
  VAR_12 = FUNC_2(VAR_10->regmap, VAR_9,
      VAR_5,
      VAR_4);
  break;
 case 128:
  return FUNC_2(VAR_10->regmap, VAR_9,
       VAR_2,
       VAR_0);
 }

 if (VAR_12 < 0)
  return VAR_12;


 VAR_12 = FUNC_2(VAR_10->regmap, VAR_9,
     VAR_2,
     VAR_1);
 if (VAR_12 < 0)
  return VAR_12;


 FUNC_1(VAR_8);

 VAR_10->als_ir_mode = VAR_11;

 return 0;
}
