
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tca6416_keys_platform_data {int nbuttons; scalar_t__ irq_is_gpio; TYPE_3__* buttons; scalar_t__ rep; int use_polling; int pinmask; } ;
struct tca6416_keypad_chip {int irqnum; int use_polling; TYPE_3__* buttons; int dwork; int pinmask; int io_size; struct input_dev* input; struct i2c_client* client; } ;
struct TYPE_6__ {int vendor; int product; int version; int bustype; } ;
struct TYPE_5__ {int * parent; } ;
struct input_dev {char* phys; int evbit; TYPE_2__ id; int close; int open; TYPE_1__ dev; int name; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int dev; int irq; int name; TYPE_4__* adapter; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int type; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int VAR_10 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 struct tca6416_keys_platform_data* FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct tca6416_keypad_chip*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (struct i2c_client*,struct tca6416_keypad_chip*) ;
 struct input_dev* FUNC_13 () ;
 int FUNC_14 (struct input_dev*) ;
 int FUNC_15 (struct input_dev*) ;
 int FUNC_16 (struct input_dev*,unsigned int,int ) ;
 int FUNC_17 (struct input_dev*,struct tca6416_keypad_chip*) ;
 int FUNC_18 (struct tca6416_keypad_chip*) ;
 struct tca6416_keypad_chip* FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int *,int ,int,char*,struct tca6416_keypad_chip*) ;
 int FUNC_21 (struct tca6416_keypad_chip*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_22 (struct tca6416_keypad_chip*) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_15,
       const struct i2c_device_id *VAR_16)
{
 struct tca6416_keys_platform_data *VAR_17;
 struct tca6416_keypad_chip *VAR_18;
 struct input_dev *VAR_19;
 int VAR_20;
 int VAR_21;


 if (!FUNC_11(VAR_15->adapter, VAR_7)) {
  FUNC_4(&VAR_15->dev, "%s adapter not supported\n",
   FUNC_3(&VAR_15->adapter->dev));
  return -VAR_2;
 }

 VAR_17 = FUNC_5(&VAR_15->dev);
 if (!VAR_17) {
  FUNC_2(&VAR_15->dev, "no platform data\n");
  return -VAR_1;
 }

 VAR_18 = FUNC_19(FUNC_21(VAR_18, VAR_10, VAR_17->nbuttons), VAR_6);
 VAR_19 = FUNC_13();
 if (!VAR_18 || !VAR_19) {
  VAR_20 = -VAR_3;
  goto fail1;
 }

 VAR_18->client = VAR_15;
 VAR_18->input = VAR_19;
 VAR_18->io_size = VAR_16->driver_data;
 VAR_18->pinmask = VAR_17->pinmask;
 VAR_18->use_polling = VAR_17->use_polling;

 FUNC_0(&VAR_18->dwork, VAR_14);

 VAR_19->phys = "tca6416-keys/input0";
 VAR_19->name = VAR_15->name;
 VAR_19->dev.parent = &VAR_15->dev;

 VAR_19->open = VAR_13;
 VAR_19->close = VAR_11;

 VAR_19->id.bustype = VAR_0;
 VAR_19->id.vendor = 0x0001;
 VAR_19->id.product = 0x0001;
 VAR_19->id.version = 0x0100;


 if (VAR_17->rep)
  FUNC_1(VAR_5, VAR_19->evbit);

 for (VAR_21 = 0; VAR_21 < VAR_17->nbuttons; VAR_21++) {
  unsigned int VAR_22;

  VAR_18->buttons[VAR_21] = VAR_17->buttons[VAR_21];
  VAR_22 = (VAR_17->buttons[VAR_21].type) ?: VAR_4;
  FUNC_16(VAR_19, VAR_22, VAR_17->buttons[VAR_21].code);
 }

 FUNC_17(VAR_19, VAR_18);





 VAR_20 = FUNC_22(VAR_18);
 if (VAR_20)
  goto fail1;

 if (!VAR_18->use_polling) {
  if (VAR_17->irq_is_gpio)
   VAR_18->irqnum = FUNC_10(VAR_15->irq);
  else
   VAR_18->irqnum = VAR_15->irq;

  VAR_20 = FUNC_20(VAR_18->irqnum, ((void*)0),
          VAR_12,
          VAR_9 |
      VAR_8,
          "tca6416-keypad", VAR_18);
  if (VAR_20) {
   FUNC_2(&VAR_15->dev,
    "Unable to claim irq %d; error %d\n",
    VAR_18->irqnum, VAR_20);
   goto fail1;
  }
  FUNC_7(VAR_18->irqnum);
 }

 VAR_20 = FUNC_15(VAR_19);
 if (VAR_20) {
  FUNC_2(&VAR_15->dev,
   "Unable to register input device, error: %d\n", VAR_20);
  goto fail2;
 }

 FUNC_12(VAR_15, VAR_18);
 FUNC_6(&VAR_15->dev, 1);

 return 0;

fail2:
 if (!VAR_18->use_polling) {
  FUNC_9(VAR_18->irqnum, VAR_18);
  FUNC_8(VAR_18->irqnum);
 }
fail1:
 FUNC_14(VAR_19);
 FUNC_18(VAR_18);
 return VAR_20;
}
