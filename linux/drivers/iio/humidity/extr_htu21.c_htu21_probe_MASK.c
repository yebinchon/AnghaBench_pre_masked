
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ms_ht_dev {int lock; scalar_t__ res_index; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {void* num_channels; void* channels; int modes; TYPE_1__ dev; int name; int * info; } ;
struct i2c_device_id {scalar_t__ driver_data; int name; } ;
struct i2c_client {int dev; int adapter; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct iio_dev*) ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 struct ms_ht_dev* FUNC_7 (struct iio_dev*) ;
 void* VAR_10 ;
 int FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (struct i2c_client*,int ,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_11,
         const struct i2c_device_id *VAR_12)
{
 struct ms_ht_dev *VAR_13;
 struct iio_dev *VAR_14;
 int VAR_15;
 u64 VAR_16;

 if (!FUNC_5(VAR_11->adapter,
         VAR_5 |
         VAR_4 |
         VAR_3)) {
  FUNC_1(&VAR_11->dev,
   "Adapter does not support some i2c transaction\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_3(&VAR_11->dev, sizeof(*VAR_13));
 if (!VAR_14)
  return -VAR_0;

 VAR_13 = FUNC_7(VAR_14);
 VAR_13->client = VAR_11;
 VAR_13->res_index = 0;
 FUNC_10(&VAR_13->lock);

 VAR_14->info = &VAR_9;
 VAR_14->name = VAR_12->name;
 VAR_14->dev.parent = &VAR_11->dev;
 VAR_14->modes = VAR_6;

 if (VAR_12->driver_data == VAR_7) {
  VAR_14->channels = VAR_10;
  VAR_14->num_channels = FUNC_0(VAR_10);
 } else {
  VAR_14->channels = VAR_8;
  VAR_14->num_channels = FUNC_0(VAR_8);
 }

 FUNC_6(VAR_11, VAR_14);

 VAR_15 = FUNC_9(VAR_11, VAR_2, 15000);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_8(VAR_11, &VAR_16);
 if (VAR_15)
  return VAR_15;
 FUNC_2(&VAR_11->dev, "Serial number : %llx", VAR_16);

 return FUNC_4(&VAR_11->dev, VAR_14);
}
