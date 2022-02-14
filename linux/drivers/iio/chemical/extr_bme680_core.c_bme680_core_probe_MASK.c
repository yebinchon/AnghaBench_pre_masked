
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {char const* name; int modes; int * info; int num_channels; int channels; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct bme680_data {int oversampling_humid; int oversampling_press; int oversampling_temp; int heater_temp; int heater_dur; int bme680; struct regmap* regmap; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bme680_data*) ;
 int FUNC_3 (struct bme680_data*) ;
 int VAR_8 ;
 char* FUNC_4 (struct device*) ;
 int FUNC_5 (struct bme680_data*,int *) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_8 (struct device*,int) ;
 int FUNC_9 (struct device*,struct iio_dev*) ;
 struct bme680_data* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct regmap*,int ,unsigned int*) ;
 int FUNC_12 (struct regmap*,int ,int ) ;

int FUNC_13(struct device *VAR_9, struct regmap *VAR_10,
        const char *VAR_11)
{
 struct iio_dev *VAR_12;
 struct bme680_data *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_15 = FUNC_12(VAR_10, VAR_3,
      VAR_1);
 if (VAR_15 < 0) {
  FUNC_6(VAR_9, "Failed to reset chip\n");
  return VAR_15;
 }

 VAR_15 = FUNC_11(VAR_10, VAR_2, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_6(VAR_9, "Error reading chip ID\n");
  return VAR_15;
 }

 if (VAR_14 != VAR_0) {
  FUNC_6(VAR_9, "Wrong chip ID, got %x expected %x\n",
    VAR_14, VAR_0);
  return -VAR_4;
 }

 VAR_12 = FUNC_8(VAR_9, sizeof(*VAR_13));
 if (!VAR_12)
  return -VAR_5;

 if (!VAR_11 && FUNC_0(VAR_9))
  VAR_11 = FUNC_4(VAR_9);

 VAR_13 = FUNC_10(VAR_12);
 FUNC_7(VAR_9, VAR_12);
 VAR_13->regmap = VAR_10;
 VAR_12->dev.parent = VAR_9;
 VAR_12->name = VAR_11;
 VAR_12->channels = VAR_7;
 VAR_12->num_channels = FUNC_1(VAR_7);
 VAR_12->info = &VAR_8;
 VAR_12->modes = VAR_6;


 VAR_13->oversampling_humid = 2;
 VAR_13->oversampling_press = 4;
 VAR_13->oversampling_temp = 8;
 VAR_13->heater_temp = 320;
 VAR_13->heater_dur = 150;

 VAR_15 = FUNC_2(VAR_13);
 if (VAR_15 < 0) {
  FUNC_6(VAR_9, "failed to set chip_config data\n");
  return VAR_15;
 }

 VAR_15 = FUNC_3(VAR_13);
 if (VAR_15 < 0) {
  FUNC_6(VAR_9, "failed to set gas config data\n");
  return VAR_15;
 }

 VAR_15 = FUNC_5(VAR_13, &VAR_13->bme680);
 if (VAR_15 < 0) {
  FUNC_6(VAR_9,
   "failed to read calibration coefficients at probe\n");
  return VAR_15;
 }

 return FUNC_9(VAR_9, VAR_12);
}
