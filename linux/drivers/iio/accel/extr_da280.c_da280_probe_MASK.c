
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {char* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int dev; } ;
struct da280_data {struct i2c_client* client; } ;
typedef enum da280_chipset { ____Placeholder_da280_chipset } da280_chipset ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct i2c_client*,int) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct iio_dev*) ;
 struct da280_data* FUNC_8 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 int VAR_10;
 struct iio_dev *VAR_11;
 struct da280_data *VAR_12;
 enum da280_chipset VAR_13;

 VAR_10 = FUNC_6(VAR_8, VAR_1);
 if (VAR_10 != VAR_0)
  return (VAR_10 < 0) ? VAR_10 : -VAR_2;

 VAR_11 = FUNC_4(&VAR_8->dev, sizeof(*VAR_12));
 if (!VAR_11)
  return -VAR_3;

 VAR_12 = FUNC_8(VAR_11);
 VAR_12->client = VAR_8;
 FUNC_5(VAR_8, VAR_11);

 VAR_11->dev.parent = &VAR_8->dev;
 VAR_11->info = &VAR_7;
 VAR_11->modes = VAR_4;
 VAR_11->channels = VAR_6;

 if (FUNC_0(&VAR_8->dev)) {
  VAR_13 = FUNC_2(&VAR_8->dev);
 } else {
  VAR_13 = VAR_9->driver_data;
 }

 if (VAR_13 == VAR_5) {
  VAR_11->name = "da226";
  VAR_11->num_channels = 2;
 } else {
  VAR_11->name = "da280";
  VAR_11->num_channels = 3;
 }

 VAR_10 = FUNC_1(VAR_8, 1);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_7(VAR_11);
 if (VAR_10 < 0) {
  FUNC_3(&VAR_8->dev, "device_register failed\n");
  FUNC_1(VAR_8, 0);
 }

 return VAR_10;
}
