
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {int name; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {size_t driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct ds1803_data {int * cfg; struct i2c_client* client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct iio_dev* FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,struct iio_dev*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct i2c_client*,struct iio_dev*) ;
 struct ds1803_data* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_4,
    const struct i2c_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct ds1803_data *VAR_7;
 struct iio_dev *VAR_8;

 VAR_8 = FUNC_1(VAR_6, sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(VAR_4, VAR_8);

 VAR_7 = FUNC_4(VAR_8);
 VAR_7->client = VAR_4;
 VAR_7->cfg = &VAR_1[VAR_5->driver_data];

 VAR_8->dev.parent = VAR_6;
 VAR_8->info = &VAR_3;
 VAR_8->channels = VAR_2;
 VAR_8->num_channels = FUNC_0(VAR_2);
 VAR_8->name = VAR_4->name;

 return FUNC_2(VAR_6, VAR_8);
}
