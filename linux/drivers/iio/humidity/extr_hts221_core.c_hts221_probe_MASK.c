
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct regmap {int dummy; } ;
struct TYPE_4__ {struct device* parent; } ;
struct iio_dev {int * info; int name; int num_channels; int channels; int available_scan_masks; TYPE_1__ dev; int modes; } ;
struct hts221_hw {char const* name; int irq; struct device* dev; struct regmap* regmap; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int * avg_avl; } ;
struct TYPE_5__ {int hz; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,void*) ;
 struct iio_dev* FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*,struct iio_dev*) ;
 int FUNC_6 (struct hts221_hw*) ;
 int FUNC_7 (struct hts221_hw*) ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct hts221_hw*) ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_9 (struct hts221_hw*) ;
 int FUNC_10 (struct hts221_hw*) ;
 int VAR_11 ;
 int FUNC_11 (struct hts221_hw*,size_t,int ) ;
 int FUNC_12 (struct hts221_hw*,int ) ;
 struct hts221_hw* FUNC_13 (struct iio_dev*) ;
 int FUNC_14 (struct regmap*,int ,int ,int ) ;

int FUNC_15(struct device *VAR_12, int VAR_13, const char *VAR_14,
   struct regmap *VAR_15)
{
 struct iio_dev *VAR_16;
 struct hts221_hw *VAR_17;
 int VAR_18;
 u8 VAR_19;

 VAR_16 = FUNC_4(VAR_12, sizeof(*VAR_17));
 if (!VAR_16)
  return -VAR_0;

 FUNC_3(VAR_12, (void *)VAR_16);

 VAR_17 = FUNC_13(VAR_16);
 VAR_17->name = VAR_14;
 VAR_17->dev = VAR_12;
 VAR_17->irq = VAR_13;
 VAR_17->regmap = VAR_15;

 VAR_18 = FUNC_8(VAR_17);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_16->modes = VAR_6;
 VAR_16->dev.parent = VAR_17->dev;
 VAR_16->available_scan_masks = VAR_11;
 VAR_16->channels = VAR_8;
 VAR_16->num_channels = FUNC_0(VAR_8);
 VAR_16->name = VAR_2;
 VAR_16->info = &VAR_9;


 VAR_18 = FUNC_14(VAR_17->regmap, VAR_3,
     VAR_1,
     FUNC_1(VAR_1, 1));
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_12(VAR_17, VAR_10[0].hz);
 if (VAR_18 < 0)
  return VAR_18;


 VAR_18 = FUNC_9(VAR_17);
 if (VAR_18 < 0) {
  FUNC_2(VAR_17->dev, "failed to get rh calibration data\n");
  return VAR_18;
 }

 VAR_19 = VAR_7[VAR_4].avg_avl[3];
 VAR_18 = FUNC_11(VAR_17, VAR_4, VAR_19);
 if (VAR_18 < 0) {
  FUNC_2(VAR_17->dev, "failed to set rh oversampling ratio\n");
  return VAR_18;
 }


 VAR_18 = FUNC_10(VAR_17);
 if (VAR_18 < 0) {
  FUNC_2(VAR_17->dev,
   "failed to get temperature calibration data\n");
  return VAR_18;
 }

 VAR_19 = VAR_7[VAR_5].avg_avl[3];
 VAR_18 = FUNC_11(VAR_17, VAR_5, VAR_19);
 if (VAR_18 < 0) {
  FUNC_2(VAR_17->dev,
   "failed to set temperature oversampling ratio\n");
  return VAR_18;
 }

 if (VAR_17->irq > 0) {
  VAR_18 = FUNC_6(VAR_17);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_18 = FUNC_7(VAR_17);
  if (VAR_18)
   return VAR_18;
 }

 return FUNC_5(VAR_17->dev, VAR_16);
}
