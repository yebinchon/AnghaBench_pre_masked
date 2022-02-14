
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int parent; struct device_node* of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct TYPE_2__ {struct device_node* of_node; struct device* parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct iadc_chip {int poll_eoc; struct device* dev; int * rsense; int base; int lock; int complete; int regmap; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,char*,int ,int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct device*,int) ;
 struct iio_dev* FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,struct iio_dev*) ;
 int FUNC_7 (struct device*,int,int ,int ,char*,struct iadc_chip*) ;
 int FUNC_8 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct iadc_chip*) ;
 int FUNC_10 (struct iadc_chip*,struct device_node*) ;
 int FUNC_11 (struct iadc_chip*) ;
 int FUNC_12 (struct iadc_chip*) ;
 struct iadc_chip* FUNC_13 (struct iio_dev*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct device_node*,char*,int *) ;
 int FUNC_17 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_9)
{
 struct device_node *VAR_10 = VAR_9->dev.of_node;
 struct device *VAR_11 = &VAR_9->dev;
 struct iio_dev *VAR_12;
 struct iadc_chip *VAR_13;
 int VAR_14, VAR_15;
 u32 VAR_16;

 VAR_12 = FUNC_5(VAR_11, sizeof(*VAR_13));
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_13(VAR_12);
 VAR_13->dev = VAR_11;

 VAR_13->regmap = FUNC_3(VAR_11->parent, ((void*)0));
 if (!VAR_13->regmap)
  return -VAR_0;

 FUNC_14(&VAR_13->complete);
 FUNC_15(&VAR_13->lock);

 VAR_14 = FUNC_16(VAR_10, "reg", &VAR_16);
 if (VAR_14 < 0)
  return -VAR_0;

 VAR_13->base = VAR_16;

 VAR_14 = FUNC_12(VAR_13);
 if (VAR_14 < 0)
  return -VAR_0;

 VAR_14 = FUNC_10(VAR_13, VAR_10);
 if (VAR_14 < 0)
  return -VAR_0;

 FUNC_1(VAR_13->dev, "sense resistors %d and %d micro Ohm\n",
  VAR_13->rsense[VAR_4],
  VAR_13->rsense[VAR_3]);

 VAR_15 = FUNC_17(VAR_9, 0);
 if (VAR_15 == -VAR_2)
  return VAR_15;

 if (VAR_15 < 0)
  VAR_13->poll_eoc = 1;

 VAR_14 = FUNC_9(VAR_13);
 if (VAR_14 < 0) {
  FUNC_2(VAR_11, "reset failed\n");
  return VAR_14;
 }

 if (!VAR_13->poll_eoc) {
  VAR_14 = FUNC_7(VAR_11, VAR_15, VAR_8, 0,
     "spmi-iadc", VAR_13);
  if (!VAR_14)
   FUNC_8(VAR_15);
  else
   return VAR_14;
 } else {
  FUNC_4(VAR_13->dev, 1);
 }

 VAR_14 = FUNC_11(VAR_13);
 if (VAR_14 < 0) {
  FUNC_2(VAR_11, "failed offset calibration\n");
  return VAR_14;
 }

 VAR_12->dev.parent = VAR_11;
 VAR_12->dev.of_node = VAR_10;
 VAR_12->name = VAR_9->name;
 VAR_12->modes = VAR_5;
 VAR_12->info = &VAR_7;
 VAR_12->channels = VAR_6;
 VAR_12->num_channels = FUNC_0(VAR_6);

 return FUNC_6(VAR_11, VAR_12);
}
