
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vl6180_data {int lock; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int name; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct iio_dev*) ;
 int FUNC_3 (struct i2c_client*,struct iio_dev*) ;
 struct vl6180_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct vl6180_data*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_5,
     const struct i2c_device_id *VAR_6)
{
 struct vl6180_data *VAR_7;
 struct iio_dev *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(&VAR_5->dev, sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_8);
 FUNC_3(VAR_5, VAR_8);
 VAR_7->client = VAR_5;
 FUNC_5(&VAR_7->lock);

 VAR_8->dev.parent = &VAR_5->dev;
 VAR_8->info = &VAR_4;
 VAR_8->channels = VAR_3;
 VAR_8->num_channels = FUNC_0(VAR_3);
 VAR_8->name = VAR_2;
 VAR_8->modes = VAR_1;

 VAR_9 = FUNC_6(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_2(&VAR_5->dev, VAR_8);
}
