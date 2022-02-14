
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ina3221_data {int reg_config; int regmap; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ina3221_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int,int ,int ) ;


 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int,long) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_10, u32 VAR_11, long VAR_12)
{
 struct ina3221_data *VAR_13 = FUNC_1(VAR_10);
 int VAR_14, VAR_15;
 u32 VAR_16;

 switch (VAR_11) {
 case 129:
  VAR_15 = FUNC_2(VAR_12, VAR_8,
       FUNC_0(VAR_8));

  VAR_16 = (VAR_13->reg_config & ~VAR_2) |
        (VAR_15 << VAR_3);
  VAR_14 = FUNC_4(VAR_13->regmap, VAR_1, VAR_16);
  if (VAR_14)
   return VAR_14;


  VAR_13->reg_config = VAR_16;
  return 0;
 case 128:
  VAR_16 = FUNC_3(VAR_13->reg_config, VAR_12);
  VAR_15 = FUNC_2(VAR_16, VAR_9,
       FUNC_0(VAR_9));


  VAR_16 = VAR_4 | VAR_6;
  VAR_16 = (VAR_13->reg_config & ~VAR_16) |
        (VAR_15 << VAR_5) |
        (VAR_15 << VAR_7);
  VAR_14 = FUNC_4(VAR_13->regmap, VAR_1, VAR_16);
  if (VAR_14)
   return VAR_14;


  VAR_13->reg_config = VAR_16;
  return 0;
 default:
  return -VAR_0;
 }
}
