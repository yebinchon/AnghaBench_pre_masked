
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vf50_touch_device {scalar_t__ pen_irq; int gpio_ym; int gpio_yp; int gpio_xm; int gpio_xp; struct input_dev* ts_input; int min_pressure; struct iio_channel* channels; struct platform_device* pdev; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {int close; int open; TYPE_2__ dev; TYPE_1__ id; int name; } ;
struct iio_channel {scalar_t__ indio_dev; } ;


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
 scalar_t__ FUNC_0 (struct iio_channel*) ;
 int FUNC_1 (struct iio_channel*) ;
 int VAR_13 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,int ,struct iio_channel*) ;
 struct input_dev* FUNC_4 (struct device*) ;
 struct vf50_touch_device* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int,int *,int ,int ,char*,struct vf50_touch_device*) ;
 struct iio_channel* FUNC_7 (struct device*) ;
 int FUNC_8 (struct iio_channel*) ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct input_dev*,int ,int ) ;
 int FUNC_12 (struct input_dev*,struct vf50_touch_device*) ;
 int FUNC_13 (int ,char*,int *) ;
 scalar_t__ FUNC_14 (struct platform_device*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_15 (struct device*,int *,char*,int ) ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_18)
{
 struct input_dev *VAR_19;
 struct iio_channel *VAR_20;
 struct device *VAR_21 = &VAR_18->dev;
 struct vf50_touch_device *VAR_22;
 int VAR_23;
 int VAR_24;

 VAR_20 = FUNC_7(VAR_21);
 if (FUNC_0(VAR_20))
  return FUNC_1(VAR_20);

 VAR_24 = FUNC_3(VAR_21, VAR_14, VAR_20);
 if (VAR_24) {
  FUNC_8(VAR_20);
  FUNC_2(VAR_21, "Failed to register iio channel release action");
  return VAR_24;
 }

 VAR_23 = 0;
 while (VAR_20[VAR_23].indio_dev)
  VAR_23++;

 if (VAR_23 != VAR_5) {
  FUNC_2(VAR_21, "Inadequate ADC channels specified\n");
  return -VAR_7;
 }

 VAR_22 = FUNC_5(VAR_21, sizeof(*VAR_22), VAR_10);
 if (!VAR_22)
  return -VAR_8;

 VAR_22->pdev = VAR_18;
 VAR_22->channels = VAR_20;

 VAR_24 = FUNC_13(VAR_21->of_node, "vf50-ts-min-pressure",
     &VAR_22->min_pressure);
 if (VAR_24)
  return VAR_24;

 VAR_19 = FUNC_4(VAR_21);
 if (!VAR_19) {
  FUNC_2(VAR_21, "Failed to allocate TS input device\n");
  return -VAR_8;
 }

 VAR_19->name = VAR_6;
 VAR_19->id.bustype = VAR_4;
 VAR_19->dev.parent = VAR_21;
 VAR_19->open = VAR_17;
 VAR_19->close = VAR_15;

 FUNC_11(VAR_19, VAR_9, VAR_3);
 FUNC_10(VAR_19, VAR_1, 0, VAR_13, 0, 0);
 FUNC_10(VAR_19, VAR_2, 0, VAR_13, 0, 0);
 FUNC_10(VAR_19, VAR_0, 0, VAR_13, 0, 0);

 VAR_22->ts_input = VAR_19;
 FUNC_12(VAR_19, VAR_22);

 VAR_24 = FUNC_9(VAR_19);
 if (VAR_24) {
  FUNC_2(VAR_21, "Failed to register input device\n");
  return VAR_24;
 }

 VAR_24 = FUNC_15(VAR_21, &VAR_22->gpio_xp, "xp", VAR_11);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_15(VAR_21, &VAR_22->gpio_xm,
    "xm", VAR_11);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_15(VAR_21, &VAR_22->gpio_yp, "yp", VAR_11);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_15(VAR_21, &VAR_22->gpio_ym, "ym", VAR_11);
 if (VAR_24)
  return VAR_24;

 VAR_22->pen_irq = FUNC_14(VAR_18, 0);
 if (VAR_22->pen_irq < 0)
  return VAR_22->pen_irq;

 VAR_24 = FUNC_6(VAR_21, VAR_22->pen_irq,
       ((void*)0), VAR_16, VAR_12,
       "vf50 touch", VAR_22);
 if (VAR_24) {
  FUNC_2(VAR_21, "Failed to request IRQ %d: %d\n",
   VAR_22->pen_irq, VAR_24);
  return VAR_24;
 }

 return 0;
}
