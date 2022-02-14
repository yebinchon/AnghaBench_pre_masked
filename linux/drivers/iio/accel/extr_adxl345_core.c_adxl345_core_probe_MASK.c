
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {char const* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct adxl345_data {int type; struct regmap* regmap; int data_range; } ;
typedef enum adxl345_device_type { ____Placeholder_adxl345_device_type } adxl345_device_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct iio_dev*) ;
 struct adxl345_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct regmap*,int ,int *) ;
 int FUNC_7 (struct regmap*,int ,int ) ;

int FUNC_8(struct device *VAR_12, struct regmap *VAR_13,
         enum adxl345_device_type VAR_14, const char *VAR_15)
{
 struct adxl345_data *VAR_16;
 struct iio_dev *VAR_17;
 u32 VAR_18;
 int VAR_19;

 VAR_19 = FUNC_6(VAR_13, VAR_5, &VAR_18);
 if (VAR_19 < 0) {
  FUNC_1(VAR_12, "Error reading device ID: %d\n", VAR_19);
  return VAR_19;
 }

 if (VAR_18 != VAR_1) {
  FUNC_1(VAR_12, "Invalid device ID: %x, expected %x\n",
   VAR_18, VAR_1);
  return -VAR_7;
 }

 VAR_17 = FUNC_3(VAR_12, sizeof(*VAR_16));
 if (!VAR_17)
  return -VAR_8;

 VAR_16 = FUNC_5(VAR_17);
 FUNC_2(VAR_12, VAR_17);
 VAR_16->regmap = VAR_13;
 VAR_16->type = VAR_14;

 VAR_16->data_range = VAR_0;

 VAR_19 = FUNC_7(VAR_16->regmap, VAR_4,
      VAR_16->data_range);
 if (VAR_19 < 0) {
  FUNC_1(VAR_12, "Failed to set data range: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_17->dev.parent = VAR_12;
 VAR_17->name = VAR_15;
 VAR_17->info = &VAR_11;
 VAR_17->modes = VAR_9;
 VAR_17->channels = VAR_10;
 VAR_17->num_channels = FUNC_0(VAR_10);


 VAR_19 = FUNC_7(VAR_16->regmap, VAR_6,
      VAR_2);
 if (VAR_19 < 0) {
  FUNC_1(VAR_12, "Failed to enable measurement mode: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_4(VAR_17);
 if (VAR_19 < 0) {
  FUNC_1(VAR_12, "iio_device_register failed: %d\n", VAR_19);
  FUNC_7(VAR_16->regmap, VAR_6,
        VAR_3);
 }

 return VAR_19;
}
