
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; int name; } ;
struct opencores_kbd {int* keycodes; int addr; struct input_dev* input; } ;
struct TYPE_2__ {int vendor; int product; int version; int bustype; } ;
struct input_dev {char* phys; int* keycode; int keycodesize; int keycodemax; int keybit; int evbit; TYPE_1__ id; int name; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *,char*,...) ;
 struct input_dev* FUNC_6 (int *) ;
 int FUNC_7 (int *,struct resource*) ;
 struct opencores_kbd* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int,int *,int ,int ,struct opencores_kbd*) ;
 int FUNC_10 (struct input_dev*) ;
 int VAR_8 ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct input_dev *VAR_10;
 struct opencores_kbd *VAR_11;
 struct resource *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_12 = FUNC_12(VAR_9, VAR_5, 0);
 if (!VAR_12) {
  FUNC_5(&VAR_9->dev, "missing board memory resource\n");
  return -VAR_1;
 }

 VAR_13 = FUNC_11(VAR_9, 0);
 if (VAR_13 < 0)
  return -VAR_1;

 VAR_11 = FUNC_8(&VAR_9->dev, sizeof(*VAR_11),
         VAR_4);
 if (!VAR_11)
  return -VAR_2;

 VAR_10 = FUNC_6(&VAR_9->dev);
 if (!VAR_10) {
  FUNC_5(&VAR_9->dev, "failed to allocate input device\n");
  return -VAR_2;
 }

 VAR_11->input = VAR_10;

 VAR_11->addr = FUNC_7(&VAR_9->dev, VAR_12);
 if (FUNC_1(VAR_11->addr))
  return FUNC_2(VAR_11->addr);

 VAR_10->name = VAR_9->name;
 VAR_10->phys = "opencores-kbd/input0";

 VAR_10->id.bustype = VAR_0;
 VAR_10->id.vendor = 0x0001;
 VAR_10->id.product = 0x0001;
 VAR_10->id.version = 0x0100;

 VAR_10->keycode = VAR_11->keycodes;
 VAR_10->keycodesize = sizeof(VAR_11->keycodes[0]);
 VAR_10->keycodemax = FUNC_0(VAR_11->keycodes);

 FUNC_4(VAR_3, VAR_10->evbit);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_11->keycodes); VAR_14++) {




  VAR_11->keycodes[VAR_14] = VAR_14;
  FUNC_4(VAR_11->keycodes[VAR_14], VAR_10->keybit);
 }
 FUNC_3(VAR_7, VAR_10->keybit);

 VAR_15 = FUNC_9(&VAR_9->dev, VAR_13, &VAR_8,
     VAR_6,
     VAR_9->name, VAR_11);
 if (VAR_15) {
  FUNC_5(&VAR_9->dev, "unable to claim irq %d\n", VAR_13);
  return VAR_15;
 }

 VAR_15 = FUNC_10(VAR_10);
 if (VAR_15) {
  FUNC_5(&VAR_9->dev, "unable to register input device\n");
  return VAR_15;
 }

 return 0;
}
