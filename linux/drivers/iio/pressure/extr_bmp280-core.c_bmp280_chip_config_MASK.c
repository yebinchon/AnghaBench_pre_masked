
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bmp280_data {int dev; int regmap; scalar_t__ oversampling_press; scalar_t__ oversampling_temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct bmp280_data *VAR_8)
{
 int VAR_9;
 u8 VAR_10 = FUNC_1(VAR_8->oversampling_temp + 1) |
    FUNC_0(VAR_8->oversampling_press + 1);

 VAR_9 = FUNC_4(VAR_8->regmap, VAR_7,
     VAR_5 |
     VAR_4 |
     VAR_2,
     VAR_10 | VAR_3);
 if (VAR_9 < 0) {
  FUNC_2(VAR_8->dev,
   "failed to write ctrl_meas register\n");
  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_8->regmap, VAR_6,
     VAR_1,
     VAR_0);
 if (VAR_9 < 0) {
  FUNC_2(VAR_8->dev,
   "failed to write config register\n");
  return VAR_9;
 }

 return VAR_9;
}
