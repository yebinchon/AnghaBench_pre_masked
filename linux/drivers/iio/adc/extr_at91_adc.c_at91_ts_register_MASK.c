
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_4__ {int bustype; } ;
struct input_dev {int keybit; int evbit; int close; int open; TYPE_2__ dev; TYPE_1__ id; int name; } ;
struct iio_dev {int dev; } ;
struct at91_adc_state {scalar_t__ touchscreen_type; struct input_dev* ts_input; TYPE_3__* caps; } ;
struct TYPE_6__ {scalar_t__ has_tsmr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int *,char*) ;
 struct iio_dev* FUNC_2 (struct at91_adc_state*) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_7 (struct input_dev*,struct at91_adc_state*) ;

__attribute__((used)) static int FUNC_8(struct at91_adc_state *VAR_15,
  struct platform_device *VAR_16)
{
 struct input_dev *VAR_17;
 struct iio_dev *VAR_18 = FUNC_2(VAR_15);
 int VAR_19;

 VAR_17 = FUNC_3();
 if (!VAR_17) {
  FUNC_1(&VAR_18->dev, "Failed to allocate TS device!\n");
  return -VAR_8;
 }

 VAR_17->name = VAR_6;
 VAR_17->id.bustype = VAR_5;
 VAR_17->dev.parent = &VAR_16->dev;
 VAR_17->open = VAR_14;
 VAR_17->close = VAR_13;

 FUNC_0(VAR_9, VAR_17->evbit);
 FUNC_0(VAR_10, VAR_17->evbit);
 FUNC_0(VAR_4, VAR_17->keybit);
 if (VAR_15->caps->has_tsmr) {
  FUNC_6(VAR_17, VAR_1, 0, (1 << VAR_11) - 1,
         0, 0);
  FUNC_6(VAR_17, VAR_2, 0, (1 << VAR_11) - 1,
         0, 0);
  FUNC_6(VAR_17, VAR_0, 0, 0xffffff, 0, 0);
 } else {
  if (VAR_15->touchscreen_type != VAR_3) {
   FUNC_1(&VAR_16->dev,
    "This touchscreen controller only support 4 wires\n");
   VAR_19 = -VAR_7;
   goto err;
  }

  FUNC_6(VAR_17, VAR_1, 0, (1 << VAR_12) - 1,
         0, 0);
  FUNC_6(VAR_17, VAR_2, 0, (1 << VAR_12) - 1,
         0, 0);
 }

 VAR_15->ts_input = VAR_17;
 FUNC_7(VAR_17, VAR_15);

 VAR_19 = FUNC_5(VAR_17);
 if (VAR_19)
  goto err;

 return VAR_19;

err:
 FUNC_4(VAR_15->ts_input);
 return VAR_19;
}
