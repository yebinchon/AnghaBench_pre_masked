
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * parent; } ;
struct iio_dev {int name; int modes; int available_scan_masks; int * info; int num_channels; TYPE_2__* channels; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;
struct ak8974 {int drdy_active_low; int drdy_irq; TYPE_2__* regs; int name; int map; int orientation; int lock; struct i2c_client* i2c; } ;
struct TYPE_8__ {int supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_9 ;
 int FUNC_3 (struct ak8974*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct ak8974*) ;
 int VAR_17 ;
 int FUNC_5 (struct ak8974*) ;
 int FUNC_6 (struct ak8974*,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 struct iio_dev* FUNC_9 (int *,int) ;
 int FUNC_10 (struct i2c_client*,int *) ;
 int FUNC_11 (int *,int ,TYPE_2__*) ;
 int FUNC_12 (int *,int,int ,int ,unsigned long,int ,struct ak8974*) ;
 int FUNC_13 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_14 (struct iio_dev*) ;
 struct ak8974* FUNC_15 (struct iio_dev*) ;
 int FUNC_16 (int *,char*,int *) ;
 int FUNC_17 (struct iio_dev*) ;
 int FUNC_18 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_19 (int) ;
 unsigned long FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *,int ) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int ,TYPE_2__*) ;
 int FUNC_31 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_32(struct i2c_client *VAR_18,
   const struct i2c_device_id *VAR_19)
{
 struct iio_dev *VAR_20;
 struct ak8974 *VAR_21;
 unsigned long VAR_22;
 int VAR_23 = VAR_18->irq;
 int VAR_24;


 VAR_20 = FUNC_9(&VAR_18->dev, sizeof(*VAR_21));
 if (VAR_20 == ((void*)0))
  return -VAR_3;

 VAR_21 = FUNC_15(VAR_20);
 FUNC_13(VAR_18, VAR_20);
 VAR_21->i2c = VAR_18;
 FUNC_21(&VAR_21->lock);

 VAR_24 = FUNC_16(&VAR_18->dev, "mount-matrix",
        &VAR_21->orientation);
 if (VAR_24)
  return VAR_24;

 VAR_21->regs[0].supply = VAR_14;
 VAR_21->regs[1].supply = VAR_15;

 VAR_24 = FUNC_11(&VAR_18->dev,
          FUNC_0(VAR_21->regs),
          VAR_21->regs);
 if (VAR_24 < 0) {
  FUNC_7(&VAR_18->dev, "cannot get regulators\n");
  return VAR_24;
 }

 VAR_24 = FUNC_31(FUNC_0(VAR_21->regs), VAR_21->regs);
 if (VAR_24 < 0) {
  FUNC_7(&VAR_18->dev, "cannot enable regulators\n");
  return VAR_24;
 }


 FUNC_24(&VAR_18->dev);
 FUNC_27(&VAR_18->dev);
 FUNC_23(&VAR_18->dev);

 VAR_21->map = FUNC_10(VAR_18, &VAR_16);
 if (FUNC_1(VAR_21->map)) {
  FUNC_7(&VAR_18->dev, "failed to allocate register map\n");
  return FUNC_2(VAR_21->map);
 }

 VAR_24 = FUNC_6(VAR_21, VAR_2);
 if (VAR_24) {
  FUNC_7(&VAR_18->dev, "could not power on\n");
  goto power_off;
 }

 VAR_24 = FUNC_3(VAR_21);
 if (VAR_24) {
  FUNC_7(&VAR_18->dev, "neither AK8974 nor AMI30x found\n");
  goto power_off;
 }

 VAR_24 = FUNC_5(VAR_21);
 if (VAR_24)
  FUNC_7(&VAR_18->dev, "selftest failed (continuing anyway)\n");

 VAR_24 = FUNC_4(VAR_21);
 if (VAR_24) {
  FUNC_7(&VAR_18->dev, "AK8974 reset failed\n");
  goto power_off;
 }

 FUNC_28(&VAR_18->dev,
      VAR_0);
 FUNC_29(&VAR_18->dev);
 FUNC_25(&VAR_18->dev);

 VAR_20->dev.parent = &VAR_18->dev;
 VAR_20->channels = VAR_9;
 VAR_20->num_channels = FUNC_0(VAR_9);
 VAR_20->info = &VAR_13;
 VAR_20->available_scan_masks = VAR_17;
 VAR_20->modes = VAR_4;
 VAR_20->name = VAR_21->name;

 VAR_24 = FUNC_18(VAR_20, ((void*)0),
      VAR_12,
      ((void*)0));
 if (VAR_24) {
  FUNC_7(&VAR_18->dev, "triggered buffer setup failed\n");
  goto disable_pm;
 }


 if (VAR_23 > 0) {
  VAR_22 = FUNC_20(FUNC_19(VAR_23));
  if (VAR_22 == VAR_8) {
   FUNC_8(&VAR_18->dev, "enable rising edge DRDY IRQ\n");
  } else if (VAR_22 == VAR_7) {
   VAR_21->drdy_active_low = 1;
   FUNC_8(&VAR_18->dev, "enable falling edge DRDY IRQ\n");
  } else {
   VAR_22 = VAR_8;
  }
  VAR_22 |= VAR_5;
  VAR_22 |= VAR_6;

  VAR_24 = FUNC_12(&VAR_18->dev,
      VAR_23,
      VAR_10,
      VAR_11,
      VAR_22,
      VAR_21->name,
      VAR_21);
  if (VAR_24) {
   FUNC_7(&VAR_18->dev, "unable to request DRDY IRQ "
    "- proceeding without IRQ\n");
   goto no_irq;
  }
  VAR_21->drdy_irq = 1;
 }

no_irq:
 VAR_24 = FUNC_14(VAR_20);
 if (VAR_24) {
  FUNC_7(&VAR_18->dev, "device register failed\n");
  goto cleanup_buffer;
 }

 return 0;

cleanup_buffer:
 FUNC_17(VAR_20);
disable_pm:
 FUNC_26(&VAR_18->dev);
 FUNC_22(&VAR_18->dev);
 FUNC_6(VAR_21, VAR_1);
power_off:
 FUNC_30(FUNC_0(VAR_21->regs), VAR_21->regs);

 return VAR_24;
}
