
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct s3c2410_ts_mach_info {int delay; } ;
struct resource {int dummy; } ;
struct TYPE_13__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_11__ {struct device_node* of_node; TYPE_3__* parent; } ;
struct iio_dev {TYPE_1__ dev; int num_channels; int channels; int modes; int * info; int name; } ;
struct exynos_adc {int irq; int tsirq; int delay; void* vdd; TYPE_2__* data; int input; void* sclk; void* clk; int completion; TYPE_3__* dev; void* pmu_map; void* regs; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {int (* exit_hw ) (struct exynos_adc*) ;int (* init_hw ) (struct exynos_adc*) ;int num_channels; scalar_t__ needs_sclk; scalar_t__ needs_adc_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 struct s3c2410_ts_mach_info* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;
 void* FUNC_7 (TYPE_3__*,char*) ;
 struct iio_dev* FUNC_8 (TYPE_3__*,int) ;
 void* FUNC_9 (TYPE_3__*,struct resource*) ;
 void* FUNC_10 (TYPE_3__*,char*) ;
 int FUNC_11 (struct exynos_adc*) ;
 int FUNC_12 (struct exynos_adc*) ;
 TYPE_2__* FUNC_13 (struct platform_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (struct exynos_adc*) ;
 int VAR_11 ;
 int FUNC_15 (struct exynos_adc*) ;
 int FUNC_16 (struct exynos_adc*) ;
 int FUNC_17 (int,struct exynos_adc*) ;
 int FUNC_18 (struct iio_dev*) ;
 int FUNC_19 (struct iio_dev*) ;
 struct exynos_adc* FUNC_20 (struct iio_dev*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct device_node*,int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_24 (struct device_node*,char*) ;
 int FUNC_25 (struct platform_device*,int) ;
 struct resource* FUNC_26 (struct platform_device*,int ,int ) ;
 int FUNC_27 (struct platform_device*,struct iio_dev*) ;
 int FUNC_28 (void*) ;
 int FUNC_29 (void*) ;
 int FUNC_30 (int,int ,int ,int ,struct exynos_adc*) ;
 int FUNC_31 (struct exynos_adc*) ;
 int FUNC_32 (struct exynos_adc*) ;
 void* FUNC_33 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_34(struct platform_device *VAR_12)
{
 struct exynos_adc *VAR_13 = ((void*)0);
 struct device_node *VAR_14 = VAR_12->dev.of_node;
 struct s3c2410_ts_mach_info *VAR_15 = FUNC_4(&VAR_12->dev);
 struct iio_dev *VAR_16 = ((void*)0);
 struct resource *VAR_17;
 bool VAR_18 = 0;
 int VAR_19 = -VAR_2;
 int VAR_20;

 VAR_16 = FUNC_8(&VAR_12->dev, sizeof(struct exynos_adc));
 if (!VAR_16) {
  FUNC_3(&VAR_12->dev, "failed allocating iio device\n");
  return -VAR_3;
 }

 VAR_13 = FUNC_20(VAR_16);

 VAR_13->data = FUNC_13(VAR_12);
 if (!VAR_13->data) {
  FUNC_3(&VAR_12->dev, "failed getting exynos_adc_data\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_26(VAR_12, VAR_6, 0);
 VAR_13->regs = FUNC_9(&VAR_12->dev, VAR_17);
 if (FUNC_0(VAR_13->regs))
  return FUNC_2(VAR_13->regs);


 if (VAR_13->data->needs_adc_phy) {
  VAR_13->pmu_map = FUNC_33(
     VAR_12->dev.of_node,
     "samsung,syscon-phandle");
  if (FUNC_0(VAR_13->pmu_map)) {
   FUNC_3(&VAR_12->dev, "syscon regmap lookup failed.\n");
   return FUNC_2(VAR_13->pmu_map);
  }
 }

 VAR_20 = FUNC_25(VAR_12, 0);
 if (VAR_20 < 0)
  return VAR_20;
 VAR_13->irq = VAR_20;

 VAR_20 = FUNC_25(VAR_12, 1);
 if (VAR_20 == -VAR_4)
  return VAR_20;

 VAR_13->tsirq = VAR_20;

 VAR_13->dev = &VAR_12->dev;

 FUNC_21(&VAR_13->completion);

 VAR_13->clk = FUNC_7(&VAR_12->dev, "adc");
 if (FUNC_0(VAR_13->clk)) {
  FUNC_3(&VAR_12->dev, "failed getting clock, err = %ld\n",
       FUNC_2(VAR_13->clk));
  return FUNC_2(VAR_13->clk);
 }

 if (VAR_13->data->needs_sclk) {
  VAR_13->sclk = FUNC_7(&VAR_12->dev, "sclk");
  if (FUNC_0(VAR_13->sclk)) {
   FUNC_3(&VAR_12->dev,
    "failed getting sclk clock, err = %ld\n",
    FUNC_2(VAR_13->sclk));
   return FUNC_2(VAR_13->sclk);
  }
 }

 VAR_13->vdd = FUNC_10(&VAR_12->dev, "vdd");
 if (FUNC_0(VAR_13->vdd)) {
  FUNC_3(&VAR_12->dev, "failed getting regulator, err = %ld\n",
       FUNC_2(VAR_13->vdd));
  return FUNC_2(VAR_13->vdd);
 }

 VAR_19 = FUNC_29(VAR_13->vdd);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_14(VAR_13);
 if (VAR_19)
  goto err_disable_reg;

 VAR_19 = FUNC_12(VAR_13);
 if (VAR_19)
  goto err_unprepare_clk;

 FUNC_27(VAR_12, VAR_16);

 VAR_16->name = FUNC_5(&VAR_12->dev);
 VAR_16->dev.parent = &VAR_12->dev;
 VAR_16->dev.of_node = VAR_12->dev.of_node;
 VAR_16->info = &VAR_8;
 VAR_16->modes = VAR_5;
 VAR_16->channels = VAR_7;
 VAR_16->num_channels = VAR_13->data->num_channels;

 VAR_19 = FUNC_30(VAR_13->irq, VAR_9,
     0, FUNC_5(&VAR_12->dev), VAR_13);
 if (VAR_19 < 0) {
  FUNC_3(&VAR_12->dev, "failed requesting irq, irq = %d\n",
       VAR_13->irq);
  goto err_disable_clk;
 }

 VAR_19 = FUNC_18(VAR_16);
 if (VAR_19)
  goto err_irq;

 if (VAR_13->data->init_hw)
  VAR_13->data->init_hw(VAR_13);


 if (FUNC_1(VAR_0)) {
  VAR_18 = FUNC_24(VAR_12->dev.of_node,
            "has-touchscreen") || VAR_15;
 }

 if (VAR_15)
  VAR_13->delay = VAR_15->delay;
 else
  VAR_13->delay = 10000;

 if (VAR_18)
  VAR_19 = FUNC_15(VAR_13);
 if (VAR_19)
  goto err_iio;

 VAR_19 = FUNC_23(VAR_14, VAR_10, ((void*)0), &VAR_16->dev);
 if (VAR_19 < 0) {
  FUNC_3(&VAR_12->dev, "failed adding child nodes\n");
  goto err_of_populate;
 }

 return 0;

err_of_populate:
 FUNC_6(&VAR_16->dev, ((void*)0),
    VAR_11);
 if (VAR_18) {
  FUNC_22(VAR_13->input);
  FUNC_17(VAR_13->tsirq, VAR_13);
 }
err_iio:
 FUNC_19(VAR_16);
err_irq:
 FUNC_17(VAR_13->irq, VAR_13);
err_disable_clk:
 if (VAR_13->data->exit_hw)
  VAR_13->data->exit_hw(VAR_13);
 FUNC_11(VAR_13);
err_unprepare_clk:
 FUNC_16(VAR_13);
err_disable_reg:
 FUNC_28(VAR_13->vdd);
 return VAR_19;
}
