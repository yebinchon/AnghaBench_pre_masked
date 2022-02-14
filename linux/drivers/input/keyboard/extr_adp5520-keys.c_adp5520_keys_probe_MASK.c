
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int parent; } ;
struct platform_device {scalar_t__ id; TYPE_3__ dev; int name; } ;
struct TYPE_9__ {int vendor; int product; int version; int bustype; } ;
struct TYPE_8__ {TYPE_3__* parent; } ;
struct input_dev {char* phys; int keycodesize; int keycodemax; int keybit; int evbit; int * keycode; TYPE_2__ id; TYPE_1__ dev; int name; } ;
struct adp5520_keys_platform_data {unsigned char rows_en_mask; unsigned char cols_en_mask; int keymapsize; scalar_t__ repeat; int keymap; } ;
struct TYPE_11__ {int notifier_call; } ;
struct adp5520_keys {TYPE_7__ notifier; int master; int * keycode; struct input_dev* input; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_18 ;
 int FUNC_2 (int ,TYPE_7__*,int) ;
 int FUNC_3 (int ,int ,unsigned char) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 struct adp5520_keys_platform_data* FUNC_5 (TYPE_3__*) ;
 struct input_dev* FUNC_6 (TYPE_3__*) ;
 struct adp5520_keys* FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (struct platform_device*,struct adp5520_keys*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_19)
{
 struct adp5520_keys_platform_data *VAR_20 = FUNC_5(&VAR_19->dev);
 struct input_dev *VAR_21;
 struct adp5520_keys *VAR_22;
 int VAR_23, VAR_24;
 unsigned char VAR_25, VAR_26 = 0;

 if (VAR_19->id != VAR_16) {
  FUNC_4(&VAR_19->dev, "only ADP5520 supports Keypad\n");
  return -VAR_10;
 }

 if (!VAR_20) {
  FUNC_4(&VAR_19->dev, "missing platform data\n");
  return -VAR_10;
 }

 if (!(VAR_20->rows_en_mask && VAR_20->cols_en_mask))
  return -VAR_10;

 VAR_22 = FUNC_7(&VAR_19->dev, sizeof(*VAR_22), VAR_15);
 if (!VAR_22) {
  FUNC_4(&VAR_19->dev, "failed to alloc memory\n");
  return -VAR_12;
 }

 VAR_21 = FUNC_6(&VAR_19->dev);
 if (!VAR_21)
  return -VAR_12;

 VAR_22->master = VAR_19->dev.parent;
 VAR_22->input = VAR_21;

 VAR_21->name = VAR_19->name;
 VAR_21->phys = "adp5520-keys/input0";
 VAR_21->dev.parent = &VAR_19->dev;

 VAR_21->id.bustype = VAR_9;
 VAR_21->id.vendor = 0x0001;
 VAR_21->id.product = 0x5520;
 VAR_21->id.version = 0x0001;

 VAR_21->keycodesize = sizeof(VAR_22->keycode[0]);
 VAR_21->keycodemax = VAR_20->keymapsize;
 VAR_21->keycode = VAR_22->keycode;

 FUNC_9(VAR_22->keycode, VAR_20->keymap,
  VAR_20->keymapsize * VAR_21->keycodesize);


 FUNC_1(VAR_13, VAR_21->evbit);

 if (VAR_20->repeat)
  FUNC_1(VAR_14, VAR_21->evbit);

 for (VAR_24 = 0; VAR_24 < VAR_21->keycodemax; VAR_24++)
  FUNC_1(VAR_22->keycode[VAR_24], VAR_21->keybit);
 FUNC_0(VAR_17, VAR_21->keybit);

 VAR_23 = FUNC_8(VAR_21);
 if (VAR_23) {
  FUNC_4(&VAR_19->dev, "unable to register input device\n");
  return VAR_23;
 }

 VAR_25 = VAR_20->rows_en_mask | VAR_20->cols_en_mask;

 VAR_23 = FUNC_3(VAR_22->master, VAR_2, VAR_25);

 if (VAR_25 & VAR_1)
  VAR_26 |= VAR_0;

 if (VAR_25 & VAR_8)
  VAR_26 |= VAR_7;

 if (VAR_26)
  VAR_23 |= FUNC_3(VAR_22->master, VAR_6,
   VAR_26);

 VAR_23 |= FUNC_3(VAR_22->master, VAR_3,
  VAR_20->rows_en_mask);

 if (VAR_23) {
  FUNC_4(&VAR_19->dev, "failed to write\n");
  return -VAR_11;
 }

 VAR_22->notifier.notifier_call = VAR_18;
 VAR_23 = FUNC_2(VAR_22->master, &VAR_22->notifier,
   VAR_4 | VAR_5);
 if (VAR_23) {
  FUNC_4(&VAR_19->dev, "failed to register notifier\n");
  return VAR_23;
 }

 FUNC_10(VAR_19, VAR_22);
 return 0;
}
