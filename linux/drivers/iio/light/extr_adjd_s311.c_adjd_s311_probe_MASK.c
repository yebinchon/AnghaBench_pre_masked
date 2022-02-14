
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct adjd_s311_data {struct i2c_client* client; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct adjd_s311_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*,int *,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6,
      const struct i2c_device_id *VAR_7)
{
 struct adjd_s311_data *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(&VAR_6->dev, sizeof(*VAR_8));
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_5(VAR_9);
 FUNC_3(VAR_6, VAR_9);
 VAR_8->client = VAR_6;

 VAR_9->dev.parent = &VAR_6->dev;
 VAR_9->info = &VAR_4;
 VAR_9->name = VAR_0;
 VAR_9->channels = VAR_3;
 VAR_9->num_channels = FUNC_0(VAR_3);
 VAR_9->modes = VAR_2;

 VAR_10 = FUNC_7(VAR_9, ((void*)0),
  VAR_5, ((void*)0));
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10)
  goto exit_unreg_buffer;

 FUNC_1(&VAR_6->dev, "ADJD-S311 color sensor registered\n");

 return 0;

exit_unreg_buffer:
 FUNC_6(VAR_9);
 return VAR_10;
}
