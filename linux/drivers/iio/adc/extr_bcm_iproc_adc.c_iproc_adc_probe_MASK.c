
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct iproc_adc_priv {scalar_t__ irqno; int adc_clk; int regmap; int completion; int mutex; } ;
struct TYPE_6__ {int of_node; TYPE_2__* parent; } ;
struct iio_dev {char* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 struct iio_dev* FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,int ,int ,int ,char*,struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 struct iproc_adc_priv* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (struct iio_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct platform_device*,int ) ;
 int FUNC_16 (struct platform_device*,struct iio_dev*) ;
 int FUNC_17 (int ,int ,int ,int ) ;
 int FUNC_18 (int ,char*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_10)
{
 struct iproc_adc_priv *VAR_11;
 struct iio_dev *VAR_12 = ((void*)0);
 int VAR_13;

 VAR_12 = FUNC_7(&VAR_10->dev,
     sizeof(*VAR_11));
 if (!VAR_12) {
  FUNC_5(&VAR_10->dev, "failed to allocate iio device\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_10(VAR_12);
 FUNC_16(VAR_10, VAR_12);

 FUNC_14(&VAR_11->mutex);

 FUNC_11(&VAR_11->completion);

 VAR_11->regmap = FUNC_18(VAR_10->dev.of_node,
      "adc-syscon");
 if (FUNC_1(VAR_11->regmap)) {
  FUNC_5(&VAR_10->dev, "failed to get handle for tsc syscon\n");
  VAR_13 = FUNC_2(VAR_11->regmap);
  return VAR_13;
 }

 VAR_11->adc_clk = FUNC_6(&VAR_10->dev, "tsc_clk");
 if (FUNC_1(VAR_11->adc_clk)) {
  FUNC_5(&VAR_10->dev,
   "failed getting clock tsc_clk\n");
  VAR_13 = FUNC_2(VAR_11->adc_clk);
  return VAR_13;
 }

 VAR_11->irqno = FUNC_15(VAR_10, 0);
 if (VAR_11->irqno <= 0)
  return -VAR_0;

 VAR_13 = FUNC_17(VAR_11->regmap, VAR_4,
    VAR_3, 0);
 if (VAR_13) {
  FUNC_5(&VAR_10->dev, "failed to write IPROC_REGCTL2 %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_8(&VAR_10->dev, VAR_11->irqno,
    VAR_8,
    VAR_9,
    VAR_5, "iproc-adc", VAR_12);
 if (VAR_13) {
  FUNC_5(&VAR_10->dev, "request_irq error %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_4(VAR_11->adc_clk);
 if (VAR_13) {
  FUNC_5(&VAR_10->dev,
   "clk_prepare_enable failed %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_13(VAR_12);
 if (VAR_13) {
  FUNC_5(&VAR_10->dev, "failed to enable adc %d\n", VAR_13);
  goto err_adc_enable;
 }

 VAR_12->name = "iproc-static-adc";
 VAR_12->dev.parent = &VAR_10->dev;
 VAR_12->dev.of_node = VAR_10->dev.of_node;
 VAR_12->info = &VAR_7;
 VAR_12->modes = VAR_2;
 VAR_12->channels = VAR_6;
 VAR_12->num_channels = FUNC_0(VAR_6);

 VAR_13 = FUNC_9(VAR_12);
 if (VAR_13) {
  FUNC_5(&VAR_10->dev, "iio_device_register failed:err %d\n", VAR_13);
  goto err_clk;
 }

 return 0;

err_clk:
 FUNC_12(VAR_12);
err_adc_enable:
 FUNC_3(VAR_11->adc_clk);

 return VAR_13;
}
