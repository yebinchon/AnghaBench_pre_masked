
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltc2471_data {struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; int name; TYPE_1__ dev; } ;
struct i2c_device_id {scalar_t__ driver_data; int name; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct iio_dev*) ;
 int FUNC_3 (int ,int ) ;
 struct ltc2471_data* FUNC_4 (struct iio_dev*) ;
 int VAR_4 ;
 int FUNC_5 (struct i2c_client*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_8,
        const struct i2c_device_id *VAR_9)
{
 struct iio_dev *VAR_10;
 struct ltc2471_data *VAR_11;
 int VAR_12;

 if (!FUNC_3(VAR_8->adapter, VAR_2))
  return -VAR_1;

 VAR_10 = FUNC_1(&VAR_8->dev, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_10);
 VAR_11->client = VAR_8;

 VAR_10->dev.parent = &VAR_8->dev;
 VAR_10->name = VAR_9->name;
 VAR_10->info = &VAR_5;
 VAR_10->modes = VAR_3;
 if (VAR_9->driver_data == VAR_6)
  VAR_10->channels = VAR_7;
 else
  VAR_10->channels = VAR_4;
 VAR_10->num_channels = 1;


 VAR_12 = FUNC_5(VAR_8);
 if (VAR_12 < 0) {
  FUNC_0(&VAR_8->dev, "Cannot read from device.\n");
  return VAR_12;
 }

 return FUNC_2(&VAR_8->dev, VAR_10);
}
