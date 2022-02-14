
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {int num_channels; int name; int * channels; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {size_t driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct ad5272_data {int * cfg; int lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ad5272_data*) ;
 int FUNC_1 (struct ad5272_data*,int ,int ) ;
 struct iio_dev* FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct device*,struct iio_dev*) ;
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 struct ad5272_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;
 struct iio_dev *VAR_10;
 struct ad5272_data *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_2(VAR_9, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_3;

 FUNC_4(VAR_7, VAR_10);

 VAR_11 = FUNC_5(VAR_10);
 VAR_11->client = VAR_7;
 FUNC_6(&VAR_11->lock);
 VAR_11->cfg = &VAR_4[VAR_8->driver_data];

 VAR_12 = FUNC_0(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_11, VAR_0, VAR_1);
 if (VAR_12 < 0)
  return -VAR_2;

 VAR_10->dev.parent = VAR_9;
 VAR_10->info = &VAR_6;
 VAR_10->channels = &VAR_5;
 VAR_10->num_channels = 1;
 VAR_10->name = VAR_7->name;

 return FUNC_3(VAR_9, VAR_10);
}
