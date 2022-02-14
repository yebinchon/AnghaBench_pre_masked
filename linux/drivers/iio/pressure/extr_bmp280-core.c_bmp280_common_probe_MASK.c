
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_6__ {struct device* parent; } ;
struct iio_dev {char const* name; int num_channels; int modes; int * info; int channels; TYPE_1__ dev; } ;
struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int bmp280; int bmp180; } ;
struct bmp280_data {int start_up_time; struct gpio_desc* vddd; struct gpio_desc* vdda; struct device* dev; TYPE_2__ calib; TYPE_3__* chip_info; struct regmap* regmap; void* oversampling_temp; void* oversampling_humid; void* oversampling_press; int lock; } ;
struct TYPE_8__ {int (* chip_config ) (struct bmp280_data*) ;} ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_2 (struct device*,char const*,int,struct bmp280_data*) ;
 TYPE_3__ VAR_6 ;
 int FUNC_3 (struct bmp280_data*,int *) ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct bmp280_data*,int *,unsigned int) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,struct iio_dev*) ;
 struct gpio_desc* FUNC_8 (struct device*,char*,int ) ;
 struct iio_dev* FUNC_9 (struct device*,int) ;
 void* FUNC_10 (struct device*,char*) ;
 int FUNC_11 (struct gpio_desc*,int ) ;
 int FUNC_12 (struct iio_dev*) ;
 struct bmp280_data* FUNC_13 (struct iio_dev*) ;
 void* FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*,int) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct regmap*,int ,unsigned int*) ;
 int FUNC_26 (struct gpio_desc*) ;
 int FUNC_27 (struct gpio_desc*) ;
 int FUNC_28 (struct bmp280_data*) ;
 int FUNC_29 (int,int) ;

int FUNC_30(struct device *VAR_10,
   struct regmap *VAR_11,
   unsigned int VAR_12,
   const char *VAR_13,
   int VAR_14)
{
 int VAR_15;
 struct iio_dev *VAR_16;
 struct bmp280_data *VAR_17;
 unsigned int VAR_18;
 struct gpio_desc *VAR_19;

 VAR_16 = FUNC_9(VAR_10, sizeof(*VAR_17));
 if (!VAR_16)
  return -VAR_2;

 VAR_17 = FUNC_13(VAR_16);
 FUNC_15(&VAR_17->lock);
 VAR_17->dev = VAR_10;

 VAR_16->dev.parent = VAR_10;
 VAR_16->name = VAR_13;
 VAR_16->channels = VAR_7;
 VAR_16->info = &VAR_9;
 VAR_16->modes = VAR_4;

 switch (VAR_12) {
 case 129:
  VAR_16->num_channels = 2;
  VAR_17->chip_info = &VAR_6;
  VAR_17->oversampling_press = FUNC_14(8);
  VAR_17->oversampling_temp = FUNC_14(1);
  VAR_17->start_up_time = 10000;
  break;
 case 128:
  VAR_16->num_channels = 2;
  VAR_17->chip_info = &VAR_8;
  VAR_17->oversampling_press = FUNC_14(16);
  VAR_17->oversampling_temp = FUNC_14(2);
  VAR_17->start_up_time = 2000;
  break;
 case 130:
  VAR_16->num_channels = 3;
  VAR_17->chip_info = &VAR_5;
  VAR_17->oversampling_press = FUNC_14(16);
  VAR_17->oversampling_humid = FUNC_14(16);
  VAR_17->oversampling_temp = FUNC_14(2);
  VAR_17->start_up_time = 2000;
  break;
 default:
  return -VAR_1;
 }


 VAR_17->vddd = FUNC_10(VAR_10, "vddd");
 if (FUNC_0(VAR_17->vddd)) {
  FUNC_5(VAR_10, "failed to get VDDD regulator\n");
  return FUNC_1(VAR_17->vddd);
 }
 VAR_15 = FUNC_27(VAR_17->vddd);
 if (VAR_15) {
  FUNC_5(VAR_10, "failed to enable VDDD regulator\n");
  return VAR_15;
 }
 VAR_17->vdda = FUNC_10(VAR_10, "vdda");
 if (FUNC_0(VAR_17->vdda)) {
  FUNC_5(VAR_10, "failed to get VDDA regulator\n");
  VAR_15 = FUNC_1(VAR_17->vdda);
  goto out_disable_vddd;
 }
 VAR_15 = FUNC_27(VAR_17->vdda);
 if (VAR_15) {
  FUNC_5(VAR_10, "failed to enable VDDA regulator\n");
  goto out_disable_vddd;
 }

 FUNC_29(VAR_17->start_up_time, VAR_17->start_up_time + 100);


 VAR_19 = FUNC_8(VAR_10, "reset", VAR_3);

 if (!FUNC_0(VAR_19)) {
  FUNC_6(VAR_10, "release reset\n");
  FUNC_11(VAR_19, 0);
 }

 VAR_17->regmap = VAR_11;
 VAR_15 = FUNC_25(VAR_11, VAR_0, &VAR_18);
 if (VAR_15 < 0)
  goto out_disable_vdda;
 if (VAR_18 != VAR_12) {
  FUNC_5(VAR_10, "bad chip id: expected %x got %x\n",
   VAR_12, VAR_18);
  VAR_15 = -VAR_1;
  goto out_disable_vdda;
 }

 VAR_15 = VAR_17->chip_info->chip_config(VAR_17);
 if (VAR_15 < 0)
  goto out_disable_vdda;

 FUNC_7(VAR_10, VAR_16);






 if (VAR_18 == 129) {
  VAR_15 = FUNC_3(VAR_17, &VAR_17->calib.bmp180);
  if (VAR_15 < 0) {
   FUNC_5(VAR_17->dev,
    "failed to read calibration coefficients\n");
   goto out_disable_vdda;
  }
 } else if (VAR_18 == 128 || VAR_18 == 130) {
  VAR_15 = FUNC_4(VAR_17, &VAR_17->calib.bmp280, VAR_18);
  if (VAR_15 < 0) {
   FUNC_5(VAR_17->dev,
    "failed to read calibration coefficients\n");
   goto out_disable_vdda;
  }
 }






 if (VAR_14 > 0 || (VAR_18 == 129)) {
  VAR_15 = FUNC_2(VAR_10, VAR_13, VAR_14, VAR_17);
  if (VAR_15)
   goto out_disable_vdda;
 }


 FUNC_18(VAR_10);
 FUNC_22(VAR_10);
 FUNC_17(VAR_10);




 FUNC_23(VAR_10, VAR_17->start_up_time / 10);
 FUNC_24(VAR_10);
 FUNC_20(VAR_10);

 VAR_15 = FUNC_12(VAR_16);
 if (VAR_15)
  goto out_runtime_pm_disable;


 return 0;

out_runtime_pm_disable:
 FUNC_19(VAR_17->dev);
 FUNC_21(VAR_17->dev);
 FUNC_16(VAR_17->dev);
out_disable_vdda:
 FUNC_26(VAR_17->vdda);
out_disable_vddd:
 FUNC_26(VAR_17->vddd);
 return VAR_15;
}
