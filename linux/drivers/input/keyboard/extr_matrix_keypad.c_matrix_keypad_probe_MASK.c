
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; int name; } ;
struct matrix_keypad_platform_data {int wakeup; int no_autorepeat; int num_col_gpios; int num_row_gpios; int keymap_data; } ;
struct matrix_keypad {int stopped; struct input_dev* input_dev; int lock; int work; int row_shift; struct matrix_keypad_platform_data const* pdata; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {int evbit; int close; int open; TYPE_2__ dev; TYPE_1__ id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct matrix_keypad_platform_data const*) ;
 int VAR_6 ;
 int FUNC_2 (struct matrix_keypad_platform_data const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,char*) ;
 struct matrix_keypad_platform_data* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 struct input_dev* FUNC_8 () ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*,int ,int ) ;
 int FUNC_12 (struct input_dev*,struct matrix_keypad*) ;
 int FUNC_13 (struct matrix_keypad*) ;
 struct matrix_keypad* FUNC_14 (int,int ) ;
 int FUNC_15 (int ,int *,int ,int ,int *,struct input_dev*) ;
 int FUNC_16 (struct matrix_keypad*) ;
 int FUNC_17 (struct platform_device*,struct matrix_keypad*) ;
 struct matrix_keypad_platform_data* FUNC_18 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_19 (struct platform_device*,struct matrix_keypad*) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_10)
{
 const struct matrix_keypad_platform_data *VAR_11;
 struct matrix_keypad *VAR_12;
 struct input_dev *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_5(&VAR_10->dev);
 if (!VAR_11) {
  VAR_11 = FUNC_18(&VAR_10->dev);
  if (FUNC_1(VAR_11))
   return FUNC_2(VAR_11);
 } else if (!VAR_11->keymap_data) {
  FUNC_4(&VAR_10->dev, "no keymap data defined\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_14(sizeof(struct matrix_keypad), VAR_5);
 VAR_13 = FUNC_8();
 if (!VAR_12 || !VAR_13) {
  VAR_14 = -VAR_2;
  goto err_free_mem;
 }

 VAR_12->input_dev = VAR_13;
 VAR_12->pdata = VAR_11;
 VAR_12->row_shift = FUNC_7(VAR_11->num_col_gpios);
 VAR_12->stopped = 1;
 FUNC_0(&VAR_12->work, VAR_7);
 FUNC_20(&VAR_12->lock);

 VAR_13->name = VAR_10->name;
 VAR_13->id.bustype = VAR_0;
 VAR_13->dev.parent = &VAR_10->dev;
 VAR_13->open = VAR_8;
 VAR_13->close = VAR_9;

 VAR_14 = FUNC_15(VAR_11->keymap_data, ((void*)0),
      VAR_11->num_row_gpios,
      VAR_11->num_col_gpios,
      ((void*)0), VAR_13);
 if (VAR_14) {
  FUNC_4(&VAR_10->dev, "failed to build keymap\n");
  goto err_free_mem;
 }

 if (!VAR_11->no_autorepeat)
  FUNC_3(VAR_4, VAR_13->evbit);
 FUNC_11(VAR_13, VAR_3, VAR_6);
 FUNC_12(VAR_13, VAR_12);

 VAR_14 = FUNC_17(VAR_10, VAR_12);
 if (VAR_14)
  goto err_free_mem;

 VAR_14 = FUNC_10(VAR_12->input_dev);
 if (VAR_14)
  goto err_free_gpio;

 FUNC_6(&VAR_10->dev, VAR_11->wakeup);
 FUNC_19(VAR_10, VAR_12);

 return 0;

err_free_gpio:
 FUNC_16(VAR_12);
err_free_mem:
 FUNC_9(VAR_13);
 FUNC_13(VAR_12);
 return VAR_14;
}
