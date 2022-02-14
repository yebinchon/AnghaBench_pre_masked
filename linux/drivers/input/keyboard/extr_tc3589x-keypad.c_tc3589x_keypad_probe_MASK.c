
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct tc_keypad {int keymap; struct tc3589x* tc3589x; struct input_dev* input; struct tc3589x_keypad_platform_data const* board; } ;
struct tc3589x_keypad_platform_data {int irqtype; int enable_wakeup; int no_autorepeat; int keymap_data; } ;
struct tc3589x {int dummy; } ;
struct TYPE_12__ {int parent; } ;
struct platform_device {TYPE_3__ dev; int name; } ;
struct TYPE_11__ {TYPE_3__* parent; } ;
struct TYPE_10__ {int bustype; } ;
struct input_dev {int evbit; int keycode; int close; int open; TYPE_2__ dev; int name; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct tc3589x_keypad_platform_data const*) ;
 int VAR_6 ;
 int FUNC_1 (struct tc3589x_keypad_platform_data const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 struct tc3589x* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 struct input_dev* FUNC_7 (TYPE_3__*) ;
 struct tc_keypad* FUNC_8 (TYPE_3__*,int,int ) ;
 int FUNC_9 (TYPE_3__*,int,int *,int ,int,char*,struct tc_keypad*) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*,int ,int ) ;
 int FUNC_12 (struct input_dev*,struct tc_keypad*) ;
 int FUNC_13 (int ,int *,int ,int ,int *,struct input_dev*) ;
 int FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (struct platform_device*,struct tc_keypad*) ;
 int VAR_9 ;
 int FUNC_16 (struct tc_keypad*) ;
 int VAR_10 ;
 struct tc3589x_keypad_platform_data* FUNC_17 (TYPE_3__*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_12)
{
 struct tc3589x *VAR_13 = FUNC_4(VAR_12->dev.parent);
 struct tc_keypad *VAR_14;
 struct input_dev *VAR_15;
 const struct tc3589x_keypad_platform_data *VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = FUNC_17(&VAR_12->dev);
 if (FUNC_0(VAR_16)) {
  FUNC_3(&VAR_12->dev, "invalid keypad platform data\n");
  return FUNC_1(VAR_16);
 }

 VAR_18 = FUNC_14(VAR_12, 0);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_14 = FUNC_8(&VAR_12->dev, sizeof(struct tc_keypad),
         VAR_4);
 if (!VAR_14)
  return -VAR_1;

 VAR_15 = FUNC_7(&VAR_12->dev);
 if (!VAR_15) {
  FUNC_3(&VAR_12->dev, "failed to allocate input device\n");
  return -VAR_1;
 }

 VAR_14->board = VAR_16;
 VAR_14->input = VAR_15;
 VAR_14->tc3589x = VAR_13;

 VAR_15->id.bustype = VAR_0;
 VAR_15->name = VAR_12->name;
 VAR_15->dev.parent = &VAR_12->dev;

 VAR_15->open = VAR_11;
 VAR_15->close = VAR_9;

 VAR_17 = FUNC_13(VAR_16->keymap_data, ((void*)0),
        VAR_8, VAR_7,
        ((void*)0), VAR_15);
 if (VAR_17) {
  FUNC_3(&VAR_12->dev, "Failed to build keymap\n");
  return VAR_17;
 }

 VAR_14->keymap = VAR_15->keycode;

 FUNC_11(VAR_15, VAR_2, VAR_6);
 if (!VAR_16->no_autorepeat)
  FUNC_2(VAR_3, VAR_15->evbit);

 FUNC_12(VAR_15, VAR_14);

 FUNC_16(VAR_14);

 VAR_17 = FUNC_9(&VAR_12->dev, VAR_18,
       ((void*)0), VAR_10,
       VAR_16->irqtype | VAR_5,
       "tc3589x-keypad", VAR_14);
 if (VAR_17) {
  FUNC_3(&VAR_12->dev,
    "Could not allocate irq %d,error %d\n",
    VAR_18, VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_10(VAR_15);
 if (VAR_17) {
  FUNC_3(&VAR_12->dev, "Could not register input device\n");
  return VAR_17;
 }


 FUNC_5(&VAR_12->dev, VAR_16->enable_wakeup);
 FUNC_6(&VAR_12->dev, VAR_16->enable_wakeup);

 FUNC_15(VAR_12, VAR_14);

 return 0;
}
