
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmp006_data {int config; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct iio_dev*) ;
 struct tmp006_data* FUNC_8 (struct iio_dev*) ;
 int VAR_6 ;
 int FUNC_9 (struct i2c_client*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct iio_dev *VAR_10;
 struct tmp006_data *VAR_11;
 int VAR_12;

 if (!FUNC_4(VAR_8->adapter, VAR_3))
  return -VAR_2;

 if (!FUNC_9(VAR_8)) {
  FUNC_1(&VAR_8->dev, "no TMP006 sensor\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_3(&VAR_8->dev, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_8(VAR_10);
 FUNC_5(VAR_8, VAR_10);
 VAR_11->client = VAR_8;

 VAR_10->dev.parent = &VAR_8->dev;
 VAR_10->name = FUNC_2(&VAR_8->dev);
 VAR_10->modes = VAR_4;
 VAR_10->info = &VAR_7;

 VAR_10->channels = VAR_6;
 VAR_10->num_channels = FUNC_0(VAR_6);

 VAR_12 = FUNC_6(VAR_11->client, VAR_5);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_11->config = VAR_12;

 return FUNC_7(VAR_10);
}
