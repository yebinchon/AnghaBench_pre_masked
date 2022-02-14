
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct kxsd9_state {int scale; TYPE_2__* regs; int orientation; struct regmap* map; struct device* dev; } ;
struct TYPE_5__ {struct device* parent; } ;
struct iio_dev {char const* name; int available_scan_masks; int modes; int * info; TYPE_1__ dev; int num_channels; TYPE_2__* channels; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int supply; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*,int ,TYPE_2__*) ;
 int FUNC_5 (struct iio_dev*) ;
 int VAR_3 ;
 struct kxsd9_state* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct device*,char*,int *) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*,int ,int ,int *) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct kxsd9_state*) ;
 int FUNC_11 (struct kxsd9_state*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*,int) ;
 int FUNC_17 (struct device*) ;

int FUNC_18(struct device *VAR_11,
         struct regmap *VAR_12,
         const char *VAR_13)
{
 struct iio_dev *VAR_14;
 struct kxsd9_state *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_3(VAR_11, sizeof(*VAR_15));
 if (!VAR_14)
  return -VAR_0;

 VAR_15 = FUNC_6(VAR_14);
 VAR_15->dev = VAR_11;
 VAR_15->map = VAR_12;

 VAR_14->channels = VAR_5;
 VAR_14->num_channels = FUNC_0(VAR_5);
 VAR_14->name = VAR_13;
 VAR_14->dev.parent = VAR_11;
 VAR_14->info = &VAR_6;
 VAR_14->modes = VAR_1;
 VAR_14->available_scan_masks = VAR_9;


 VAR_16 = FUNC_7(VAR_11, "mount-matrix", &VAR_15->orientation);
 if (VAR_16)
  return VAR_16;


 VAR_15->regs[0].supply = VAR_8;
 VAR_15->regs[1].supply = VAR_7;
 VAR_16 = FUNC_4(VAR_11,
          FUNC_0(VAR_15->regs),
          VAR_15->regs);
 if (VAR_16) {
  FUNC_1(VAR_11, "Cannot get regulators\n");
  return VAR_16;
 }

 VAR_15->scale = VAR_2;

 FUNC_11(VAR_15);

 VAR_16 = FUNC_9(VAR_14,
      VAR_3,
      VAR_10,
      &VAR_4);
 if (VAR_16) {
  FUNC_1(VAR_11, "triggered buffer setup failed\n");
  goto err_power_down;
 }

 VAR_16 = FUNC_5(VAR_14);
 if (VAR_16)
  goto err_cleanup_buffer;

 FUNC_2(VAR_11, VAR_14);


 FUNC_13(VAR_11);
 FUNC_15(VAR_11);
 FUNC_12(VAR_11);





 FUNC_16(VAR_11, 2000);
 FUNC_17(VAR_11);
 FUNC_14(VAR_11);

 return 0;

err_cleanup_buffer:
 FUNC_8(VAR_14);
err_power_down:
 FUNC_10(VAR_15);

 return VAR_16;
}
