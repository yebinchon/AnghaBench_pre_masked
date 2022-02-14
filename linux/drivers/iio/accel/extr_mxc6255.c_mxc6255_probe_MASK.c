
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct mxc6255_data {struct regmap* regmap; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int * info; int modes; int num_channels; int channels; TYPE_1__ dev; int name; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 int FUNC_4 (int *,char*,...) ;
 struct iio_dev* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,struct iio_dev*) ;
 struct regmap* FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,struct iio_dev*) ;
 struct mxc6255_data* FUNC_9 (struct iio_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_9,
    const struct i2c_device_id *VAR_10)
{
 struct mxc6255_data *VAR_11;
 struct iio_dev *VAR_12;
 struct regmap *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_12 = FUNC_5(&VAR_9->dev, sizeof(*VAR_11));
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_7(VAR_9, &VAR_8);
 if (FUNC_1(VAR_13)) {
  FUNC_4(&VAR_9->dev, "Error initializing regmap\n");
  return FUNC_2(VAR_13);
 }

 VAR_11 = FUNC_9(VAR_12);
 FUNC_8(VAR_9, VAR_12);
 VAR_11->client = VAR_9;
 VAR_11->regmap = VAR_13;

 VAR_12->name = VAR_4;
 VAR_12->dev.parent = &VAR_9->dev;
 VAR_12->channels = VAR_6;
 VAR_12->num_channels = FUNC_0(VAR_6);
 VAR_12->modes = VAR_2;
 VAR_12->info = &VAR_7;

 VAR_15 = FUNC_10(VAR_11->regmap, VAR_5, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_4(&VAR_9->dev, "Error reading chip id %d\n", VAR_15);
  return VAR_15;
 }

 if ((VAR_14 & 0x1f) != VAR_3) {
  FUNC_4(&VAR_9->dev, "Invalid chip id %x\n", VAR_14);
  return -VAR_0;
 }

 FUNC_3(&VAR_9->dev, "Chip id %x\n", VAR_14);

 VAR_15 = FUNC_6(&VAR_9->dev, VAR_12);
 if (VAR_15 < 0) {
  FUNC_4(&VAR_9->dev, "Could not register IIO device\n");
  return VAR_15;
 }

 return 0;
}
