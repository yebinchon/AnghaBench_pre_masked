
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc27xx_adc_data {scalar_t__ irq; struct device* dev; struct sc27xx_adc_data* hwlock; int base; int regmap; } ;
struct device {int parent; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int ,struct sc27xx_adc_data*) ;
 struct iio_dev* FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,struct iio_dev*) ;
 struct sc27xx_adc_data* FUNC_7 (int) ;
 struct sc27xx_adc_data* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct device_node*,int ) ;
 int FUNC_10 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_11 (struct platform_device*,int ) ;
 int VAR_4 ;
 int FUNC_12 (struct sc27xx_adc_data*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct device_node *VAR_10 = VAR_9->of_node;
 struct sc27xx_adc_data *VAR_11;
 struct iio_dev *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_5(VAR_9, sizeof(*VAR_11));
 if (!VAR_12)
  return -VAR_1;

 VAR_11 = FUNC_8(VAR_12);

 VAR_11->regmap = FUNC_2(VAR_9->parent, ((void*)0));
 if (!VAR_11->regmap) {
  FUNC_1(VAR_9, "failed to get ADC regmap\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_10(VAR_10, "reg", &VAR_11->base);
 if (VAR_13) {
  FUNC_1(VAR_9, "failed to get ADC base address\n");
  return VAR_13;
 }

 VAR_11->irq = FUNC_11(VAR_8, 0);
 if (VAR_11->irq < 0)
  return VAR_11->irq;

 VAR_13 = FUNC_9(VAR_10, 0);
 if (VAR_13 < 0) {
  FUNC_1(VAR_9, "failed to get hwspinlock id\n");
  return VAR_13;
 }

 VAR_11->hwlock = FUNC_7(VAR_13);
 if (!VAR_11->hwlock) {
  FUNC_1(VAR_9, "failed to request hwspinlock\n");
  return -VAR_2;
 }

 VAR_13 = FUNC_4(VAR_9, VAR_5,
         VAR_11->hwlock);
 if (VAR_13) {
  FUNC_1(VAR_9, "failed to add hwspinlock action\n");
  return VAR_13;
 }

 VAR_11->dev = VAR_9;

 VAR_13 = FUNC_12(VAR_11);
 if (VAR_13) {
  FUNC_1(VAR_9, "failed to enable ADC module\n");
  return VAR_13;
 }

 VAR_13 = FUNC_4(VAR_9, VAR_4, VAR_11);
 if (VAR_13) {
  FUNC_1(VAR_9, "failed to add ADC disable action\n");
  return VAR_13;
 }

 VAR_12->dev.parent = VAR_9;
 VAR_12->name = FUNC_3(VAR_9);
 VAR_12->modes = VAR_3;
 VAR_12->info = &VAR_7;
 VAR_12->channels = VAR_6;
 VAR_12->num_channels = FUNC_0(VAR_6);
 VAR_13 = FUNC_6(VAR_9, VAR_12);
 if (VAR_13)
  FUNC_1(VAR_9, "could not register iio (ADC)");

 return VAR_13;
}
