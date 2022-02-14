
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm8323_platform_data {int size_x; int size_y; scalar_t__ repeat; int * keymap; scalar_t__ name; int * pwm_names; int active_time; int debounce_time; } ;
struct lm8323_chip {int size_x; int size_y; int kp_enabled; TYPE_1__* pwm; int * keymap; int phys; int active_time; int debounce_time; int lock; struct input_dev* idev; struct i2c_client* client; } ;
struct input_dev {char* name; int* evbit; int* mscbit; int* keybit; int phys; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;
struct TYPE_2__ {int cdev; scalar_t__ enabled; } ;


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
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int*) ;
 int VAR_15 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,...) ;
 struct lm8323_platform_data* FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct i2c_client*,struct lm8323_chip*) ;
 int FUNC_13 (struct lm8323_chip*,int,int *,int ) ;
 struct input_dev* FUNC_14 () ;
 int FUNC_15 (struct input_dev*) ;
 int FUNC_16 (struct input_dev*) ;
 int FUNC_17 (struct input_dev*) ;
 unsigned long VAR_16 ;
 int FUNC_18 (struct lm8323_chip*) ;
 struct lm8323_chip* FUNC_19 (int,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct lm8323_chip*) ;
 int VAR_17 ;
 int FUNC_22 (struct lm8323_chip*,int ,int*,int) ;
 scalar_t__ FUNC_23 (struct lm8323_chip*,int*) ;
 int FUNC_24 (struct lm8323_chip*) ;
 unsigned long FUNC_25 (int) ;
 int FUNC_26 (int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int,int *,int ,int,char*,struct lm8323_chip*) ;
 int FUNC_29 (int ,int,char*,char*) ;
 scalar_t__ FUNC_30 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_31(struct i2c_client *VAR_18,
      const struct i2c_device_id *VAR_19)
{
 struct lm8323_platform_data *VAR_20 = FUNC_5(&VAR_18->dev);
 struct input_dev *VAR_21;
 struct lm8323_chip *VAR_22;
 int VAR_23;
 int VAR_24, VAR_25;
 unsigned long VAR_26;
 u8 VAR_27[2];

 if (!VAR_20 || !VAR_20->size_x || !VAR_20->size_y) {
  FUNC_4(&VAR_18->dev, "missing platform_data\n");
  return -VAR_0;
 }

 if (VAR_20->size_x > 8) {
  FUNC_4(&VAR_18->dev, "invalid x size %d specified\n",
   VAR_20->size_x);
  return -VAR_0;
 }

 if (VAR_20->size_y > 12) {
  FUNC_4(&VAR_18->dev, "invalid y size %d specified\n",
   VAR_20->size_y);
  return -VAR_0;
 }

 VAR_22 = FUNC_19(sizeof *VAR_22, VAR_6);
 VAR_21 = FUNC_14();
 if (!VAR_22 || !VAR_21) {
  VAR_25 = -VAR_2;
  goto fail1;
 }

 VAR_22->client = VAR_18;
 VAR_22->idev = VAR_21;
 FUNC_27(&VAR_22->lock);

 VAR_22->size_x = VAR_20->size_x;
 VAR_22->size_y = VAR_20->size_y;
 FUNC_7(&VAR_18->dev, "Keypad size: %d x %d\n",
   VAR_22->size_x, VAR_22->size_y);

 VAR_22->debounce_time = VAR_20->debounce_time;
 VAR_22->active_time = VAR_20->active_time;

 FUNC_24(VAR_22);



 VAR_26 = VAR_16 + FUNC_25(100);
 while (FUNC_22(VAR_22, VAR_11, VAR_27, 1) == 1) {
  if (VAR_27[0] & VAR_7)
   break;

  if (FUNC_30(VAR_16, VAR_26)) {
   FUNC_4(&VAR_18->dev,
    "timeout waiting for initialisation\n");
   break;
  }

  FUNC_26(1);
 }

 FUNC_21(VAR_22);


 if (FUNC_23(VAR_22, VAR_27) != 0) {
  FUNC_4(&VAR_18->dev, "device not found\n");
  VAR_25 = -VAR_1;
  goto fail1;
 }

 for (VAR_23 = 0; VAR_23 < VAR_13; VAR_23++) {
  VAR_25 = FUNC_13(VAR_22, VAR_23 + 1, &VAR_18->dev,
          VAR_20->pwm_names[VAR_23]);
  if (VAR_25 < 0)
   goto fail2;
 }

 VAR_22->kp_enabled = 1;
 VAR_25 = FUNC_8(&VAR_18->dev, &VAR_15);
 if (VAR_25 < 0)
  goto fail2;

 VAR_21->name = VAR_20->name ? : "LM8323 keypad";
 FUNC_29(VAR_22->phys, sizeof(VAR_22->phys),
   "%s/input-kp", FUNC_6(&VAR_18->dev));
 VAR_21->phys = VAR_22->phys;

 VAR_21->evbit[0] = FUNC_0(VAR_3) | FUNC_0(VAR_4);
 FUNC_2(VAR_14, VAR_21->mscbit);
 for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
  FUNC_2(VAR_20->keymap[VAR_24], VAR_21->keybit);
  VAR_22->keymap[VAR_24] = VAR_20->keymap[VAR_24];
 }
 FUNC_1(VAR_10, VAR_21->keybit);

 if (VAR_20->repeat)
  FUNC_2(VAR_5, VAR_21->evbit);

 VAR_25 = FUNC_16(VAR_21);
 if (VAR_25) {
  FUNC_3(&VAR_18->dev, "error registering input device\n");
  goto fail3;
 }

 VAR_25 = FUNC_28(VAR_18->irq, ((void*)0), VAR_17,
     VAR_9|VAR_8, "lm8323", VAR_22);
 if (VAR_25) {
  FUNC_4(&VAR_18->dev, "could not get IRQ %d\n", VAR_18->irq);
  goto fail4;
 }

 FUNC_12(VAR_18, VAR_22);

 FUNC_9(&VAR_18->dev, 1);
 FUNC_11(VAR_18->irq);

 return 0;

fail4:
 FUNC_17(VAR_21);
 VAR_21 = ((void*)0);
fail3:
 FUNC_10(&VAR_18->dev, &VAR_15);
fail2:
 while (--VAR_23 >= 0)
  if (VAR_22->pwm[VAR_23].enabled)
   FUNC_20(&VAR_22->pwm[VAR_23].cdev);
fail1:
 FUNC_15(VAR_21);
 FUNC_18(VAR_22);
 return VAR_25;
}
