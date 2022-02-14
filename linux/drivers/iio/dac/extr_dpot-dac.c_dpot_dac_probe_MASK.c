
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {int num_channels; int * channels; int modes; int * info; TYPE_1__ dev; int name; } ;
struct dpot_dac {int max_ohms; int vref; int dpot; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*) ;
 struct iio_dev* FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct iio_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int ,int*) ;
 struct dpot_dac* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct platform_device*,struct iio_dev*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct iio_dev *VAR_9;
 struct dpot_dac *VAR_10;
 enum iio_chan_type VAR_11;
 int VAR_12;

 VAR_9 = FUNC_5(VAR_8, sizeof(*VAR_10));
 if (!VAR_9)
  return -VAR_1;

 FUNC_11(VAR_7, VAR_9);
 VAR_10 = FUNC_10(VAR_9);

 VAR_9->name = FUNC_3(VAR_8);
 VAR_9->dev.parent = VAR_8;
 VAR_9->info = &VAR_6;
 VAR_9->modes = VAR_4;
 VAR_9->channels = &VAR_5;
 VAR_9->num_channels = 1;

 VAR_10->vref = FUNC_6(VAR_8, "vref");
 if (FUNC_0(VAR_10->vref)) {
  if (FUNC_1(VAR_10->vref) != -VAR_2)
   FUNC_2(&VAR_7->dev, "failed to get vref regulator\n");
  return FUNC_1(VAR_10->vref);
 }

 VAR_10->dpot = FUNC_4(VAR_8, "dpot");
 if (FUNC_0(VAR_10->dpot)) {
  if (FUNC_1(VAR_10->dpot) != -VAR_2)
   FUNC_2(VAR_8, "failed to get dpot input channel\n");
  return FUNC_1(VAR_10->dpot);
 }

 VAR_12 = FUNC_9(VAR_10->dpot, &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_11 != VAR_3) {
  FUNC_2(VAR_8, "dpot is of the wrong type\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_7(VAR_9);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_10->max_ohms = VAR_12;

 VAR_12 = FUNC_13(VAR_10->vref);
 if (VAR_12) {
  FUNC_2(VAR_8, "failed to enable the vref regulator\n");
  return VAR_12;
 }

 VAR_12 = FUNC_8(VAR_9);
 if (VAR_12) {
  FUNC_2(VAR_8, "failed to register iio device\n");
  goto disable_reg;
 }

 return 0;

disable_reg:
 FUNC_12(VAR_10->vref);
 return VAR_12;
}
