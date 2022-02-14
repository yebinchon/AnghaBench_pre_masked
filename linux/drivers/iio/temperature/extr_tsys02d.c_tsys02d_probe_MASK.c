
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ms_ht_dev {int lock; scalar_t__ res_index; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; TYPE_1__ dev; int name; int * info; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int dev; int adapter; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct iio_dev*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 struct ms_ht_dev* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (struct i2c_client*,int ,int) ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_9,
    const struct i2c_device_id *VAR_10)
{
 struct ms_ht_dev *VAR_11;
 struct iio_dev *VAR_12;
 int VAR_13;
 u64 VAR_14;

 if (!FUNC_5(VAR_9->adapter,
         VAR_4 |
         VAR_3 |
         VAR_2)) {
  FUNC_1(&VAR_9->dev,
   "Adapter does not support some i2c transaction\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_3(&VAR_9->dev, sizeof(*VAR_11));
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_7(VAR_12);
 VAR_11->client = VAR_9;
 VAR_11->res_index = 0;
 FUNC_10(&VAR_11->lock);

 VAR_12->info = &VAR_8;
 VAR_12->name = VAR_10->name;
 VAR_12->dev.parent = &VAR_9->dev;
 VAR_12->modes = VAR_5;
 VAR_12->channels = VAR_7;
 VAR_12->num_channels = FUNC_0(VAR_7);

 FUNC_6(VAR_9, VAR_12);

 VAR_13 = FUNC_9(VAR_9, VAR_6, 15000);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_8(VAR_9, &VAR_14);
 if (VAR_13)
  return VAR_13;
 FUNC_2(&VAR_9->dev, "Serial number : %llx", VAR_14);

 return FUNC_4(&VAR_9->dev, VAR_12);
}
