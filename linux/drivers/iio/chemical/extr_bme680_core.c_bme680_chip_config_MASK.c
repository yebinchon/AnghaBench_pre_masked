
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct bme680_data {int regmap; int oversampling_press; int oversampling_temp; int oversampling_humid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct device* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct bme680_data *VAR_8)
{
 struct device *VAR_9 = FUNC_3(VAR_8->regmap);
 int VAR_10;
 u8 VAR_11;

 VAR_11 = FUNC_0(
  VAR_2,
  FUNC_1(VAR_8->oversampling_humid));




 VAR_10 = FUNC_4(VAR_8->regmap, VAR_6,
     VAR_2, VAR_11);
 if (VAR_10 < 0) {
  FUNC_2(VAR_9, "failed to write ctrl_hum register\n");
  return VAR_10;
 }


 VAR_10 = FUNC_4(VAR_8->regmap, VAR_5,
     VAR_1,
     VAR_0);
 if (VAR_10 < 0) {
  FUNC_2(VAR_9, "failed to write config register\n");
  return VAR_10;
 }

 VAR_11 = FUNC_0(VAR_4,
     FUNC_1(VAR_8->oversampling_temp)) |
        FUNC_0(VAR_3,
     FUNC_1(VAR_8->oversampling_press));
 VAR_10 = FUNC_5(VAR_8->regmap, VAR_7,
    VAR_4 | VAR_3,
    VAR_11);
 if (VAR_10 < 0)
  FUNC_2(VAR_9, "failed to write ctrl_meas register\n");

 return VAR_10;
}
