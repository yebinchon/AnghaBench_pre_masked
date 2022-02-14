
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stm32_adc_cfg {int clk_required; } ;
struct stm32_adc {scalar_t__ irq; TYPE_5__* dma_chan; int rx_dma_buf; int rx_buf; int * clk; struct stm32_adc_cfg const* cfg; int offset; int completion; int lock; int common; } ;
struct device {scalar_t__ of_node; TYPE_1__* driver; int parent; } ;
struct platform_device {struct device dev; int name; } ;
struct TYPE_7__ {scalar_t__ of_node; struct device* parent; } ;
struct iio_dev {int modes; int * info; TYPE_2__ dev; int name; } ;
struct TYPE_10__ {TYPE_3__* device; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {int of_match_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*) ;
 int * FUNC_5 (struct device*,int *) ;
 struct iio_dev* FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct device*,int,int ,int ,int ,struct stm32_adc*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (struct iio_dev*) ;
 int VAR_8 ;
 struct stm32_adc* FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_14 (int *) ;
 TYPE_4__* FUNC_15 (int ,struct device*) ;
 int FUNC_16 (scalar_t__,char*,int *) ;
 scalar_t__ FUNC_17 (struct platform_device*,int ) ;
 int FUNC_18 (struct platform_device*,struct stm32_adc*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct device*,int ) ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct device*) ;
 int FUNC_29 (int *) ;
 int VAR_9 ;
 int FUNC_30 (struct iio_dev*) ;
 int FUNC_31 (struct iio_dev*) ;
 int FUNC_32 (struct device*) ;
 int FUNC_33 (struct device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_34 (struct iio_dev*) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_35(struct platform_device *VAR_13)
{
 struct iio_dev *VAR_14;
 struct device *VAR_15 = &VAR_13->dev;
 struct stm32_adc *VAR_16;
 int VAR_17;

 if (!VAR_13->dev.of_node)
  return -VAR_1;

 VAR_14 = FUNC_6(&VAR_13->dev, sizeof(*VAR_16));
 if (!VAR_14)
  return -VAR_3;

 VAR_16 = FUNC_11(VAR_14);
 VAR_16->common = FUNC_3(VAR_13->dev.parent);
 FUNC_29(&VAR_16->lock);
 FUNC_14(&VAR_16->completion);
 VAR_16->cfg = (const struct stm32_adc_cfg *)
  FUNC_15(VAR_15->driver->of_match_table, VAR_15)->data;

 VAR_14->name = FUNC_4(&VAR_13->dev);
 VAR_14->dev.parent = &VAR_13->dev;
 VAR_14->dev.of_node = VAR_13->dev.of_node;
 VAR_14->info = &VAR_10;
 VAR_14->modes = VAR_4 | VAR_5;

 FUNC_18(VAR_13, VAR_16);

 VAR_17 = FUNC_16(VAR_13->dev.of_node, "reg", &VAR_16->offset);
 if (VAR_17 != 0) {
  FUNC_2(&VAR_13->dev, "missing reg property\n");
  return -VAR_0;
 }

 VAR_16->irq = FUNC_17(VAR_13, 0);
 if (VAR_16->irq < 0)
  return VAR_16->irq;

 VAR_17 = FUNC_7(&VAR_13->dev, VAR_16->irq, VAR_11,
          0, VAR_13->name, VAR_16);
 if (VAR_17) {
  FUNC_2(&VAR_13->dev, "failed to request IRQ\n");
  return VAR_17;
 }

 VAR_16->clk = FUNC_5(&VAR_13->dev, ((void*)0));
 if (FUNC_0(VAR_16->clk)) {
  VAR_17 = FUNC_1(VAR_16->clk);
  if (VAR_17 == -VAR_2 && !VAR_16->cfg->clk_required) {
   VAR_16->clk = ((void*)0);
  } else {
   FUNC_2(&VAR_13->dev, "Can't get clock\n");
   return VAR_17;
  }
 }

 VAR_17 = FUNC_34(VAR_14);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_30(VAR_14);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_31(VAR_14);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_13(VAR_14,
      &VAR_8,
      &VAR_12,
      &VAR_9);
 if (VAR_17) {
  FUNC_2(&VAR_13->dev, "buffer setup failed\n");
  goto err_dma_disable;
 }


 FUNC_21(VAR_15);
 FUNC_25(VAR_15);
 FUNC_26(VAR_15, VAR_6);
 FUNC_28(VAR_15);
 FUNC_20(VAR_15);

 VAR_17 = FUNC_32(VAR_15);
 if (VAR_17)
  goto err_buffer_cleanup;

 VAR_17 = FUNC_10(VAR_14);
 if (VAR_17) {
  FUNC_2(&VAR_13->dev, "iio dev register failed\n");
  goto err_hw_stop;
 }

 FUNC_22(VAR_15);
 FUNC_23(VAR_15);

 return 0;

err_hw_stop:
 FUNC_33(VAR_15);

err_buffer_cleanup:
 FUNC_19(VAR_15);
 FUNC_27(VAR_15);
 FUNC_24(VAR_15);
 FUNC_12(VAR_14);

err_dma_disable:
 if (VAR_16->dma_chan) {
  FUNC_8(VAR_16->dma_chan->device->dev,
      VAR_7,
      VAR_16->rx_buf, VAR_16->rx_dma_buf);
  FUNC_9(VAR_16->dma_chan);
 }

 return VAR_17;
}
