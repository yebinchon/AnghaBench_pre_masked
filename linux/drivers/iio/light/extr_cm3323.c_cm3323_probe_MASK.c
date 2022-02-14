
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct cm3323_data {int mutex; struct i2c_client* client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,struct iio_dev*) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 struct cm3323_data* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_6,
   const struct i2c_device_id *VAR_7)
{
 struct cm3323_data *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(&VAR_6->dev, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_7(VAR_9);
 FUNC_6(VAR_6, VAR_9);
 VAR_8->client = VAR_6;

 FUNC_8(&VAR_8->mutex);

 VAR_9->dev.parent = &VAR_6->dev;
 VAR_9->info = &VAR_5;
 VAR_9->name = VAR_0;
 VAR_9->channels = VAR_3;
 VAR_9->num_channels = FUNC_0(VAR_3);
 VAR_9->modes = VAR_2;

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_6->dev, "cm3323 chip init failed\n");
  return VAR_10;
 }

 VAR_10 = FUNC_3(&VAR_6->dev, VAR_4, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 return FUNC_5(&VAR_6->dev, VAR_9);
}
