
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct mmc35240_data {int mutex; int res; struct regmap* regmap; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (int *,char*) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,struct iio_dev*) ;
 struct regmap* FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct iio_dev*) ;
 struct mmc35240_data* FUNC_8 (struct iio_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct mmc35240_data*) ;
 int VAR_6 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_7,
     const struct i2c_device_id *VAR_8)
{
 struct mmc35240_data *VAR_9;
 struct iio_dev *VAR_10;
 struct regmap *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_4(&VAR_7->dev, sizeof(*VAR_9));
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_6(VAR_7, &VAR_6);
 if (FUNC_1(VAR_11)) {
  FUNC_3(&VAR_7->dev, "regmap initialization failed\n");
  return FUNC_2(VAR_11);
 }

 VAR_9 = FUNC_8(VAR_10);
 FUNC_7(VAR_7, VAR_10);
 VAR_9->client = VAR_7;
 VAR_9->regmap = VAR_11;
 VAR_9->res = VAR_2;

 FUNC_10(&VAR_9->mutex);

 VAR_10->dev.parent = &VAR_7->dev;
 VAR_10->info = &VAR_5;
 VAR_10->name = VAR_3;
 VAR_10->channels = VAR_4;
 VAR_10->num_channels = FUNC_0(VAR_4);
 VAR_10->modes = VAR_1;

 VAR_12 = FUNC_9(VAR_9);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_7->dev, "mmc35240 chip init failed\n");
  return VAR_12;
 }
 return FUNC_5(&VAR_7->dev, VAR_10);
}
