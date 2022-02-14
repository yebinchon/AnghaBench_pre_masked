
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max5432_data {unsigned long ohm; struct i2c_client* client; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {int name; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct iio_dev* FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,struct iio_dev*) ;
 int FUNC_3 (struct i2c_client*,struct iio_dev*) ;
 struct max5432_data* FUNC_4 (struct iio_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_3,
  const struct i2c_device_id *VAR_4)
{
 struct device *VAR_5 = &VAR_3->dev;
 struct iio_dev *VAR_6;
 struct max5432_data *VAR_7;

 VAR_6 = FUNC_1(VAR_5, sizeof(struct max5432_data));
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_3, VAR_6);

 VAR_7 = FUNC_4(VAR_6);
 VAR_7->client = VAR_3;
 VAR_7->ohm = (unsigned long)FUNC_5(VAR_5);

 VAR_6->dev.parent = VAR_5;
 VAR_6->info = &VAR_2;
 VAR_6->channels = VAR_1;
 VAR_6->num_channels = FUNC_0(VAR_1);
 VAR_6->name = VAR_3->name;

 return FUNC_2(VAR_5, VAR_6);
}
