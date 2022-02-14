
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct veml6070_data {int config; int client2; struct i2c_client* client1; int lock; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int name; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,char*) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_7 (struct i2c_client*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct iio_dev*) ;
 struct veml6070_data* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_9,
     const struct i2c_device_id *VAR_10)
{
 struct veml6070_data *VAR_11;
 struct iio_dev *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(&VAR_9->dev, sizeof(*VAR_11));
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_10(VAR_12);
 FUNC_6(VAR_9, VAR_12);
 VAR_11->client1 = VAR_9;
 FUNC_11(&VAR_11->lock);

 VAR_12->dev.parent = &VAR_9->dev;
 VAR_12->info = &VAR_8;
 VAR_12->channels = VAR_7;
 VAR_12->num_channels = FUNC_0(VAR_7);
 VAR_12->name = VAR_5;
 VAR_12->modes = VAR_1;

 VAR_11->client2 = FUNC_5(VAR_9->adapter, VAR_2);
 if (FUNC_1(VAR_11->client2)) {
  FUNC_3(&VAR_9->dev, "i2c device for second chip address failed\n");
  return FUNC_2(VAR_11->client2);
 }

 VAR_11->config = VAR_6 | VAR_3 |
  VAR_4;
 VAR_13 = FUNC_7(VAR_11->client1, VAR_11->config);
 if (VAR_13 < 0)
  goto fail;

 VAR_13 = FUNC_9(VAR_12);
 if (VAR_13 < 0)
  goto fail;

 return VAR_13;

fail:
 FUNC_8(VAR_11->client2);
 return VAR_13;
}
