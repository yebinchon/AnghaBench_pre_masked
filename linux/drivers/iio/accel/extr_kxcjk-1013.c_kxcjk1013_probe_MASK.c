
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct kxcjk_1013_platform_data {int active_high_intr; } ;
struct kxcjk1013_data {int active_high_intr; int chipset; TYPE_3__* motion_trig; TYPE_3__* dready_trig; int is_smo8500_device; int mutex; struct i2c_client* client; } ;
struct TYPE_7__ {int * parent; } ;
struct iio_dev {char const* name; TYPE_3__* trig; int id; int * info; int modes; int available_scan_masks; int num_channels; int channels; TYPE_1__ dev; } ;
struct i2c_device_id {char* name; scalar_t__ driver_data; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
typedef enum kx_chipset { ____Placeholder_kx_chipset } kx_chipset ;
struct TYPE_8__ {int * parent; } ;
struct TYPE_9__ {int * ops; TYPE_2__ dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*) ;
 struct kxcjk_1013_platform_data* FUNC_3 (int *) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 void* FUNC_5 (int *,char*,char const*,int ) ;
 int FUNC_6 (int *,scalar_t__,int ,int ,int ,int ,struct iio_dev*) ;
 int FUNC_7 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 int VAR_7 ;
 struct kxcjk1013_data* FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (struct iio_dev*) ;
 int FUNC_15 (struct iio_dev*,int *,int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (struct kxcjk1013_data*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_17 (int *,int*,int *) ;
 int VAR_13 ;
 int FUNC_18 (struct kxcjk1013_data*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int FUNC_24(struct i2c_client *VAR_16,
      const struct i2c_device_id *VAR_17)
{
 struct kxcjk1013_data *VAR_18;
 struct iio_dev *VAR_19;
 struct kxcjk_1013_platform_data *VAR_20;
 const char *VAR_21;
 int VAR_22;

 VAR_19 = FUNC_4(&VAR_16->dev, sizeof(*VAR_18));
 if (!VAR_19)
  return -VAR_1;

 VAR_18 = FUNC_9(VAR_19);
 FUNC_7(VAR_16, VAR_19);
 VAR_18->client = VAR_16;

 VAR_20 = FUNC_3(&VAR_16->dev);
 if (VAR_20)
  VAR_18->active_high_intr = VAR_20->active_high_intr;
 else
  VAR_18->active_high_intr = 1;

 if (VAR_17) {
  VAR_18->chipset = (enum kx_chipset)(VAR_17->driver_data);
  VAR_21 = VAR_17->name;
 } else if (FUNC_0(&VAR_16->dev)) {
  VAR_21 = FUNC_17(&VAR_16->dev,
         &VAR_18->chipset,
         &VAR_18->is_smo8500_device);
 } else
  return -VAR_0;

 VAR_22 = FUNC_16(VAR_18);
 if (VAR_22 < 0)
  return VAR_22;

 FUNC_19(&VAR_18->mutex);

 VAR_19->dev.parent = &VAR_16->dev;
 VAR_19->channels = VAR_9;
 VAR_19->num_channels = FUNC_1(VAR_9);
 VAR_19->available_scan_masks = VAR_13;
 VAR_19->name = VAR_21;
 VAR_19->modes = VAR_2;
 VAR_19->info = &VAR_12;

 if (VAR_16->irq > 0 && !VAR_18->is_smo8500_device) {
  VAR_22 = FUNC_6(&VAR_16->dev, VAR_16->irq,
      VAR_10,
      VAR_11,
      VAR_3,
      VAR_4,
      VAR_19);
  if (VAR_22)
   goto err_poweroff;

  VAR_18->dready_trig = FUNC_5(&VAR_16->dev,
          "%s-dev%d",
          VAR_19->name,
          VAR_19->id);
  if (!VAR_18->dready_trig) {
   VAR_22 = -VAR_1;
   goto err_poweroff;
  }

  VAR_18->motion_trig = FUNC_5(&VAR_16->dev,
         "%s-any-motion-dev%d",
         VAR_19->name,
         VAR_19->id);
  if (!VAR_18->motion_trig) {
   VAR_22 = -VAR_1;
   goto err_poweroff;
  }

  VAR_18->dready_trig->dev.parent = &VAR_16->dev;
  VAR_18->dready_trig->ops = &VAR_15;
  FUNC_12(VAR_18->dready_trig, VAR_19);
  VAR_19->trig = VAR_18->dready_trig;
  FUNC_10(VAR_19->trig);
  VAR_22 = FUNC_11(VAR_18->dready_trig);
  if (VAR_22)
   goto err_poweroff;

  VAR_18->motion_trig->dev.parent = &VAR_16->dev;
  VAR_18->motion_trig->ops = &VAR_15;
  FUNC_12(VAR_18->motion_trig, VAR_19);
  VAR_22 = FUNC_11(VAR_18->motion_trig);
  if (VAR_22) {
   VAR_18->motion_trig = ((void*)0);
   goto err_trigger_unregister;
  }
 }

 VAR_22 = FUNC_15(VAR_19,
      &VAR_7,
      VAR_14,
      &VAR_8);
 if (VAR_22 < 0) {
  FUNC_2(&VAR_16->dev, "iio triggered buffer setup failed\n");
  goto err_trigger_unregister;
 }

 VAR_22 = FUNC_21(&VAR_16->dev);
 if (VAR_22)
  goto err_buffer_cleanup;

 FUNC_20(&VAR_16->dev);
 FUNC_22(&VAR_16->dev,
      VAR_5);
 FUNC_23(&VAR_16->dev);

 VAR_22 = FUNC_8(VAR_19);
 if (VAR_22 < 0) {
  FUNC_2(&VAR_16->dev, "unable to register iio device\n");
  goto err_buffer_cleanup;
 }

 return 0;

err_buffer_cleanup:
 if (VAR_18->dready_trig)
  FUNC_14(VAR_19);
err_trigger_unregister:
 if (VAR_18->dready_trig)
  FUNC_13(VAR_18->dready_trig);
 if (VAR_18->motion_trig)
  FUNC_13(VAR_18->motion_trig);
err_poweroff:
 FUNC_18(VAR_18, VAR_6);

 return VAR_22;
}
