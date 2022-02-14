
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx90614_data {scalar_t__ wakeup_gpio; int lock; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; void* channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct mlx90614_data* FUNC_5 (struct iio_dev*) ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct i2c_client*) ;
 scalar_t__ FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (struct mlx90614_data*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct iio_dev *VAR_9;
 struct mlx90614_data *VAR_10;
 int VAR_11;

 if (!FUNC_2(VAR_7->adapter, VAR_2))
  return -VAR_1;

 VAR_9 = FUNC_1(&VAR_7->dev, sizeof(*VAR_10));
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_9);
 FUNC_3(VAR_7, VAR_9);
 VAR_10->client = VAR_7;
 FUNC_9(&VAR_10->lock);
 VAR_10->wakeup_gpio = FUNC_7(VAR_7);

 FUNC_8(VAR_10);

 VAR_9->dev.parent = &VAR_7->dev;
 VAR_9->name = VAR_8->name;
 VAR_9->modes = VAR_3;
 VAR_9->info = &VAR_6;

 VAR_11 = FUNC_6(VAR_7);
 switch (VAR_11) {
 case 0:
  FUNC_0(&VAR_7->dev, "Found single sensor");
  VAR_9->channels = VAR_5;
  VAR_9->num_channels = 2;
  break;
 case 1:
  FUNC_0(&VAR_7->dev, "Found dual sensor");
  VAR_9->channels = VAR_5;
  VAR_9->num_channels = 3;
  break;
 default:
  return VAR_11;
 }

 if (VAR_10->wakeup_gpio) {
  FUNC_12(&VAR_7->dev,
       VAR_4);
  FUNC_13(&VAR_7->dev);
  FUNC_11(&VAR_7->dev);
  FUNC_10(&VAR_7->dev);
 }

 return FUNC_4(VAR_9);
}
