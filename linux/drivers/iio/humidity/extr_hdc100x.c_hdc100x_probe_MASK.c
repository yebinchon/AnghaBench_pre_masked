
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int available_scan_masks; int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;
struct hdc100x_data {int lock; struct i2c_client* client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct iio_dev*) ;
 int FUNC_5 (int *,struct iio_dev*,int *,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int ** VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct hdc100x_data*,int,int ) ;
 int VAR_11 ;
 int FUNC_7 (struct hdc100x_data*,int ,int ) ;
 int VAR_12 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct i2c_client*,struct iio_dev*) ;
 struct hdc100x_data* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_13,
    const struct i2c_device_id *VAR_14)
{
 struct iio_dev *VAR_15;
 struct hdc100x_data *VAR_16;
 int VAR_17;

 if (!FUNC_8(VAR_13->adapter, VAR_5 |
         VAR_4 | VAR_3))
  return -VAR_1;

 VAR_15 = FUNC_3(&VAR_13->dev, sizeof(*VAR_16));
 if (!VAR_15)
  return -VAR_0;

 VAR_16 = FUNC_10(VAR_15);
 FUNC_9(VAR_13, VAR_15);
 VAR_16->client = VAR_13;
 FUNC_11(&VAR_16->lock);

 VAR_15->dev.parent = &VAR_13->dev;
 VAR_15->name = FUNC_2(&VAR_13->dev);
 VAR_15->modes = VAR_6;
 VAR_15->info = &VAR_8;

 VAR_15->channels = VAR_7;
 VAR_15->num_channels = FUNC_0(VAR_7);
 VAR_15->available_scan_masks = VAR_10;


 FUNC_6(VAR_16, 0, VAR_9[0][0]);
 FUNC_6(VAR_16, 1, VAR_9[1][0]);
 FUNC_7(VAR_16, VAR_2, 0);

 VAR_17 = FUNC_5(&VAR_13->dev,
      VAR_15, ((void*)0),
      VAR_11,
      &VAR_12);
 if (VAR_17 < 0) {
  FUNC_1(&VAR_13->dev, "iio triggered buffer setup failed\n");
  return VAR_17;
 }

 return FUNC_4(&VAR_13->dev, VAR_15);
}
