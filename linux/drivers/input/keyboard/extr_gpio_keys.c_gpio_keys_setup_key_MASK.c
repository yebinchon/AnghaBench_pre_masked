
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct input_dev {int dummy; } ;
struct gpio_keys_drvdata {int * keymap; struct gpio_button_data* data; } ;
struct gpio_keys_button {char* desc; int gpio; int debounce_interval; int irq; int wakeup_event_action; scalar_t__ type; int can_disable; int code; scalar_t__ active_low; } ;
struct gpio_button_data {int software_debounce; int irq; int release_delay; int * code; int release_timer; void* wakeup_trigger_type; int work; int * gpiod; int lock; struct gpio_keys_button const* button; struct input_dev* input; } ;
struct fwnode_handle {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,int ,struct gpio_button_data*) ;
 int * FUNC_5 (struct device*,int *,struct fwnode_handle*,int ,char const*) ;
 int FUNC_6 (struct device*,int,unsigned int,char const*) ;
 int FUNC_7 (struct device*,int,int ,unsigned long,char const*,struct gpio_button_data*) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct input_dev*,scalar_t__,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_17,
    struct input_dev *VAR_18,
    struct gpio_keys_drvdata *VAR_19,
    const struct gpio_keys_button *VAR_20,
    int VAR_21,
    struct fwnode_handle *VAR_22)
{
 const char *VAR_23 = VAR_20->desc ? VAR_20->desc : "gpio_keys";
 struct device *VAR_24 = &VAR_17->dev;
 struct gpio_button_data *VAR_25 = &VAR_19->data[VAR_21];
 irq_handler_t VAR_26;
 unsigned long VAR_27;
 int VAR_28;
 int VAR_29;

 VAR_25->input = VAR_18;
 VAR_25->button = VAR_20;
 FUNC_14(&VAR_25->lock);

 if (VAR_22) {
  VAR_25->gpiod = FUNC_5(VAR_24, ((void*)0),
        VAR_22,
        VAR_4,
        VAR_23);
  if (FUNC_1(VAR_25->gpiod)) {
   VAR_29 = FUNC_2(VAR_25->gpiod);
   if (VAR_29 == -VAR_1) {




    VAR_25->gpiod = ((void*)0);
   } else {
    if (VAR_29 != -VAR_2)
     FUNC_3(VAR_24, "failed to get gpio: %d\n",
      VAR_29);
    return VAR_29;
   }
  }
 } else if (FUNC_8(VAR_20->gpio)) {




  unsigned VAR_30 = VAR_6;

  if (VAR_20->active_low)
   VAR_30 |= VAR_5;

  VAR_29 = FUNC_6(VAR_24, VAR_20->gpio, VAR_30, VAR_23);
  if (VAR_29 < 0) {
   FUNC_3(VAR_24, "Failed to request GPIO %d, error %d\n",
    VAR_20->gpio, VAR_29);
   return VAR_29;
  }

  VAR_25->gpiod = FUNC_9(VAR_20->gpio);
  if (!VAR_25->gpiod)
   return -VAR_0;
 }

 if (VAR_25->gpiod) {
  bool VAR_31 = FUNC_10(VAR_25->gpiod);

  if (VAR_20->debounce_interval) {
   VAR_29 = FUNC_11(VAR_25->gpiod,
     VAR_20->debounce_interval * 1000);

   if (VAR_29 < 0)
    VAR_25->software_debounce =
      VAR_20->debounce_interval;
  }

  if (VAR_20->irq) {
   VAR_25->irq = VAR_20->irq;
  } else {
   VAR_28 = FUNC_12(VAR_25->gpiod);
   if (VAR_28 < 0) {
    VAR_29 = VAR_28;
    FUNC_3(VAR_24,
     "Unable to get irq number for GPIO %d, error %d\n",
     VAR_20->gpio, VAR_29);
    return VAR_29;
   }
   VAR_25->irq = VAR_28;
  }

  FUNC_0(&VAR_25->work, VAR_13);

  VAR_26 = VAR_12;
  VAR_27 = VAR_9 | VAR_8;

  switch (VAR_20->wakeup_event_action) {
  case 129:
   VAR_25->wakeup_trigger_type = VAR_31 ?
    VAR_10 : VAR_11;
   break;
  case 128:
   VAR_25->wakeup_trigger_type = VAR_31 ?
    VAR_11 : VAR_10;
   break;
  case 130:

  default:




   break;
  }
 } else {
  if (!VAR_20->irq) {
   FUNC_3(VAR_24, "Found button without gpio or irq\n");
   return -VAR_0;
  }

  VAR_25->irq = VAR_20->irq;

  if (VAR_20->type && VAR_20->type != VAR_3) {
   FUNC_3(VAR_24, "Only EV_KEY allowed for IRQ buttons.\n");
   return -VAR_0;
  }

  VAR_25->release_delay = VAR_20->debounce_interval;
  FUNC_15(&VAR_25->release_timer, VAR_15, 0);

  VAR_26 = VAR_14;
  VAR_27 = 0;





 }

 VAR_25->code = &VAR_19->keymap[VAR_21];
 *VAR_25->code = VAR_20->code;
 FUNC_13(VAR_18, VAR_20->type ?: VAR_3, *VAR_25->code);





 VAR_29 = FUNC_4(VAR_24, VAR_16, VAR_25);
 if (VAR_29) {
  FUNC_3(VAR_24, "failed to register quiesce action, error: %d\n",
   VAR_29);
  return VAR_29;
 }





 if (!VAR_20->can_disable)
  VAR_27 |= VAR_7;

 VAR_29 = FUNC_7(VAR_24, VAR_25->irq, VAR_26, VAR_27,
          VAR_23, VAR_25);
 if (VAR_29 < 0) {
  FUNC_3(VAR_24, "Unable to claim irq %d; error %d\n",
   VAR_25->irq, VAR_29);
  return VAR_29;
 }

 return 0;
}
