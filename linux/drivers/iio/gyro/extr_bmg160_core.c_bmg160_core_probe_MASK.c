
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_6__ {struct device* parent; } ;
struct iio_dev {char const* name; int id; int * info; int modes; int available_scan_masks; int num_channels; int channels; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct bmg160_data {int irq; TYPE_3__* motion_trig; TYPE_3__* dready_trig; int mutex; int orientation; struct regmap* regmap; } ;
struct TYPE_7__ {struct device* parent; } ;
struct TYPE_8__ {int * ops; TYPE_2__ dev; } ;


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
 int FUNC_2 (struct bmg160_data*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_3 (struct device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_6 (struct device*,int) ;
 void* FUNC_7 (struct device*,char*,char const*,int ) ;
 int FUNC_8 (struct device*,int,int ,int ,int ,int ,struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 int VAR_13 ;
 struct bmg160_data* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct device*,char*,int *) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (struct iio_dev*) ;
 int FUNC_16 (struct iio_dev*,int ,int ,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*,int ) ;
 int FUNC_21 (struct device*) ;

int FUNC_22(struct device *VAR_14, struct regmap *VAR_15, int VAR_16,
        const char *VAR_17)
{
 struct bmg160_data *VAR_18;
 struct iio_dev *VAR_19;
 int VAR_20;

 VAR_19 = FUNC_6(VAR_14, sizeof(*VAR_18));
 if (!VAR_19)
  return -VAR_2;

 VAR_18 = FUNC_10(VAR_19);
 FUNC_5(VAR_14, VAR_19);
 VAR_18->irq = VAR_16;
 VAR_18->regmap = VAR_15;

 VAR_20 = FUNC_11(VAR_14, "mount-matrix",
    &VAR_18->orientation);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_2(VAR_18);
 if (VAR_20 < 0)
  return VAR_20;

 FUNC_17(&VAR_18->mutex);

 if (FUNC_0(VAR_14))
  VAR_17 = FUNC_3(VAR_14);

 VAR_19->dev.parent = VAR_14;
 VAR_19->channels = VAR_7;
 VAR_19->num_channels = FUNC_1(VAR_7);
 VAR_19->name = VAR_17;
 VAR_19->available_scan_masks = VAR_5;
 VAR_19->modes = VAR_3;
 VAR_19->info = &VAR_10;

 if (VAR_18->irq > 0) {
  VAR_20 = FUNC_8(VAR_14,
      VAR_18->irq,
      VAR_8,
      VAR_9,
      VAR_4,
      VAR_1,
      VAR_19);
  if (VAR_20)
   return VAR_20;

  VAR_18->dready_trig = FUNC_7(VAR_14,
          "%s-dev%d",
          VAR_19->name,
          VAR_19->id);
  if (!VAR_18->dready_trig)
   return -VAR_2;

  VAR_18->motion_trig = FUNC_7(VAR_14,
         "%s-any-motion-dev%d",
         VAR_19->name,
         VAR_19->id);
  if (!VAR_18->motion_trig)
   return -VAR_2;

  VAR_18->dready_trig->dev.parent = VAR_14;
  VAR_18->dready_trig->ops = &VAR_12;
  FUNC_13(VAR_18->dready_trig, VAR_19);
  VAR_20 = FUNC_12(VAR_18->dready_trig);
  if (VAR_20)
   return VAR_20;

  VAR_18->motion_trig->dev.parent = VAR_14;
  VAR_18->motion_trig->ops = &VAR_12;
  FUNC_13(VAR_18->motion_trig, VAR_19);
  VAR_20 = FUNC_12(VAR_18->motion_trig);
  if (VAR_20) {
   VAR_18->motion_trig = ((void*)0);
   goto err_trigger_unregister;
  }
 }

 VAR_20 = FUNC_16(VAR_19,
      VAR_13,
      VAR_11,
      &VAR_6);
 if (VAR_20 < 0) {
  FUNC_4(VAR_14,
   "iio triggered buffer setup failed\n");
  goto err_trigger_unregister;
 }

 VAR_20 = FUNC_19(VAR_14);
 if (VAR_20)
  goto err_buffer_cleanup;

 FUNC_18(VAR_14);
 FUNC_20(VAR_14,
      VAR_0);
 FUNC_21(VAR_14);

 VAR_20 = FUNC_9(VAR_19);
 if (VAR_20 < 0) {
  FUNC_4(VAR_14, "unable to register iio device\n");
  goto err_buffer_cleanup;
 }

 return 0;

err_buffer_cleanup:
 FUNC_15(VAR_19);
err_trigger_unregister:
 if (VAR_18->dready_trig)
  FUNC_14(VAR_18->dready_trig);
 if (VAR_18->motion_trig)
  FUNC_14(VAR_18->motion_trig);

 return VAR_20;
}
