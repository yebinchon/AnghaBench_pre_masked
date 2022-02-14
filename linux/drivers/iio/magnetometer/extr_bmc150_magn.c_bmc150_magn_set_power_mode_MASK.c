
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bmc150_magn_data {int regmap; } ;
typedef enum bmc150_magn_power_modes { ____Placeholder_bmc150_magn_power_modes } bmc150_magn_power_modes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct bmc150_magn_data *VAR_9,
          enum bmc150_magn_power_modes VAR_10,
          bool VAR_11)
{
 int VAR_12;

 switch (VAR_10) {
 case 128:
  VAR_12 = FUNC_0(VAR_9->regmap, VAR_5,
      VAR_1, !VAR_11);
  if (VAR_12 < 0)
   return VAR_12;
  FUNC_1(VAR_7 * 1000, 20000);
  return 0;
 case 129:
  return FUNC_0(VAR_9->regmap,
       VAR_4,
       VAR_0,
       VAR_3 <<
       VAR_6);
 case 130:
  return FUNC_0(VAR_9->regmap,
       VAR_4,
       VAR_0,
       VAR_2 <<
       VAR_6);
 }

 return -VAR_8;
}
