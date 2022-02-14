
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct regmap {int dummy; } ;
struct mpu3050 {int divisor; TYPE_2__* regs; int orientation; int lpf; int fullscale; int lock; struct regmap* map; struct device* dev; } ;
struct TYPE_5__ {struct device* parent; } ;
struct iio_dev {char const* name; int modes; int available_scan_masks; int * info; int num_channels; TYPE_2__* channels; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int supply; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,unsigned int,unsigned int) ;
 int FUNC_3 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*,int ,TYPE_2__*) ;
 int FUNC_6 (struct iio_dev*) ;
 int VAR_9 ;
 struct mpu3050* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct device*,char*,int *) ;
 int FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*,int ,int ,int *) ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_11 (struct mpu3050*) ;
 int VAR_12 ;
 int FUNC_12 (struct mpu3050*) ;
 int FUNC_13 (struct mpu3050*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_14 (struct iio_dev*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*,int) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct regmap*,int ,unsigned int*) ;

int FUNC_23(struct device *VAR_17,
    struct regmap *VAR_18,
    int VAR_19,
    const char *VAR_20)
{
 struct iio_dev *VAR_21;
 struct mpu3050 *VAR_22;
 unsigned int VAR_23;
 int VAR_24;

 VAR_21 = FUNC_4(VAR_17, sizeof(*VAR_22));
 if (!VAR_21)
  return -VAR_1;
 VAR_22 = FUNC_7(VAR_21);

 VAR_22->dev = VAR_17;
 VAR_22->map = VAR_18;
 FUNC_15(&VAR_22->lock);

 VAR_22->fullscale = VAR_2;

 VAR_22->lpf = VAR_7;
 VAR_22->divisor = 99;


 VAR_24 = FUNC_8(VAR_17, "mount-matrix", &VAR_22->orientation);
 if (VAR_24)
  return VAR_24;


 VAR_22->regs[0].supply = VAR_13;
 VAR_22->regs[1].supply = VAR_14;
 VAR_24 = FUNC_5(VAR_17, FUNC_0(VAR_22->regs),
          VAR_22->regs);
 if (VAR_24) {
  FUNC_1(VAR_17, "Cannot get regulators\n");
  return VAR_24;
 }

 VAR_24 = FUNC_13(VAR_22);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_22(VAR_18, VAR_6, &VAR_23);
 if (VAR_24) {
  FUNC_1(VAR_17, "could not read device ID\n");
  VAR_24 = -VAR_0;

  goto err_power_down;
 }

 if ((VAR_23 & VAR_5) != VAR_4) {
  FUNC_1(VAR_17, "unsupported chip id %02x\n",
    (u8)(VAR_23 & VAR_5));
  VAR_24 = -VAR_0;
  goto err_power_down;
 }

 VAR_24 = FUNC_22(VAR_18, VAR_8, &VAR_23);
 if (VAR_24) {
  FUNC_1(VAR_17, "could not read device ID\n");
  VAR_24 = -VAR_0;

  goto err_power_down;
 }
 FUNC_2(VAR_17, "found MPU-3050 part no: %d, version: %d\n",
   ((VAR_23 >> 4) & 0xf), (VAR_23 & 0xf));

 VAR_24 = FUNC_11(VAR_22);
 if (VAR_24)
  goto err_power_down;

 VAR_21->dev.parent = VAR_17;
 VAR_21->channels = VAR_11;
 VAR_21->num_channels = FUNC_0(VAR_11);
 VAR_21->info = &VAR_12;
 VAR_21->available_scan_masks = VAR_15;
 VAR_21->modes = VAR_3;
 VAR_21->name = VAR_20;

 VAR_24 = FUNC_10(VAR_21, VAR_9,
      VAR_16,
      &VAR_10);
 if (VAR_24) {
  FUNC_1(VAR_17, "triggered buffer setup failed\n");
  goto err_power_down;
 }

 VAR_24 = FUNC_6(VAR_21);
 if (VAR_24) {
  FUNC_1(VAR_17, "device register failed\n");
  goto err_cleanup_buffer;
 }

 FUNC_3(VAR_17, VAR_21);


 if (VAR_19) {
  VAR_24 = FUNC_14(VAR_21, VAR_19);
  if (VAR_24)
   FUNC_1(VAR_17, "failed to register trigger\n");
 }


 FUNC_17(VAR_17);
 FUNC_19(VAR_17);
 FUNC_16(VAR_17);





 FUNC_20(VAR_17, 10000);
 FUNC_21(VAR_17);
 FUNC_18(VAR_17);

 return 0;

err_cleanup_buffer:
 FUNC_9(VAR_21);
err_power_down:
 FUNC_12(VAR_22);

 return VAR_24;
}
