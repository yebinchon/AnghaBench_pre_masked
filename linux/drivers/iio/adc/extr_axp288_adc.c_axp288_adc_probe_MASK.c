
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct TYPE_4__ {TYPE_2__* parent; } ;
struct iio_dev {int modes; int * info; int num_channels; int channels; int name; TYPE_1__ dev; } ;
struct axp288_adc_info {scalar_t__ irq; int regmap; } ;
struct axp20x_dev {int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct axp288_adc_info*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct axp20x_dev* FUNC_3 (int ) ;
 struct iio_dev* FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*,int ) ;
 int FUNC_7 (struct iio_dev*) ;
 struct axp288_adc_info* FUNC_8 (struct iio_dev*) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct platform_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 int VAR_6;
 struct axp288_adc_info *VAR_7;
 struct iio_dev *VAR_8;
 struct axp20x_dev *VAR_9 = FUNC_3(VAR_5->dev.parent);

 VAR_8 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_8(VAR_8);
 VAR_7->irq = FUNC_9(VAR_5, 0);
 if (VAR_7->irq < 0)
  return VAR_7->irq;
 FUNC_10(VAR_5, VAR_8);
 VAR_7->regmap = VAR_9->regmap;




 VAR_6 = FUNC_1(VAR_7);
 if (VAR_6) {
  FUNC_2(&VAR_5->dev, "unable to enable ADC device\n");
  return VAR_6;
 }

 VAR_8->dev.parent = &VAR_5->dev;
 VAR_8->name = VAR_5->name;
 VAR_8->channels = VAR_2;
 VAR_8->num_channels = FUNC_0(VAR_2);
 VAR_8->info = &VAR_4;
 VAR_8->modes = VAR_1;
 VAR_6 = FUNC_6(VAR_8, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_8);
 if (VAR_6 < 0) {
  FUNC_2(&VAR_5->dev, "unable to register iio device\n");
  goto err_array_unregister;
 }
 return 0;

err_array_unregister:
 FUNC_7(VAR_8);

 return VAR_6;
}
