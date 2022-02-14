
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_14__ {TYPE_2__* driver; } ;
struct spi_device {scalar_t__ irq; scalar_t__ max_speed_hz; int bits_per_word; TYPE_3__ dev; } ;
struct TYPE_12__ {TYPE_3__* parent; } ;
struct input_dev {char* name; int absbit; int evbit; int keybit; TYPE_1__ dev; int phys; } ;
struct ad7877_platform_data {scalar_t__ pressure_max; int pressure_min; scalar_t__ y_max; scalar_t__ y_min; scalar_t__ x_max; scalar_t__ x_min; int pen_down_acc_interval; int averaging; int acquisition_time; int first_conversion_delay; int stopacq_polarity; scalar_t__ x_plate_ohms; scalar_t__ vref_delay_usecs; scalar_t__ model; } ;
struct ad7877 {int model; int vref_delay_usecs; int x_plate_ohms; int phys; int pen_down_acc_interval; int averaging; int acquisition_time; int first_conversion_delay; int stopacq_polarity; int pressure_max; int lock; int mutex; int timer; struct input_dev* input; struct spi_device* spi; } ;
struct TYPE_13__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_1 (struct spi_device*,int ) ;
 int FUNC_2 (struct spi_device*,struct ad7877*) ;
 int VAR_21 ;
 int FUNC_3 (struct spi_device*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 int FUNC_5 (TYPE_3__*,char*,char*,char*) ;
 struct ad7877_platform_data* FUNC_6 (TYPE_3__*) ;
 char* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ,struct ad7877*) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 struct input_dev* FUNC_10 (TYPE_3__*) ;
 struct ad7877* FUNC_11 (TYPE_3__*,int,int ) ;
 int FUNC_12 (TYPE_3__*,scalar_t__,int *,int ,int,int ,struct ad7877*) ;
 scalar_t__ VAR_22 ;
 int FUNC_13 (struct input_dev*) ;
 int FUNC_14 (struct input_dev*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int,char*,char*) ;
 int FUNC_17 (struct spi_device*,struct ad7877*) ;
 int FUNC_18 (struct spi_device*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_21(struct spi_device *VAR_23)
{
 struct ad7877 *VAR_24;
 struct input_dev *VAR_25;
 struct ad7877_platform_data *VAR_26 = FUNC_6(&VAR_23->dev);
 int VAR_27;
 u16 VAR_28;

 if (!VAR_23->irq) {
  FUNC_4(&VAR_23->dev, "no IRQ?\n");
  return -VAR_9;
 }

 if (!VAR_26) {
  FUNC_4(&VAR_23->dev, "no platform data?\n");
  return -VAR_9;
 }


 if (VAR_23->max_speed_hz > VAR_17) {
  FUNC_4(&VAR_23->dev, "SPI CLK %d Hz?\n",VAR_23->max_speed_hz);
  return -VAR_8;
 }

 VAR_23->bits_per_word = 16;
 VAR_27 = FUNC_18(VAR_23);
 if (VAR_27) {
  FUNC_4(&VAR_23->dev, "spi master doesn't support 16 bits/word\n");
  return VAR_27;
 }

 VAR_24 = FUNC_11(&VAR_23->dev, sizeof(struct ad7877), VAR_13);
 if (!VAR_24)
  return -VAR_10;

 VAR_25 = FUNC_10(&VAR_23->dev);
 if (!VAR_25)
  return -VAR_10;

 VAR_27 = FUNC_8(&VAR_23->dev, VAR_19, VAR_24);
 if (VAR_27)
  return VAR_27;

 FUNC_17(VAR_23, VAR_24);
 VAR_24->spi = VAR_23;
 VAR_24->input = VAR_25;

 FUNC_20(&VAR_24->timer, VAR_21, 0);
 FUNC_15(&VAR_24->mutex);
 FUNC_19(&VAR_24->lock);

 VAR_24->model = VAR_26->model ? : 7877;
 VAR_24->vref_delay_usecs = VAR_26->vref_delay_usecs ? : 100;
 VAR_24->x_plate_ohms = VAR_26->x_plate_ohms ? : 400;
 VAR_24->pressure_max = VAR_26->pressure_max ? : ~0;

 VAR_24->stopacq_polarity = VAR_26->stopacq_polarity;
 VAR_24->first_conversion_delay = VAR_26->first_conversion_delay;
 VAR_24->acquisition_time = VAR_26->acquisition_time;
 VAR_24->averaging = VAR_26->averaging;
 VAR_24->pen_down_acc_interval = VAR_26->pen_down_acc_interval;

 FUNC_16(VAR_24->phys, sizeof(VAR_24->phys), "%s/input0", FUNC_7(&VAR_23->dev));

 VAR_25->name = "AD7877 Touchscreen";
 VAR_25->phys = VAR_24->phys;
 VAR_25->dev.parent = &VAR_23->dev;

 FUNC_0(VAR_12, VAR_25->evbit);
 FUNC_0(VAR_7, VAR_25->keybit);
 FUNC_0(VAR_11, VAR_25->evbit);
 FUNC_0(VAR_1, VAR_25->absbit);
 FUNC_0(VAR_2, VAR_25->absbit);
 FUNC_0(VAR_0, VAR_25->absbit);

 FUNC_14(VAR_25, VAR_1,
   VAR_26->x_min ? : 0,
   VAR_26->x_max ? : VAR_16,
   0, 0);
 FUNC_14(VAR_25, VAR_2,
   VAR_26->y_min ? : 0,
   VAR_26->y_max ? : VAR_16,
   0, 0);
 FUNC_14(VAR_25, VAR_0,
   VAR_26->pressure_min, VAR_26->pressure_max, 0, 0);

 FUNC_3(VAR_23, VAR_6, VAR_4);

 VAR_28 = FUNC_1(VAR_23, VAR_6);

 if (VAR_28 != VAR_4) {
  FUNC_5(&VAR_23->dev, "%s: Failed to probe %s\n",
   FUNC_7(&VAR_23->dev), VAR_25->name);
  return -VAR_9;
 }

 if (VAR_22)
  FUNC_3(VAR_23, VAR_5, VAR_3);

 FUNC_2(VAR_23, VAR_24);



 VAR_27 = FUNC_12(&VAR_23->dev, VAR_23->irq, ((void*)0), VAR_20,
     VAR_15 | VAR_14,
     VAR_23->dev.driver->name, VAR_24);
 if (VAR_27) {
  FUNC_4(&VAR_23->dev, "irq %d busy?\n", VAR_23->irq);
  return VAR_27;
 }

 VAR_27 = FUNC_9(&VAR_23->dev, &VAR_18);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_13(VAR_25);
 if (VAR_27)
  return VAR_27;

 return 0;
}
