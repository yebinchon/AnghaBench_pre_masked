
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct m62332_data {int vcc; int mutex; struct i2c_client* client; } ;
struct TYPE_4__ {TYPE_2__* parent; } ;
struct iio_dev {int * info; int modes; int channels; int num_channels; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {int platform_data; } ;
struct i2c_client {TYPE_2__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct iio_dev* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*,int ) ;
 int FUNC_8 (struct iio_dev*) ;
 struct m62332_data* FUNC_9 (struct iio_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_4,
   const struct i2c_device_id *VAR_5)
{
 struct m62332_data *VAR_6;
 struct iio_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(&VAR_4->dev, sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_9(VAR_7);
 FUNC_5(VAR_4, VAR_7);
 VAR_6->client = VAR_4;

 FUNC_10(&VAR_6->mutex);

 VAR_6->vcc = FUNC_4(&VAR_4->dev, "VCC");
 if (FUNC_1(VAR_6->vcc))
  return FUNC_2(VAR_6->vcc);


 VAR_7->dev.parent = &VAR_4->dev;

 VAR_7->num_channels = FUNC_0(VAR_2);
 VAR_7->channels = VAR_2;
 VAR_7->modes = VAR_1;
 VAR_7->info = &VAR_3;

 VAR_8 = FUNC_7(VAR_7, VAR_4->dev.platform_data);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8 < 0)
  goto err;

 return 0;

err:
 FUNC_8(VAR_7);

 return VAR_8;
}
