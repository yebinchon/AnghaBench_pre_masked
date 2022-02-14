
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct am2315_data {int lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct iio_dev*) ;
 int FUNC_4 (int *,struct iio_dev*,int ,int ,int *) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int VAR_6 ;
 struct am2315_data* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 int VAR_9;
 struct iio_dev *VAR_10;
 struct am2315_data *VAR_11;

 VAR_10 = FUNC_2(&VAR_7->dev, sizeof(*VAR_11));
 if (!VAR_10) {
  FUNC_1(&VAR_7->dev, "iio allocation failed!\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_6(VAR_10);
 VAR_11->client = VAR_7;
 FUNC_5(VAR_7, VAR_10);
 FUNC_7(&VAR_11->lock);

 VAR_10->dev.parent = &VAR_7->dev;
 VAR_10->info = &VAR_4;
 VAR_10->name = VAR_0;
 VAR_10->modes = VAR_2;
 VAR_10->channels = VAR_3;
 VAR_10->num_channels = FUNC_0(VAR_3);

 VAR_9 = FUNC_4(&VAR_7->dev,
     VAR_10, VAR_6,
      VAR_5, ((void*)0));
 if (VAR_9 < 0) {
  FUNC_1(&VAR_7->dev, "iio triggered buffer setup failed\n");
  return VAR_9;
 }

 return FUNC_3(&VAR_7->dev, VAR_10);
}
