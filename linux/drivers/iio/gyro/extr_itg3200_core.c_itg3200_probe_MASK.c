
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct itg3200 {struct i2c_client* i2c; int orientation; } ;
struct TYPE_6__ {TYPE_3__* parent; } ;
struct iio_dev {int modes; int * info; int available_scan_masks; int num_channels; int channels; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_8__ {TYPE_2__* driver; } ;
struct i2c_client {scalar_t__ irq; TYPE_3__ dev; } ;
struct TYPE_7__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,char*,scalar_t__) ;
 struct iio_dev* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct itg3200* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (TYPE_3__*,char*,int *) ;
 int VAR_2 ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_5,
  const struct i2c_device_id *VAR_6)
{
 int VAR_7;
 struct itg3200 *VAR_8;
 struct iio_dev *VAR_9;

 FUNC_1(&VAR_5->dev, "probe I2C dev with IRQ %i", VAR_5->irq);

 VAR_9 = FUNC_2(&VAR_5->dev, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_9);

 VAR_7 = FUNC_6(&VAR_5->dev, "mount-matrix",
    &VAR_8->orientation);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_5, VAR_9);
 VAR_8->i2c = VAR_5;

 VAR_9->dev.parent = &VAR_5->dev;
 VAR_9->name = VAR_5->dev.driver->name;
 VAR_9->channels = VAR_3;
 VAR_9->num_channels = FUNC_0(VAR_3);
 VAR_9->available_scan_masks = VAR_2;
 VAR_9->info = &VAR_4;
 VAR_9->modes = VAR_1;

 VAR_7 = FUNC_7(VAR_9);
 if (VAR_7)
  return VAR_7;

 if (VAR_5->irq) {
  VAR_7 = FUNC_10(VAR_9);
  if (VAR_7)
   goto error_unconfigure_buffer;
 }

 VAR_7 = FUNC_9(VAR_9);
 if (VAR_7)
  goto error_remove_trigger;

 VAR_7 = FUNC_4(VAR_9);
 if (VAR_7)
  goto error_remove_trigger;

 return 0;

error_remove_trigger:
 if (VAR_5->irq)
  FUNC_11(VAR_9);
error_unconfigure_buffer:
 FUNC_8(VAR_9);
 return VAR_7;
}
