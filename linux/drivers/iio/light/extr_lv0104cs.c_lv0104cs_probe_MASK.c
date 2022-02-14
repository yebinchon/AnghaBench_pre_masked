
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lv0104cs_private {size_t calibscale; struct i2c_client* client; int int_time; int scale; int lock; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int * info; int name; int num_channels; int channels; TYPE_1__ dev; int modes; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int name; } ;
struct TYPE_4__ {int regval; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct iio_dev*) ;
 int FUNC_3 (struct i2c_client*,struct lv0104cs_private*) ;
 struct lv0104cs_private* FUNC_4 (struct iio_dev*) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct iio_dev *VAR_10;
 struct lv0104cs_private *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1(&VAR_8->dev, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_10);

 FUNC_3(VAR_8, VAR_11);
 VAR_11->client = VAR_8;

 FUNC_6(&VAR_11->lock);

 VAR_11->calibscale = VAR_2;
 VAR_11->scale = VAR_4;
 VAR_11->int_time = VAR_3;

 VAR_12 = FUNC_5(VAR_11->client,
   VAR_5[VAR_2].regval);
 if (VAR_12)
  return VAR_12;

 VAR_10->modes = VAR_1;
 VAR_10->dev.parent = &VAR_8->dev;
 VAR_10->channels = VAR_6;
 VAR_10->num_channels = FUNC_0(VAR_6);
 VAR_10->name = VAR_8->name;
 VAR_10->info = &VAR_7;

 return FUNC_2(&VAR_8->dev, VAR_10);
}
