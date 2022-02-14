
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct iio_dev {char const* name; int buffer; int * info; int modes; int available_scan_masks; int num_channels; int channels; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct bmc150_accel_data {int irq; struct regmap* regmap; TYPE_2__* chip_info; int mutex; int orientation; } ;
struct TYPE_4__ {char const* name; int num_channels; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bmc150_accel_data*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct iio_dev*,struct bmc150_accel_data*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct iio_dev*,struct bmc150_accel_data*) ;
 int FUNC_3 (struct bmc150_accel_data*,scalar_t__) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct device*,int,int ,int ,int ,int ,struct iio_dev*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct iio_dev*) ;
 int VAR_17 ;
 struct bmc150_accel_data* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct device*,char*,int *) ;
 int FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*,int ) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct regmap*,int ,int ) ;

int FUNC_20(struct device *VAR_18, struct regmap *VAR_19, int VAR_20,
       const char *VAR_21, bool VAR_22)
{
 struct bmc150_accel_data *VAR_23;
 struct iio_dev *VAR_24;
 int VAR_25;

 VAR_24 = FUNC_6(VAR_18, sizeof(*VAR_23));
 if (!VAR_24)
  return -VAR_5;

 VAR_23 = FUNC_10(VAR_24);
 FUNC_5(VAR_18, VAR_24);
 VAR_23->irq = VAR_20;

 VAR_23->regmap = VAR_19;

 VAR_25 = FUNC_11(VAR_18, "mount-matrix",
         &VAR_23->orientation);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_0(VAR_23);
 if (VAR_25 < 0)
  return VAR_25;

 FUNC_14(&VAR_23->mutex);

 VAR_24->dev.parent = VAR_18;
 VAR_24->channels = VAR_23->chip_info->channels;
 VAR_24->num_channels = VAR_23->chip_info->num_channels;
 VAR_24->name = VAR_21 ? VAR_21 : VAR_23->chip_info->name;
 VAR_24->available_scan_masks = VAR_15;
 VAR_24->modes = VAR_7;
 VAR_24->info = &VAR_11;

 VAR_25 = FUNC_13(VAR_24,
      &VAR_17,
      VAR_16,
      &VAR_9);
 if (VAR_25 < 0) {
  FUNC_4(VAR_18, "Failed: iio triggered buffer setup\n");
  return VAR_25;
 }

 if (VAR_23->irq > 0) {
  VAR_25 = FUNC_7(
      VAR_18, VAR_23->irq,
      VAR_13,
      VAR_14,
      VAR_8,
      VAR_1,
      VAR_24);
  if (VAR_25)
   goto err_buffer_cleanup;







  VAR_25 = FUNC_19(VAR_23->regmap, VAR_2,
       VAR_0);
  if (VAR_25 < 0) {
   FUNC_4(VAR_18, "Error writing reg_int_rst_latch\n");
   goto err_buffer_cleanup;
  }

  FUNC_1(VAR_24, VAR_23);

  VAR_25 = FUNC_2(VAR_24, VAR_23);
  if (VAR_25)
   goto err_buffer_cleanup;

  if (VAR_22) {
   VAR_24->modes |= VAR_6;
   VAR_24->info = &VAR_12;
   FUNC_8(VAR_24->buffer,
          VAR_10);
  }
 }

 VAR_25 = FUNC_16(VAR_18);
 if (VAR_25)
  goto err_trigger_unregister;

 FUNC_15(VAR_18);
 FUNC_17(VAR_18, VAR_4);
 FUNC_18(VAR_18);

 VAR_25 = FUNC_9(VAR_24);
 if (VAR_25 < 0) {
  FUNC_4(VAR_18, "Unable to register iio device\n");
  goto err_trigger_unregister;
 }

 return 0;

err_trigger_unregister:
 FUNC_3(VAR_23, VAR_3 - 1);
err_buffer_cleanup:
 FUNC_12(VAR_24);

 return VAR_25;
}
