
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int parent; scalar_t__ of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct palmas_platform_data {struct palmas_gpadc_platform_data* gpadc_pdata; } ;
struct palmas_gpadc_platform_data {int ch0_current; int ch3_current; scalar_t__ adc_wakeup1_data; scalar_t__ adc_wakeup2_data; int extended_delay; int auto_conversion_period_ms; } ;
struct palmas_gpadc {int irq; int wakeup1_enable; int irq_auto_0; int wakeup2_enable; int irq_auto_1; TYPE_2__* adc_info; TYPE_3__* dev; int extended_delay; int ch3_current; int ch0_current; int wakeup2_data; int wakeup1_data; int palmas; int auto_conversion_period; int conv_completion; } ;
struct TYPE_9__ {TYPE_3__* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int * info; TYPE_1__ dev; int name; } ;
struct TYPE_10__ {int is_uncalibrated; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (TYPE_3__*,char*,...) ;
 int FUNC_2 (int ) ;
 struct palmas_platform_data* FUNC_3 (int ) ;
 char* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*) ;
 struct iio_dev* FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (int,struct palmas_gpadc*) ;
 int FUNC_10 (struct iio_dev*) ;
 struct palmas_gpadc* FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,scalar_t__,int) ;
 int FUNC_14 (struct palmas_gpadc*,int) ;
 int FUNC_15 (struct platform_device*,struct palmas_gpadc_platform_data**) ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_16 (int ,int ) ;
 void* FUNC_17 (struct platform_device*,int) ;
 int FUNC_18 (int,int *,int ,int ,char*,struct palmas_gpadc*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_20)
{
 struct palmas_gpadc *VAR_21;
 struct palmas_platform_data *VAR_22;
 struct palmas_gpadc_platform_data *VAR_23 = ((void*)0);
 struct iio_dev *VAR_24;
 int VAR_25, VAR_26;

 VAR_22 = FUNC_3(VAR_20->dev.parent);

 if (VAR_22 && VAR_22->gpadc_pdata)
  VAR_23 = VAR_22->gpadc_pdata;

 if (!VAR_23 && VAR_20->dev.of_node) {
  VAR_25 = FUNC_15(VAR_20, &VAR_23);
  if (VAR_25 < 0)
   return VAR_25;
 }
 if (!VAR_23)
  return -VAR_0;

 VAR_24 = FUNC_8(&VAR_20->dev, sizeof(*VAR_21));
 if (!VAR_24) {
  FUNC_1(&VAR_20->dev, "iio_device_alloc failed\n");
  return -VAR_1;
 }

 VAR_21 = FUNC_11(VAR_24);
 VAR_21->dev = &VAR_20->dev;
 VAR_21->palmas = FUNC_2(VAR_20->dev.parent);
 VAR_21->adc_info = VAR_17;
 FUNC_12(&VAR_21->conv_completion);
 FUNC_5(&VAR_20->dev, VAR_24);

 VAR_21->auto_conversion_period = VAR_23->auto_conversion_period_ms;
 VAR_21->irq = FUNC_16(VAR_21->palmas, VAR_14);
 if (VAR_21->irq < 0) {
  FUNC_1(VAR_21->dev,
   "get virq failed: %d\n", VAR_21->irq);
  VAR_25 = VAR_21->irq;
  goto out;
 }
 VAR_25 = FUNC_18(VAR_21->irq, ((void*)0),
  VAR_18,
  VAR_3, FUNC_4(VAR_21->dev),
  VAR_21);
 if (VAR_25 < 0) {
  FUNC_1(VAR_21->dev,
   "request irq %d failed: %d\n", VAR_21->irq, VAR_25);
  goto out;
 }

 if (VAR_23->adc_wakeup1_data) {
  FUNC_13(&VAR_21->wakeup1_data, VAR_23->adc_wakeup1_data,
   sizeof(VAR_21->wakeup1_data));
  VAR_21->wakeup1_enable = 1;
  VAR_21->irq_auto_0 = FUNC_17(VAR_20, 1);
  VAR_25 = FUNC_18(VAR_21->irq_auto_0, ((void*)0),
    VAR_19,
    VAR_3,
    "palmas-adc-auto-0", VAR_21);
  if (VAR_25 < 0) {
   FUNC_1(VAR_21->dev, "request auto0 irq %d failed: %d\n",
    VAR_21->irq_auto_0, VAR_25);
   goto out_irq_free;
  }
 }

 if (VAR_23->adc_wakeup2_data) {
  FUNC_13(&VAR_21->wakeup2_data, VAR_23->adc_wakeup2_data,
    sizeof(VAR_21->wakeup2_data));
  VAR_21->wakeup2_enable = 1;
  VAR_21->irq_auto_1 = FUNC_17(VAR_20, 2);
  VAR_25 = FUNC_18(VAR_21->irq_auto_1, ((void*)0),
    VAR_19,
    VAR_3,
    "palmas-adc-auto-1", VAR_21);
  if (VAR_25 < 0) {
   FUNC_1(VAR_21->dev, "request auto1 irq %d failed: %d\n",
    VAR_21->irq_auto_1, VAR_25);
   goto out_irq_auto0_free;
  }
 }


 if (VAR_23->ch0_current <= 1)
  VAR_21->ch0_current = VAR_5;
 else if (VAR_23->ch0_current <= 5)
  VAR_21->ch0_current = VAR_8;
 else if (VAR_23->ch0_current <= 15)
  VAR_21->ch0_current = VAR_6;
 else
  VAR_21->ch0_current = VAR_7;


 if (VAR_23->ch3_current <= 1)
  VAR_21->ch3_current = VAR_9;
 else if (VAR_23->ch3_current <= 10)
  VAR_21->ch3_current = VAR_10;
 else if (VAR_23->ch3_current <= 400)
  VAR_21->ch3_current = VAR_11;
 else
  VAR_21->ch3_current = VAR_12;

 VAR_21->extended_delay = VAR_23->extended_delay;

 VAR_24->name = VAR_4;
 VAR_24->dev.parent = &VAR_20->dev;
 VAR_24->info = &VAR_16;
 VAR_24->modes = VAR_2;
 VAR_24->channels = VAR_15;
 VAR_24->num_channels = FUNC_0(VAR_15);

 VAR_25 = FUNC_10(VAR_24);
 if (VAR_25 < 0) {
  FUNC_1(VAR_21->dev, "iio_device_register() failed: %d\n", VAR_25);
  goto out_irq_auto1_free;
 }

 FUNC_6(&VAR_20->dev, 1);
 for (VAR_26 = 0; VAR_26 < VAR_13; VAR_26++) {
  if (!(VAR_21->adc_info[VAR_26].is_uncalibrated))
   FUNC_14(VAR_21, VAR_26);
 }

 if (VAR_21->wakeup1_enable || VAR_21->wakeup2_enable)
  FUNC_7(&VAR_20->dev);

 return 0;

out_irq_auto1_free:
 if (VAR_23->adc_wakeup2_data)
  FUNC_9(VAR_21->irq_auto_1, VAR_21);
out_irq_auto0_free:
 if (VAR_23->adc_wakeup1_data)
  FUNC_9(VAR_21->irq_auto_0, VAR_21);
out_irq_free:
 FUNC_9(VAR_21->irq, VAR_21);
out:
 return VAR_25;
}
