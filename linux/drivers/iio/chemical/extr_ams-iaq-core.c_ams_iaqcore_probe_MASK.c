
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct ams_iaqcore_data {int lock; scalar_t__ last_update; struct i2c_client* client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct iio_dev*) ;
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 struct ams_iaqcore_data* FUNC_5 (struct iio_dev*) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_6,
        const struct i2c_device_id *VAR_7)
{
 struct iio_dev *VAR_8;
 struct ams_iaqcore_data *VAR_9;

 VAR_8 = FUNC_2(&VAR_6->dev, sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_8);
 FUNC_4(VAR_6, VAR_8);
 VAR_9->client = VAR_6;


 VAR_9->last_update = VAR_5 - VAR_1;
 FUNC_6(&VAR_9->lock);

 VAR_8->dev.parent = &VAR_6->dev;
 VAR_8->info = &VAR_4;
 VAR_8->name = FUNC_1(&VAR_6->dev);
 VAR_8->modes = VAR_2;

 VAR_8->channels = VAR_3;
 VAR_8->num_channels = FUNC_0(VAR_3);

 return FUNC_3(&VAR_6->dev, VAR_8);
}
