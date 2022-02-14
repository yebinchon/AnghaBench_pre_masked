
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct stmpe_keypad {struct input_dev* input; int no_autorepeat; int keymap; int scan_count; int debounce_ms; int * variant; struct stmpe* stmpe; } ;
struct stmpe {size_t partnum; } ;
struct TYPE_10__ {struct device_node* of_node; int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_9__ {TYPE_3__* parent; } ;
struct TYPE_8__ {int bustype; } ;
struct input_dev {char* name; int evbit; TYPE_2__ dev; TYPE_1__ id; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 struct stmpe* FUNC_2 (int ) ;
 struct input_dev* FUNC_3 (TYPE_3__*) ;
 struct stmpe_keypad* FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (TYPE_3__*,int,int *,int ,int ,char*,struct stmpe_keypad*) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int FUNC_8 (int *,int *,int ,int ,int ,struct input_dev*) ;
 int FUNC_9 (TYPE_3__*,int *,int *) ;
 int FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (struct device_node*,char*,int *) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct stmpe_keypad*) ;
 int FUNC_14 (struct stmpe_keypad*) ;
 int FUNC_15 (struct stmpe_keypad*,int ,int ) ;
 int VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_9)
{
 struct stmpe *VAR_10 = FUNC_2(VAR_9->dev.parent);
 struct device_node *VAR_11 = VAR_9->dev.of_node;
 struct stmpe_keypad *VAR_12;
 struct input_dev *VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_17 = FUNC_12(VAR_9, 0);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_12 = FUNC_4(&VAR_9->dev, sizeof(struct stmpe_keypad),
         VAR_4);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->stmpe = VAR_10;
 VAR_12->variant = &VAR_8[VAR_10->partnum];

 FUNC_11(VAR_11, "debounce-interval", &VAR_12->debounce_ms);
 FUNC_11(VAR_11, "st,scan-count", &VAR_12->scan_count);
 VAR_12->no_autorepeat = FUNC_10(VAR_11, "st,no-autorepeat");

 VAR_13 = FUNC_3(&VAR_9->dev);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->name = "STMPE keypad";
 VAR_13->id.bustype = VAR_0;
 VAR_13->dev.parent = &VAR_9->dev;

 VAR_16 = FUNC_9(&VAR_9->dev, &VAR_14, &VAR_15);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_8(((void*)0), ((void*)0), VAR_14, VAR_15,
        VAR_12->keymap, VAR_13);
 if (VAR_16)
  return VAR_16;

 FUNC_7(VAR_13, VAR_2, VAR_6);
 if (!VAR_12->no_autorepeat)
  FUNC_0(VAR_3, VAR_13->evbit);

 FUNC_15(VAR_12, VAR_14, VAR_15);

 VAR_12->input = VAR_13;

 VAR_16 = FUNC_14(VAR_12);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_5(&VAR_9->dev, VAR_17,
       ((void*)0), VAR_7,
       VAR_5, "stmpe-keypad", VAR_12);
 if (VAR_16) {
  FUNC_1(&VAR_9->dev, "unable to get irq: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_6(VAR_13);
 if (VAR_16) {
  FUNC_1(&VAR_9->dev,
   "unable to register input device: %d\n", VAR_16);
  return VAR_16;
 }

 FUNC_13(VAR_9, VAR_12);

 return 0;
}
