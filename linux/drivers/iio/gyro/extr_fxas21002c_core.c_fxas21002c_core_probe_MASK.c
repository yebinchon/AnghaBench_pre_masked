
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap_field {int dummy; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {char const* name; int * info; int modes; int num_channels; int channels; TYPE_1__ dev; } ;
struct fxas21002c_data {int irq; int lock; struct regmap_field** regmap_fields; struct regmap* regmap; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct regmap_field*) ;
 int FUNC_2 (struct regmap_field*) ;
 int FUNC_3 (struct device*,struct iio_dev*) ;
 int FUNC_4 (struct device*,int ,struct fxas21002c_data*) ;
 struct iio_dev* FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,struct iio_dev*,int *,int ,int *) ;
 struct regmap_field* FUNC_7 (struct device*,struct regmap*,int ) ;
 int VAR_3 ;
 int FUNC_8 (struct fxas21002c_data*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct fxas21002c_data*) ;
 int * VAR_6 ;
 int FUNC_10 (struct fxas21002c_data*) ;
 int VAR_7 ;
 int FUNC_11 (struct fxas21002c_data*) ;
 int FUNC_12 (struct iio_dev*) ;
 struct fxas21002c_data* FUNC_13 (struct iio_dev*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*,int) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;

int FUNC_22(struct device *VAR_8, struct regmap *VAR_9, int VAR_10,
     const char *VAR_11)
{
 struct fxas21002c_data *VAR_12;
 struct iio_dev *VAR_13;
 struct regmap_field *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_13 = FUNC_5(VAR_8, sizeof(*VAR_12));
 if (!VAR_13)
  return -VAR_0;

 VAR_12 = FUNC_13(VAR_13);
 FUNC_3(VAR_8, VAR_13);
 VAR_12->irq = VAR_10;
 VAR_12->regmap = VAR_9;

 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  VAR_14 = FUNC_7(VAR_8, VAR_12->regmap,
         VAR_6[VAR_15]);
  if (FUNC_1(VAR_14))
   return FUNC_2(VAR_14);

  VAR_12->regmap_fields[VAR_15] = VAR_14;
 }

 FUNC_14(&VAR_12->lock);

 VAR_16 = FUNC_10(VAR_12);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_9(VAR_12);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_4(VAR_8, VAR_5,
           VAR_12);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_8(VAR_12);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_13->dev.parent = VAR_8;
 VAR_13->channels = VAR_3;
 VAR_13->num_channels = FUNC_0(VAR_3);
 VAR_13->name = VAR_11;
 VAR_13->modes = VAR_2;
 VAR_13->info = &VAR_4;

 VAR_16 = FUNC_11(VAR_12);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_6(VAR_8, VAR_13, ((void*)0),
           VAR_7, ((void*)0));
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_18(VAR_8);
 if (VAR_16)
  return VAR_16;

 FUNC_16(VAR_8);
 FUNC_19(VAR_8, 2000);
 FUNC_21(VAR_8);

 VAR_16 = FUNC_12(VAR_13);
 if (VAR_16 < 0)
  goto pm_disable;

 return 0;

pm_disable:
 FUNC_15(VAR_8);
 FUNC_20(VAR_8);
 FUNC_17(VAR_8);

 return VAR_16;
}
