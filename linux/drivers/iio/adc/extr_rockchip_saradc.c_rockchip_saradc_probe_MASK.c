
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct rockchip_saradc {int * vref; int * pclk; int * clk; TYPE_2__* data; int * reset; int completion; int * regs; } ;
struct resource {int dummy; } ;
struct TYPE_15__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {TYPE_2__* data; } ;
struct TYPE_13__ {struct device_node* of_node; TYPE_3__* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; TYPE_1__ dev; int name; } ;
struct device_node {int dummy; } ;
struct TYPE_14__ {int num_channels; int channels; int clk_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*,char*,...) ;
 int FUNC_7 (TYPE_3__*) ;
 void* FUNC_8 (TYPE_3__*,char*) ;
 struct iio_dev* FUNC_9 (TYPE_3__*,int) ;
 int * FUNC_10 (TYPE_3__*,struct resource*) ;
 int * FUNC_11 (TYPE_3__*,char*) ;
 int FUNC_12 (TYPE_3__*,int,int ,int ,int ,struct rockchip_saradc*) ;
 int * FUNC_13 (TYPE_3__*,char*) ;
 int FUNC_14 (struct iio_dev*) ;
 struct rockchip_saradc* FUNC_15 (struct iio_dev*) ;
 int FUNC_16 (int *) ;
 struct of_device_id* FUNC_17 (int ,TYPE_3__*) ;
 int FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct iio_dev*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_8)
{
 struct rockchip_saradc *VAR_9 = ((void*)0);
 struct device_node *VAR_10 = VAR_8->dev.of_node;
 struct iio_dev *VAR_11 = ((void*)0);
 struct resource *VAR_12;
 const struct of_device_id *VAR_13;
 int VAR_14;
 int VAR_15;

 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_9(&VAR_8->dev, sizeof(*VAR_9));
 if (!VAR_11) {
  FUNC_6(&VAR_8->dev, "failed allocating iio device\n");
  return -VAR_2;
 }
 VAR_9 = FUNC_15(VAR_11);

 VAR_13 = FUNC_17(VAR_7, &VAR_8->dev);
 if (!VAR_13) {
  FUNC_6(&VAR_8->dev, "failed to match device\n");
  return -VAR_0;
 }

 VAR_9->data = VAR_13->data;

 VAR_12 = FUNC_19(VAR_8, VAR_4, 0);
 VAR_9->regs = FUNC_10(&VAR_8->dev, VAR_12);
 if (FUNC_0(VAR_9->regs))
  return FUNC_1(VAR_9->regs);





 VAR_9->reset = FUNC_13(&VAR_8->dev,
             "saradc-apb");
 if (FUNC_0(VAR_9->reset)) {
  VAR_14 = FUNC_1(VAR_9->reset);
  if (VAR_14 != -VAR_1)
   return VAR_14;

  FUNC_5(&VAR_8->dev, "no reset control found\n");
  VAR_9->reset = ((void*)0);
 }

 FUNC_16(&VAR_9->completion);

 VAR_15 = FUNC_18(VAR_8, 0);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_14 = FUNC_12(&VAR_8->dev, VAR_15, VAR_6,
          0, FUNC_7(&VAR_8->dev), VAR_9);
 if (VAR_14 < 0) {
  FUNC_6(&VAR_8->dev, "failed requesting irq %d\n", VAR_15);
  return VAR_14;
 }

 VAR_9->pclk = FUNC_8(&VAR_8->dev, "apb_pclk");
 if (FUNC_0(VAR_9->pclk)) {
  FUNC_6(&VAR_8->dev, "failed to get pclk\n");
  return FUNC_1(VAR_9->pclk);
 }

 VAR_9->clk = FUNC_8(&VAR_8->dev, "saradc");
 if (FUNC_0(VAR_9->clk)) {
  FUNC_6(&VAR_8->dev, "failed to get adc clock\n");
  return FUNC_1(VAR_9->clk);
 }

 VAR_9->vref = FUNC_11(&VAR_8->dev, "vref");
 if (FUNC_0(VAR_9->vref)) {
  FUNC_6(&VAR_8->dev, "failed to get regulator, %ld\n",
   FUNC_1(VAR_9->vref));
  return FUNC_1(VAR_9->vref);
 }

 if (VAR_9->reset)
  FUNC_23(VAR_9->reset);





 VAR_14 = FUNC_4(VAR_9->clk, VAR_9->data->clk_rate);
 if (VAR_14 < 0) {
  FUNC_6(&VAR_8->dev, "failed to set adc clk rate, %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_22(VAR_9->vref);
 if (VAR_14 < 0) {
  FUNC_6(&VAR_8->dev, "failed to enable vref regulator\n");
  return VAR_14;
 }

 VAR_14 = FUNC_3(VAR_9->pclk);
 if (VAR_14 < 0) {
  FUNC_6(&VAR_8->dev, "failed to enable pclk\n");
  goto err_reg_voltage;
 }

 VAR_14 = FUNC_3(VAR_9->clk);
 if (VAR_14 < 0) {
  FUNC_6(&VAR_8->dev, "failed to enable converter clock\n");
  goto err_pclk;
 }

 FUNC_20(VAR_8, VAR_11);

 VAR_11->name = FUNC_7(&VAR_8->dev);
 VAR_11->dev.parent = &VAR_8->dev;
 VAR_11->dev.of_node = VAR_8->dev.of_node;
 VAR_11->info = &VAR_5;
 VAR_11->modes = VAR_3;

 VAR_11->channels = VAR_9->data->channels;
 VAR_11->num_channels = VAR_9->data->num_channels;

 VAR_14 = FUNC_14(VAR_11);
 if (VAR_14)
  goto err_clk;

 return 0;

err_clk:
 FUNC_2(VAR_9->clk);
err_pclk:
 FUNC_2(VAR_9->pclk);
err_reg_voltage:
 FUNC_21(VAR_9->vref);
 return VAR_14;
}
