
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dev; } ;
struct device {int of_node; } ;
struct bmi160_data {int regmap; } ;
typedef enum bmi160_int_pin { ____Placeholder_bmi160_int_pin } bmi160_int_pin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int,int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 struct bmi160_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,char*) ;
 struct device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_8, int VAR_9,
        enum bmi160_int_pin VAR_10)
{
 bool VAR_11;
 u8 VAR_12;
 struct bmi160_data *VAR_13 = FUNC_2(VAR_8);
 struct device *VAR_14 = FUNC_4(VAR_13->regmap);


 if (VAR_9 == VAR_7)
  VAR_12 = VAR_0 | VAR_1;
 else if (VAR_9 == VAR_4)
  VAR_12 = VAR_1;
 else if (VAR_9 == VAR_5)
  VAR_12 = VAR_0;
 else if (VAR_9 == VAR_6)
  VAR_12 = 0;
 else {
  FUNC_1(&VAR_8->dev,
   "Invalid interrupt type 0x%x specified\n", VAR_9);
  return -VAR_3;
 }

 VAR_11 = FUNC_3(VAR_14->of_node, "drive-open-drain");

 return FUNC_0(VAR_13->regmap, VAR_10, VAR_11, VAR_12,
     VAR_2);
}
