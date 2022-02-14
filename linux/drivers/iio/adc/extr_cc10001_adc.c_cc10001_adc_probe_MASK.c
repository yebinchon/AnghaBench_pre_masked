
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_8__ {TYPE_2__* parent; } ;
struct iio_dev {int modes; int * info; int name; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct cc10001_adc_device {int shared; unsigned long eoc_delay_ns; int start_delay_ns; int reg; int adc_clk; int lock; int reg_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iio_dev*,unsigned long) ;
 int VAR_7 ;
 int FUNC_4 (struct cc10001_adc_device*) ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 struct iio_dev* FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*,struct resource*) ;
 int FUNC_13 (TYPE_2__*,char*) ;
 int FUNC_14 (struct iio_dev*) ;
 struct cc10001_adc_device* FUNC_15 (struct iio_dev*) ;
 int FUNC_16 (struct iio_dev*) ;
 int FUNC_17 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct device_node*,char*,int*) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct iio_dev*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_9)
{
 struct device_node *VAR_10 = VAR_9->dev.of_node;
 struct cc10001_adc_device *VAR_11;
 unsigned long VAR_12;
 struct resource *VAR_13;
 struct iio_dev *VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 VAR_14 = FUNC_11(&VAR_9->dev, sizeof(*VAR_11));
 if (VAR_14 == ((void*)0))
  return -VAR_3;

 VAR_11 = FUNC_15(VAR_14);

 VAR_15 = FUNC_0(VAR_0 - 1, 0);
 if (!FUNC_19(VAR_10, "adc-reserved-channels", &VAR_16)) {
  VAR_11->shared = 1;
  VAR_15 &= ~VAR_16;
 }

 VAR_11->reg = FUNC_13(&VAR_9->dev, "vref");
 if (FUNC_1(VAR_11->reg))
  return FUNC_2(VAR_11->reg);

 VAR_16 = FUNC_23(VAR_11->reg);
 if (VAR_16)
  return VAR_16;

 VAR_14->dev.parent = &VAR_9->dev;
 VAR_14->name = FUNC_9(&VAR_9->dev);
 VAR_14->info = &VAR_7;
 VAR_14->modes = VAR_4;

 VAR_13 = FUNC_20(VAR_9, VAR_5, 0);
 VAR_11->reg_base = FUNC_12(&VAR_9->dev, VAR_13);
 if (FUNC_1(VAR_11->reg_base)) {
  VAR_16 = FUNC_2(VAR_11->reg_base);
  goto err_disable_reg;
 }

 VAR_11->adc_clk = FUNC_10(&VAR_9->dev, "adc");
 if (FUNC_1(VAR_11->adc_clk)) {
  FUNC_8(&VAR_9->dev, "failed to get the clock\n");
  VAR_16 = FUNC_2(VAR_11->adc_clk);
  goto err_disable_reg;
 }

 VAR_16 = FUNC_7(VAR_11->adc_clk);
 if (VAR_16) {
  FUNC_8(&VAR_9->dev, "failed to enable the clock\n");
  goto err_disable_reg;
 }

 VAR_12 = FUNC_6(VAR_11->adc_clk);
 if (!VAR_12) {
  VAR_16 = -VAR_2;
  FUNC_8(&VAR_9->dev, "null clock rate!\n");
  goto err_disable_clk;
 }

 VAR_11->eoc_delay_ns = VAR_6 / VAR_12;
 VAR_11->start_delay_ns = VAR_11->eoc_delay_ns * VAR_1;






 if (VAR_11->shared)
  FUNC_4(VAR_11);


 VAR_16 = FUNC_3(VAR_14, VAR_15);
 if (VAR_16 < 0)
  goto err_disable_clk;

 FUNC_18(&VAR_11->lock);

 VAR_16 = FUNC_17(VAR_14, ((void*)0),
      &VAR_8, ((void*)0));
 if (VAR_16 < 0)
  goto err_disable_clk;

 VAR_16 = FUNC_14(VAR_14);
 if (VAR_16 < 0)
  goto err_cleanup_buffer;

 FUNC_21(VAR_9, VAR_14);

 return 0;

err_cleanup_buffer:
 FUNC_16(VAR_14);
err_disable_clk:
 FUNC_5(VAR_11->adc_clk);
err_disable_reg:
 FUNC_22(VAR_11->reg);
 return VAR_16;
}
