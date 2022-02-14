
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_15__ {TYPE_2__* driver; scalar_t__ of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_11__ {TYPE_5__* parent; } ;
struct iio_dev {int * info; int modes; int name; TYPE_1__ dev; } ;
struct at91_adc_state {scalar_t__ irq; unsigned int sample_hold_time; void* clk; void* adc_clk; int touchscreen_type; int lock; int wq_data_avail; scalar_t__ sleep_mode; scalar_t__ low_res; TYPE_4__* registers; int startup_time; TYPE_3__* caps; void* reg_base; } ;
struct TYPE_14__ {int mr_prescal_mask; int mr_startup_mask; } ;
struct TYPE_13__ {unsigned int (* calc_startup_ticks ) (int ,unsigned int) ;scalar_t__ has_tsmr; } ;
struct TYPE_12__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int VAR_5 ;
 int FUNC_2 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_12 ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 int VAR_13 ;
 int FUNC_8 (struct at91_adc_state*,struct platform_device*) ;
 int FUNC_9 (struct at91_adc_state*,struct platform_device*) ;
 int VAR_14 ;
 int FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (struct at91_adc_state*,int ,int) ;
 int FUNC_13 (struct at91_adc_state*,unsigned int) ;
 int FUNC_14 (struct at91_adc_state*,struct platform_device*) ;
 int FUNC_15 (struct at91_adc_state*) ;
 int FUNC_16 (void*) ;
 unsigned int FUNC_17 (void*) ;
 int FUNC_18 (void*) ;
 int FUNC_19 (TYPE_5__*,char*,unsigned int,unsigned int) ;
 int FUNC_20 (TYPE_5__*,char*) ;
 int FUNC_21 (TYPE_5__*) ;
 void* FUNC_22 (TYPE_5__*,char*) ;
 struct iio_dev* FUNC_23 (TYPE_5__*,int) ;
 void* FUNC_24 (TYPE_5__*,struct resource*) ;
 int FUNC_25 (scalar_t__,struct iio_dev*) ;
 int FUNC_26 (struct iio_dev*) ;
 struct at91_adc_state* FUNC_27 (struct iio_dev*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 scalar_t__ FUNC_30 (struct platform_device*,int ) ;
 struct resource* FUNC_31 (struct platform_device*,int ,int ) ;
 int FUNC_32 (struct platform_device*,struct iio_dev*) ;
 int FUNC_33 (scalar_t__,int ,int ,int ,struct iio_dev*) ;
 unsigned int FUNC_34 (unsigned int,int) ;
 unsigned int FUNC_35 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_36(struct platform_device *VAR_15)
{
 unsigned int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22;
 struct iio_dev *VAR_23;
 struct at91_adc_state *VAR_24;
 struct resource *VAR_25;
 u32 VAR_26;

 VAR_23 = FUNC_23(&VAR_15->dev, sizeof(struct at91_adc_state));
 if (!VAR_23)
  return -VAR_9;

 VAR_24 = FUNC_27(VAR_23);

 if (VAR_15->dev.of_node)
  VAR_22 = FUNC_8(VAR_24, VAR_15);
 else
  VAR_22 = FUNC_9(VAR_24, VAR_15);

 if (VAR_22) {
  FUNC_20(&VAR_15->dev, "No platform data available.\n");
  return -VAR_7;
 }

 FUNC_32(VAR_15, VAR_23);

 VAR_23->dev.parent = &VAR_15->dev;
 VAR_23->name = FUNC_21(&VAR_15->dev);
 VAR_23->modes = VAR_10;
 VAR_23->info = &VAR_13;

 VAR_24->irq = FUNC_30(VAR_15, 0);
 if (VAR_24->irq < 0)
  return -VAR_8;

 VAR_25 = FUNC_31(VAR_15, VAR_11, 0);

 VAR_24->reg_base = FUNC_24(&VAR_15->dev, VAR_25);
 if (FUNC_3(VAR_24->reg_base))
  return FUNC_4(VAR_24->reg_base);





 FUNC_12(VAR_24, VAR_0, VAR_6);
 FUNC_12(VAR_24, VAR_1, 0xFFFFFFFF);

 if (VAR_24->caps->has_tsmr)
  VAR_22 = FUNC_33(VAR_24->irq, VAR_12, 0,
      VAR_15->dev.driver->name, VAR_23);
 else
  VAR_22 = FUNC_33(VAR_24->irq, VAR_14, 0,
      VAR_15->dev.driver->name, VAR_23);
 if (VAR_22) {
  FUNC_20(&VAR_15->dev, "Failed to allocate IRQ.\n");
  return VAR_22;
 }

 VAR_24->clk = FUNC_22(&VAR_15->dev, "adc_clk");
 if (FUNC_3(VAR_24->clk)) {
  FUNC_20(&VAR_15->dev, "Failed to get the clock.\n");
  VAR_22 = FUNC_4(VAR_24->clk);
  goto error_free_irq;
 }

 VAR_22 = FUNC_18(VAR_24->clk);
 if (VAR_22) {
  FUNC_20(&VAR_15->dev,
   "Could not prepare or enable the clock.\n");
  goto error_free_irq;
 }

 VAR_24->adc_clk = FUNC_22(&VAR_15->dev, "adc_op_clk");
 if (FUNC_3(VAR_24->adc_clk)) {
  FUNC_20(&VAR_15->dev, "Failed to get the ADC clock.\n");
  VAR_22 = FUNC_4(VAR_24->adc_clk);
  goto error_disable_clk;
 }

 VAR_22 = FUNC_18(VAR_24->adc_clk);
 if (VAR_22) {
  FUNC_20(&VAR_15->dev,
   "Could not prepare or enable the ADC clock.\n");
  goto error_disable_clk;
 }






 VAR_17 = FUNC_17(VAR_24->clk);
 VAR_19 = FUNC_17(VAR_24->adc_clk);
 VAR_20 = VAR_19 / 1000;

 FUNC_19(&VAR_15->dev, "Master clock is set as: %d Hz, adc_clk should set as: %d Hz\n",
  VAR_17, VAR_19);

 VAR_16 = (VAR_17 / (2 * VAR_19)) - 1;

 if (!VAR_24->startup_time) {
  FUNC_20(&VAR_15->dev, "No startup time available.\n");
  VAR_22 = -VAR_7;
  goto error_disable_adc_clk;
 }
 VAR_18 = (*VAR_24->caps->calc_startup_ticks)(VAR_24->startup_time, VAR_20);






 if (VAR_24->sample_hold_time > 0)
  VAR_21 = FUNC_34((VAR_24->sample_hold_time * VAR_20 / 1000)
     - 1, 1);
 else
  VAR_21 = 0;

 VAR_26 = FUNC_0(VAR_16) & VAR_24->registers->mr_prescal_mask;
 VAR_26 |= FUNC_2(VAR_18) & VAR_24->registers->mr_startup_mask;
 if (VAR_24->low_res)
  VAR_26 |= VAR_2;
 if (VAR_24->sleep_mode)
  VAR_26 |= VAR_5;
 VAR_26 |= FUNC_1(VAR_21) & VAR_4;
 FUNC_12(VAR_24, VAR_3, VAR_26);


 VAR_22 = FUNC_7(VAR_23);
 if (VAR_22 < 0) {
  FUNC_20(&VAR_15->dev, "Couldn't initialize the channels.\n");
  goto error_disable_adc_clk;
 }

 FUNC_28(&VAR_24->wq_data_avail);
 FUNC_29(&VAR_24->lock);






 if (!VAR_24->touchscreen_type) {
  VAR_22 = FUNC_5(VAR_23);
  if (VAR_22 < 0) {
   FUNC_20(&VAR_15->dev, "Couldn't initialize the buffer.\n");
   goto error_disable_adc_clk;
  }

  VAR_22 = FUNC_10(VAR_23);
  if (VAR_22 < 0) {
   FUNC_20(&VAR_15->dev, "Couldn't setup the triggers.\n");
   FUNC_6(VAR_23);
   goto error_disable_adc_clk;
  }
 } else {
  VAR_22 = FUNC_14(VAR_24, VAR_15);
  if (VAR_22)
   goto error_disable_adc_clk;

  FUNC_13(VAR_24, VAR_20);
 }

 VAR_22 = FUNC_26(VAR_23);
 if (VAR_22 < 0) {
  FUNC_20(&VAR_15->dev, "Couldn't register the device.\n");
  goto error_iio_device_register;
 }

 return 0;

error_iio_device_register:
 if (!VAR_24->touchscreen_type) {
  FUNC_11(VAR_23);
  FUNC_6(VAR_23);
 } else {
  FUNC_15(VAR_24);
 }
error_disable_adc_clk:
 FUNC_16(VAR_24->adc_clk);
error_disable_clk:
 FUNC_16(VAR_24->clk);
error_free_irq:
 FUNC_25(VAR_24->irq, VAR_23);
 return VAR_22;
}
