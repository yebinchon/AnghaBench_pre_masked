
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ms_tp_dev {int res_index; int lock; struct i2c_client* client; } ;
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
 int FUNC_1 (int *,char*) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct iio_dev*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 struct ms_tp_dev* FUNC_6 (struct iio_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct i2c_client*,int,int) ;
 int FUNC_8 (struct ms_tp_dev*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 struct ms_tp_dev *VAR_10;
 struct iio_dev *VAR_11;
 int VAR_12;

 if (!FUNC_4(VAR_8->adapter,
         VAR_3 |
         VAR_4 |
         VAR_2)) {
  FUNC_1(&VAR_8->dev,
   "Adapter does not support some i2c transaction\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_2(&VAR_8->dev, sizeof(*VAR_10));
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = FUNC_6(VAR_11);
 VAR_10->client = VAR_8;
 VAR_10->res_index = 5;
 FUNC_9(&VAR_10->lock);

 VAR_11->info = &VAR_7;
 VAR_11->name = VAR_9->name;
 VAR_11->dev.parent = &VAR_8->dev;
 VAR_11->modes = VAR_5;
 VAR_11->channels = VAR_6;
 VAR_11->num_channels = FUNC_0(VAR_6);

 FUNC_5(VAR_8, VAR_11);

 VAR_12 = FUNC_7(VAR_8, 0x1E, 3000);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_8(VAR_10);
 if (VAR_12)
  return VAR_12;

 return FUNC_3(&VAR_8->dev, VAR_11);
}
