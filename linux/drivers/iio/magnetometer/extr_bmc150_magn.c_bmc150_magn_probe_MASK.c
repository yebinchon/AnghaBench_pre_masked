
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_9__ {struct device* parent; } ;
struct iio_dev {char const* name; int id; int * info; int modes; int available_scan_masks; int num_channels; int channels; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct bmc150_magn_data {int irq; TYPE_3__* dready_trig; int mutex; int orientation; struct device* dev; struct regmap* regmap; } ;
struct TYPE_10__ {struct device* parent; } ;
struct TYPE_11__ {int * ops; TYPE_2__ dev; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct bmc150_magn_data*) ;
 char* FUNC_3 (struct device*) ;
 int VAR_10 ;
 int FUNC_4 (struct bmc150_magn_data*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct device*,char*,char const*) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_8 (struct device*,int) ;
 TYPE_3__* FUNC_9 (struct device*,char*,char const*,int ) ;
 int FUNC_10 (int,TYPE_3__*) ;
 int FUNC_11 (struct iio_dev*) ;
 int VAR_13 ;
 struct bmc150_magn_data* FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (struct device*,char*,int *) ;
 int VAR_14 ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (struct iio_dev*) ;
 int FUNC_18 (struct iio_dev*,int ,int ,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*,int ) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (int,int ,int *,int,int ,TYPE_3__*) ;

int FUNC_25(struct device *VAR_15, struct regmap *VAR_16,
        int VAR_17, const char *VAR_18)
{
 struct bmc150_magn_data *VAR_19;
 struct iio_dev *VAR_20;
 int VAR_21;

 VAR_20 = FUNC_8(VAR_15, sizeof(*VAR_19));
 if (!VAR_20)
  return -VAR_3;

 VAR_19 = FUNC_12(VAR_20);
 FUNC_7(VAR_15, VAR_20);
 VAR_19->regmap = VAR_16;
 VAR_19->irq = VAR_17;
 VAR_19->dev = VAR_15;

 VAR_21 = FUNC_13(VAR_15, "mount-matrix",
    &VAR_19->orientation);
 if (VAR_21)
  return VAR_21;

 if (!VAR_18 && FUNC_0(VAR_15))
  VAR_18 = FUNC_3(VAR_15);

 FUNC_19(&VAR_19->mutex);

 VAR_21 = FUNC_2(VAR_19);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_20->dev.parent = VAR_15;
 VAR_20->channels = VAR_8;
 VAR_20->num_channels = FUNC_1(VAR_8);
 VAR_20->available_scan_masks = VAR_10;
 VAR_20->name = VAR_18;
 VAR_20->modes = VAR_4;
 VAR_20->info = &VAR_9;

 if (VAR_17 > 0) {
  VAR_19->dready_trig = FUNC_9(VAR_15,
          "%s-dev%d",
          VAR_20->name,
          VAR_20->id);
  if (!VAR_19->dready_trig) {
   VAR_21 = -VAR_3;
   FUNC_6(VAR_15, "iio trigger alloc failed\n");
   goto err_poweroff;
  }

  VAR_19->dready_trig->dev.parent = VAR_15;
  VAR_19->dready_trig->ops = &VAR_12;
  FUNC_15(VAR_19->dready_trig, VAR_20);
  VAR_21 = FUNC_14(VAR_19->dready_trig);
  if (VAR_21) {
   FUNC_6(VAR_15, "iio trigger register failed\n");
   goto err_poweroff;
  }

  VAR_21 = FUNC_24(VAR_17,
        VAR_14,
        ((void*)0),
        VAR_6 | VAR_5,
        VAR_1,
        VAR_19->dready_trig);
  if (VAR_21 < 0) {
   FUNC_6(VAR_15, "request irq %d failed\n", VAR_17);
   goto err_trigger_unregister;
  }
 }

 VAR_21 = FUNC_18(VAR_20,
      VAR_13,
      VAR_11,
      &VAR_7);
 if (VAR_21 < 0) {
  FUNC_6(VAR_15, "iio triggered buffer setup failed\n");
  goto err_free_irq;
 }

 VAR_21 = FUNC_21(VAR_15);
 if (VAR_21)
  goto err_buffer_cleanup;

 FUNC_20(VAR_15);
 FUNC_22(VAR_15,
      VAR_0);
 FUNC_23(VAR_15);

 VAR_21 = FUNC_11(VAR_20);
 if (VAR_21 < 0) {
  FUNC_6(VAR_15, "unable to register iio device\n");
  goto err_buffer_cleanup;
 }

 FUNC_5(VAR_15, "Registered device %s\n", VAR_18);
 return 0;

err_buffer_cleanup:
 FUNC_17(VAR_20);
err_free_irq:
 if (VAR_17 > 0)
  FUNC_10(VAR_17, VAR_19->dready_trig);
err_trigger_unregister:
 if (VAR_19->dready_trig)
  FUNC_16(VAR_19->dready_trig);
err_poweroff:
 FUNC_4(VAR_19, VAR_2, 1);
 return VAR_21;
}
