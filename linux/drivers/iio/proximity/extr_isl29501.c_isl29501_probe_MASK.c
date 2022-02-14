
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isl29501_private {int lock; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int * info; int name; int num_channels; int channels; TYPE_1__ dev; int modes; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct iio_dev*) ;
 int FUNC_4 (int *,struct iio_dev*,int ,int ,int *) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int VAR_2 ;
 struct isl29501_private* FUNC_6 (struct iio_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct isl29501_private*) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_6,
     const struct i2c_device_id *VAR_7)
{
 struct iio_dev *VAR_8;
 struct isl29501_private *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(&VAR_6->dev, sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_6(VAR_8);

 FUNC_5(VAR_6, VAR_8);
 VAR_9->client = VAR_6;

 FUNC_8(&VAR_9->lock);

 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_8->modes = VAR_1;
 VAR_8->dev.parent = &VAR_6->dev;
 VAR_8->channels = VAR_3;
 VAR_8->num_channels = FUNC_0(VAR_3);
 VAR_8->name = VAR_6->name;
 VAR_8->info = &VAR_4;

 VAR_10 = FUNC_4(&VAR_6->dev, VAR_8,
           VAR_2,
           VAR_5,
           ((void*)0));
 if (VAR_10 < 0) {
  FUNC_1(&VAR_6->dev, "unable to setup iio triggered buffer\n");
  return VAR_10;
 }

 return FUNC_3(&VAR_6->dev, VAR_8);
}
