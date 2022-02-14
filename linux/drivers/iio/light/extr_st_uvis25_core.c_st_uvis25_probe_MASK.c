
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_uvis25_hw {int irq; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {int * info; int name; int num_channels; int channels; TYPE_1__ dev; int modes; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,void*) ;
 struct iio_dev* FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct device*,struct iio_dev*) ;
 struct st_uvis25_hw* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 int VAR_3 ;
 int FUNC_7 (struct st_uvis25_hw*) ;
 int VAR_4 ;
 int FUNC_8 (struct st_uvis25_hw*) ;

int FUNC_9(struct device *VAR_5, int VAR_6, struct regmap *VAR_7)
{
 struct st_uvis25_hw *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_5, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_0;

 FUNC_1(VAR_5, (void *)VAR_9);

 VAR_8 = FUNC_4(VAR_9);
 VAR_8->irq = VAR_6;
 VAR_8->regmap = VAR_7;

 VAR_10 = FUNC_7(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9->modes = VAR_1;
 VAR_9->dev.parent = VAR_5;
 VAR_9->channels = VAR_3;
 VAR_9->num_channels = FUNC_0(VAR_3);
 VAR_9->name = VAR_2;
 VAR_9->info = &VAR_4;

 VAR_10 = FUNC_8(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_8->irq > 0) {
  VAR_10 = FUNC_5(VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 = FUNC_6(VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 return FUNC_3(VAR_5, VAR_9);
}
