
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_sensor_data {int irq; int * dev; int regmap; TYPE_1__* sensor_settings; } ;
struct regmap_config {int dummy; } ;
struct TYPE_4__ {int * parent; } ;
struct iio_dev {int name; TYPE_2__ dev; } ;
struct i2c_client {int irq; int dev; int name; } ;
struct TYPE_3__ {scalar_t__ multi_read_bit; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 struct st_sensor_data* FUNC_5 (struct iio_dev*) ;
 struct regmap_config VAR_0 ;
 struct regmap_config VAR_1 ;

int FUNC_6(struct iio_dev *VAR_2,
        struct i2c_client *VAR_3)
{
 struct st_sensor_data *VAR_4 = FUNC_5(VAR_2);
 const struct regmap_config *VAR_5;

 if (VAR_4->sensor_settings->multi_read_bit)
  VAR_5 = &VAR_1;
 else
  VAR_5 = &VAR_0;

 VAR_4->regmap = FUNC_3(VAR_3, VAR_5);
 if (FUNC_0(VAR_4->regmap)) {
  FUNC_2(&VAR_3->dev, "Failed to register i2c regmap (%d)\n",
   (int)FUNC_1(VAR_4->regmap));
  return FUNC_1(VAR_4->regmap);
 }

 FUNC_4(VAR_3, VAR_2);

 VAR_2->dev.parent = &VAR_3->dev;
 VAR_2->name = VAR_3->name;

 VAR_4->dev = &VAR_3->dev;
 VAR_4->irq = VAR_3->irq;

 return 0;
}
