
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vcnl4035_data {struct regmap* regmap; struct i2c_client* client; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,char*) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 struct regmap* FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 struct vcnl4035_data* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (struct vcnl4035_data*) ;
 int FUNC_14 (struct iio_dev*) ;
 int VAR_7 ;
 int FUNC_15 (struct vcnl4035_data*,int ) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct vcnl4035_data *VAR_10;
 struct iio_dev *VAR_11;
 struct regmap *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_4(&VAR_8->dev, sizeof(*VAR_10));
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_5(VAR_8, &VAR_7);
 if (FUNC_1(VAR_12)) {
  FUNC_3(&VAR_8->dev, "regmap_init failed!\n");
  return FUNC_2(VAR_12);
 }

 VAR_10 = FUNC_8(VAR_11);
 FUNC_6(VAR_8, VAR_11);
 VAR_10->client = VAR_8;
 VAR_10->regmap = VAR_12;

 VAR_11->dev.parent = &VAR_8->dev;
 VAR_11->info = &VAR_6;
 VAR_11->name = VAR_2;
 VAR_11->channels = VAR_5;
 VAR_11->num_channels = FUNC_0(VAR_5);
 VAR_11->modes = VAR_1;

 VAR_13 = FUNC_13(VAR_10);
 if (VAR_13 < 0) {
  FUNC_3(&VAR_8->dev, "vcnl4035 chip init failed\n");
  return VAR_13;
 }

 if (VAR_8->irq > 0) {
  VAR_13 = FUNC_14(VAR_11);
  if (VAR_13 < 0) {
   FUNC_3(&VAR_8->dev, "vcnl4035 unable init trigger\n");
   goto fail_poweroff;
  }
 }

 VAR_13 = FUNC_10(&VAR_8->dev);
 if (VAR_13 < 0)
  goto fail_poweroff;

 VAR_13 = FUNC_7(VAR_11);
 if (VAR_13 < 0)
  goto fail_poweroff;

 FUNC_9(&VAR_8->dev);
 FUNC_11(&VAR_8->dev, VAR_4);
 FUNC_12(&VAR_8->dev);

 return 0;

fail_poweroff:
 FUNC_15(VAR_10, VAR_3);
 return VAR_13;
}
