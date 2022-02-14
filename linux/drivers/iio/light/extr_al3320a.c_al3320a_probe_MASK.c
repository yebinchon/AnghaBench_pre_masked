
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct al3320a_data {struct i2c_client* client; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct al3320a_data*) ;
 int FUNC_2 (int *,char*) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct iio_dev*) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 struct al3320a_data* FUNC_6 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct al3320a_data *VAR_7;
 struct iio_dev *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(&VAR_5->dev, sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_1;

 VAR_7 = FUNC_6(VAR_8);
 FUNC_5(VAR_5, VAR_8);
 VAR_7->client = VAR_5;

 VAR_8->dev.parent = &VAR_5->dev;
 VAR_8->info = &VAR_4;
 VAR_8->name = VAR_0;
 VAR_8->channels = VAR_3;
 VAR_8->num_channels = FUNC_0(VAR_3);
 VAR_8->modes = VAR_2;

 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_5->dev, "al3320a chip init failed\n");
  return VAR_9;
 }
 return FUNC_4(&VAR_5->dev, VAR_8);
}
