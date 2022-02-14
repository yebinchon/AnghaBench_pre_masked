
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device_id {int name; scalar_t__ driver_data; } ;
struct device {int of_node; int parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int of_node; struct device* parent; } ;
struct iio_dev {int channels; int num_channels; int info; int name; int modes; TYPE_1__ dev; } ;
struct axp_data {scalar_t__ adc_en2; int maps; int (* adc_rate ) (struct axp20x_adc_iio*,int) ;int adc_en1_mask; int channels; int num_channels; int iio_info; } ;
struct axp20x_dev {int regmap; } ;
struct axp20x_adc_iio {int regmap; struct axp_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct axp20x_dev* FUNC_1 (int ) ;
 struct iio_dev* FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ) ;
 int FUNC_5 (struct iio_dev*) ;
 struct axp20x_adc_iio* FUNC_6 (struct iio_dev*) ;
 scalar_t__ FUNC_7 (struct device*) ;
 struct platform_device_id* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct platform_device*,struct iio_dev*) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (struct axp20x_adc_iio*,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct axp20x_adc_iio *VAR_6;
 struct iio_dev *VAR_7;
 struct axp20x_dev *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_5->dev.parent);

 VAR_7 = FUNC_2(&VAR_5->dev, sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_3;

 VAR_6 = FUNC_6(VAR_7);
 FUNC_9(VAR_5, VAR_7);

 VAR_6->regmap = VAR_8->regmap;
 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->dev.of_node = VAR_5->dev.of_node;
 VAR_7->modes = VAR_4;

 if (!VAR_5->dev.of_node) {
  const struct platform_device_id *VAR_10;

  VAR_10 = FUNC_8(VAR_5);
  VAR_6->data = (struct axp_data *)VAR_10->driver_data;
 } else {
  struct device *VAR_11 = &VAR_5->dev;

  VAR_6->data = (struct axp_data *)FUNC_7(VAR_11);
 }

 VAR_7->name = FUNC_8(VAR_5)->name;
 VAR_7->info = VAR_6->data->iio_info;
 VAR_7->num_channels = VAR_6->data->num_channels;
 VAR_7->channels = VAR_6->data->channels;


 FUNC_11(VAR_6->regmap, VAR_0, VAR_6->data->adc_en1_mask);

 if (VAR_6->data->adc_en2)

  FUNC_10(VAR_6->regmap, VAR_1,
       VAR_2, VAR_2);


 VAR_6->data->adc_rate(VAR_6, 100);

 VAR_9 = FUNC_4(VAR_7, VAR_6->data->maps);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_5->dev, "failed to register IIO maps: %d\n", VAR_9);
  goto fail_map;
 }

 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_5->dev, "could not register the device\n");
  goto fail_register;
 }

 return 0;

fail_register:
 FUNC_5(VAR_7);

fail_map:
 FUNC_11(VAR_6->regmap, VAR_0, 0);

 if (VAR_6->data->adc_en2)
  FUNC_11(VAR_6->regmap, VAR_1, 0);

 return VAR_9;
}
