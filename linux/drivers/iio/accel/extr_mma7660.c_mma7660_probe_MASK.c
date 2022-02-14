
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mma7660_data {int mode; int lock; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct mma7660_data* FUNC_5 (struct iio_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct mma7660_data*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 int VAR_9;
 struct iio_dev *VAR_10;
 struct mma7660_data *VAR_11;

 VAR_10 = FUNC_2(&VAR_7->dev, sizeof(*VAR_11));
 if (!VAR_10) {
  FUNC_1(&VAR_7->dev, "iio allocation failed!\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_5(VAR_10);
 VAR_11->client = VAR_7;
 FUNC_3(VAR_7, VAR_10);
 FUNC_7(&VAR_11->lock);
 VAR_11->mode = VAR_4;

 VAR_10->dev.parent = &VAR_7->dev;
 VAR_10->info = &VAR_6;
 VAR_10->name = VAR_2;
 VAR_10->modes = VAR_1;
 VAR_10->channels = VAR_5;
 VAR_10->num_channels = FUNC_0(VAR_5);

 VAR_9 = FUNC_6(VAR_11, VAR_3);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_10);
 if (VAR_9 < 0) {
  FUNC_1(&VAR_7->dev, "device_register failed\n");
  FUNC_6(VAR_11, VAR_4);
 }

 return VAR_9;
}
