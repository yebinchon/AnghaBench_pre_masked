
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct twl4030_keypad_data {scalar_t__ rows; scalar_t__ cols; int rep; struct matrix_keymap_data* keymap_data; } ;
struct twl4030_keypad {scalar_t__ n_rows; scalar_t__ n_cols; int autorepeat; int irq; int * dbg_dev; int keymap; struct input_dev* input; } ;
struct platform_device {int name; int dev; } ;
struct matrix_keymap_data {int dummy; } ;
struct TYPE_2__ {int vendor; int product; int version; int bustype; } ;
struct input_dev {char* name; char* phys; int evbit; TYPE_1__ id; } ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 struct twl4030_keypad_data* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,int) ;
 struct input_dev* FUNC_4 (int *) ;
 struct twl4030_keypad* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ,int *,int ,int ,int ,struct twl4030_keypad*) ;
 int VAR_14 ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*,int ,int ) ;
 int FUNC_9 (struct matrix_keymap_data const*,int *,scalar_t__,int,int ,struct input_dev*) ;
 int FUNC_10 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct twl4030_keypad*) ;
 scalar_t__ FUNC_13 (struct twl4030_keypad*,int,int ) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_15)
{
 struct twl4030_keypad_data *VAR_16 = FUNC_2(&VAR_15->dev);
 const struct matrix_keymap_data *VAR_17 = ((void*)0);
 struct twl4030_keypad *VAR_18;
 struct input_dev *VAR_19;
 u8 VAR_20;
 int VAR_21;

 VAR_18 = FUNC_5(&VAR_15->dev, sizeof(*VAR_18), VAR_6);
 if (!VAR_18)
  return -VAR_3;

 VAR_19 = FUNC_4(&VAR_15->dev);
 if (!VAR_19)
  return -VAR_3;


 VAR_18->dbg_dev = &VAR_15->dev;
 VAR_18->input = VAR_19;


 VAR_19->name = "TWL4030 Keypad";
 VAR_19->phys = "twl4030_keypad/input0";

 VAR_19->id.bustype = VAR_0;
 VAR_19->id.vendor = 0x0001;
 VAR_19->id.product = 0x0001;
 VAR_19->id.version = 0x0003;

 if (VAR_16) {
  if (!VAR_16->rows || !VAR_16->cols || !VAR_16->keymap_data) {
   FUNC_1(&VAR_15->dev, "Missing platform_data\n");
   return -VAR_1;
  }

  VAR_18->n_rows = VAR_16->rows;
  VAR_18->n_cols = VAR_16->cols;
  VAR_18->autorepeat = VAR_16->rep;
  VAR_17 = VAR_16->keymap_data;
 } else {
  VAR_21 = FUNC_10(&VAR_15->dev, &VAR_18->n_rows,
             &VAR_18->n_cols);
  if (VAR_21)
   return VAR_21;

  VAR_18->autorepeat = 1;
 }

 if (VAR_18->n_rows > VAR_12 || VAR_18->n_cols > VAR_11) {
  FUNC_1(&VAR_15->dev,
   "Invalid rows/cols amount specified in platform/devicetree data\n");
  return -VAR_1;
 }

 VAR_18->irq = FUNC_11(VAR_15, 0);
 if (!VAR_18->irq) {
  FUNC_1(&VAR_15->dev, "no keyboard irq assigned\n");
  return -VAR_1;
 }

 VAR_21 = FUNC_9(VAR_17, ((void*)0),
        VAR_12,
        1 << VAR_13,
        VAR_18->keymap, VAR_19);
 if (VAR_21) {
  FUNC_1(VAR_18->dbg_dev, "Failed to build keymap\n");
  return VAR_21;
 }

 FUNC_8(VAR_19, VAR_4, VAR_10);

 if (VAR_18->autorepeat)
  FUNC_0(VAR_5, VAR_19->evbit);

 VAR_21 = FUNC_7(VAR_19);
 if (VAR_21) {
  FUNC_1(VAR_18->dbg_dev,
   "Unable to register twl4030 keypad device\n");
  return VAR_21;
 }

 VAR_21 = FUNC_12(VAR_18);
 if (VAR_21)
  return VAR_21;







 VAR_21 = FUNC_6(&VAR_15->dev, VAR_18->irq, ((void*)0), VAR_14,
       0, VAR_15->name, VAR_18);
 if (VAR_21) {
  FUNC_3(VAR_18->dbg_dev, "request_irq failed for irq no=%d: %d\n",
   VAR_18->irq, VAR_21);
  return VAR_21;
 }


 VAR_20 = (u8) ~(VAR_8 | VAR_9);
 if (FUNC_13(VAR_18, VAR_20, VAR_7)) {

  (void) FUNC_13(VAR_18, 0xff, VAR_7);
  return -VAR_2;
 }

 return 0;
}
