
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ltc2497_st {int ref; int time_prev; int addr_prev; struct i2c_client* client; } ;
struct iio_map {int dummy; } ;
struct TYPE_5__ {TYPE_1__* parent; } ;
struct iio_dev {TYPE_3__ dev; int num_channels; int channels; int modes; int * info; int name; } ;
struct i2c_device_id {int name; } ;
struct TYPE_4__ {scalar_t__ platform_data; } ;
struct i2c_client {TYPE_1__ dev; int adapter; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 struct iio_dev* FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_8 (struct i2c_client*,int ) ;
 int FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*,struct iio_map*) ;
 int FUNC_11 (struct iio_dev*) ;
 struct ltc2497_st* FUNC_12 (struct iio_dev*) ;
 int FUNC_13 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct iio_dev *VAR_10;
 struct ltc2497_st *VAR_11;
 struct iio_map *VAR_12;
 int VAR_13;

 if (!FUNC_6(VAR_8->adapter, VAR_2 |
         VAR_3))
  return -VAR_1;

 VAR_10 = FUNC_4(&VAR_8->dev, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_12(VAR_10);
 FUNC_7(VAR_8, VAR_10);
 VAR_11->client = VAR_8;

 VAR_10->dev.parent = &VAR_8->dev;
 VAR_10->name = VAR_9->name;
 VAR_10->info = &VAR_7;
 VAR_10->modes = VAR_4;
 VAR_10->channels = VAR_6;
 VAR_10->num_channels = FUNC_0(VAR_6);

 VAR_11->ref = FUNC_5(&VAR_8->dev, "vref");
 if (FUNC_1(VAR_11->ref))
  return FUNC_2(VAR_11->ref);

 VAR_13 = FUNC_15(VAR_11->ref);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_8->dev.platform_data) {
  VAR_12 = ((struct iio_map *)VAR_8->dev.platform_data);
  VAR_13 = FUNC_10(VAR_10, VAR_12);
  if (VAR_13) {
   FUNC_3(&VAR_10->dev, "iio map err: %d\n", VAR_13);
   goto err_regulator_disable;
  }
 }

 VAR_13 = FUNC_8(VAR_11->client, VAR_5);
 if (VAR_13 < 0)
  goto err_array_unregister;

 VAR_11->addr_prev = VAR_5;
 VAR_11->time_prev = FUNC_13();

 VAR_13 = FUNC_9(VAR_10);
 if (VAR_13 < 0)
  goto err_array_unregister;

 return 0;

err_array_unregister:
 FUNC_11(VAR_10);

err_regulator_disable:
 FUNC_14(VAR_11->ref);

 return VAR_13;
}
