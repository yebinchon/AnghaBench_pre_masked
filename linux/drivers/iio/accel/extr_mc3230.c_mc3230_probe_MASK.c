
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mc3230_data {struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {char* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct iio_dev*) ;
 struct mc3230_data* FUNC_6 (struct iio_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct mc3230_data*,int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_11,
   const struct i2c_device_id *VAR_12)
{
 int VAR_13;
 struct iio_dev *VAR_14;
 struct mc3230_data *VAR_15;


 VAR_13 = FUNC_4(VAR_11, VAR_7);
 if (VAR_13 != VAR_3)
  return (VAR_13 < 0) ? VAR_13 : -VAR_0;

 VAR_13 = FUNC_4(VAR_11, VAR_8);
 if (VAR_13 != VAR_6)
  return (VAR_13 < 0) ? VAR_13 : -VAR_0;

 VAR_14 = FUNC_2(&VAR_11->dev, sizeof(*VAR_15));
 if (!VAR_14) {
  FUNC_1(&VAR_11->dev, "iio allocation failed!\n");
  return -VAR_1;
 }

 VAR_15 = FUNC_6(VAR_14);
 VAR_15->client = VAR_11;
 FUNC_3(VAR_11, VAR_14);

 VAR_14->dev.parent = &VAR_11->dev;
 VAR_14->info = &VAR_10;
 VAR_14->name = "mc3230";
 VAR_14->modes = VAR_2;
 VAR_14->channels = VAR_9;
 VAR_14->num_channels = FUNC_0(VAR_9);

 VAR_13 = FUNC_7(VAR_15, VAR_5);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_5(VAR_14);
 if (VAR_13 < 0) {
  FUNC_1(&VAR_11->dev, "device_register failed\n");
  FUNC_7(VAR_15, VAR_4);
 }

 return VAR_13;
}
