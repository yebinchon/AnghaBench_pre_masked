
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max44000_data {int regmap; int lock; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 struct max44000_data* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*,int *,int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (struct max44000_data*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int*) ;
 int FUNC_13 (int ,int ,int) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_13,
     const struct i2c_device_id *VAR_14)
{
 struct max44000_data *VAR_15;
 struct iio_dev *VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = FUNC_4(&VAR_13->dev, sizeof(*VAR_15));
 if (!VAR_16)
  return -VAR_0;
 VAR_15 = FUNC_8(VAR_16);
 VAR_15->regmap = FUNC_5(VAR_13, &VAR_11);
 if (FUNC_1(VAR_15->regmap)) {
  FUNC_3(&VAR_13->dev, "regmap_init failed!\n");
  return FUNC_2(VAR_15->regmap);
 }

 FUNC_6(VAR_13, VAR_16);
 FUNC_11(&VAR_15->lock);
 VAR_16->dev.parent = &VAR_13->dev;
 VAR_16->info = &VAR_10;
 VAR_16->name = VAR_3;
 VAR_16->channels = VAR_9;
 VAR_16->num_channels = FUNC_0(VAR_9);
 VAR_17 = FUNC_13(VAR_15->regmap, VAR_6,
      VAR_7);
 if (VAR_17 < 0) {
  FUNC_3(&VAR_13->dev, "failed to write default CFG_RX: %d\n",
   VAR_17);
  return VAR_17;
 }





 VAR_17 = FUNC_10(VAR_15, VAR_4);
 if (VAR_17 < 0) {
  FUNC_3(&VAR_13->dev, "failed to write init config: %d\n", VAR_17);
  return VAR_17;
 }


 VAR_18 = VAR_2 | VAR_1;
 VAR_17 = FUNC_13(VAR_15->regmap, VAR_5, VAR_18);
 if (VAR_17 < 0) {
  FUNC_3(&VAR_13->dev, "failed to write init config: %d\n", VAR_17);
  return VAR_17;
 }


 VAR_17 = FUNC_12(VAR_15->regmap, VAR_8, &VAR_18);
 if (VAR_17 < 0) {
  FUNC_3(&VAR_13->dev, "failed to read init status: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_9(VAR_16, ((void*)0), VAR_12, ((void*)0));
 if (VAR_17 < 0) {
  FUNC_3(&VAR_13->dev, "iio triggered buffer setup failed\n");
  return VAR_17;
 }

 return FUNC_7(VAR_16);
}
