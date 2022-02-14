
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skbd {struct input_dev* dev; int keycode; int phys; struct serio* serio; } ;
struct serio_driver {int dummy; } ;
struct serio {char* phys; int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int product; int version; int vendor; int bustype; } ;
struct input_dev {char* name; int* evbit; int keycodesize; int keycodemax; int keybit; int keycode; TYPE_2__ dev; TYPE_1__ id; int phys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct skbd*) ;
 struct skbd* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (struct serio*) ;
 int FUNC_10 (struct serio*,struct serio_driver*) ;
 int FUNC_11 (struct serio*,struct skbd*) ;
 int FUNC_12 (int ,int ) ;
 int * VAR_6 ;
 int FUNC_13 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_14(struct serio *VAR_7, struct serio_driver *VAR_8)
{
 struct skbd *VAR_9;
 struct input_dev *VAR_10;
 int VAR_11 = -VAR_1;
 int VAR_12;

 VAR_9 = FUNC_7(sizeof(struct skbd), VAR_4);
 VAR_10 = FUNC_3();
 if (!VAR_9 || !VAR_10)
  goto fail1;

 VAR_9->serio = VAR_7;
 VAR_9->dev = VAR_10;
 FUNC_13(VAR_9->phys, sizeof(VAR_9->phys), "%s/input0", VAR_7->phys);
 FUNC_8(VAR_9->keycode, VAR_6, sizeof(VAR_9->keycode));

 VAR_10->name = "Stowaway Keyboard";
 VAR_10->phys = VAR_9->phys;
 VAR_10->id.bustype = VAR_0;
 VAR_10->id.vendor = VAR_5;
 VAR_10->id.product = 0x0001;
 VAR_10->id.version = 0x0100;
 VAR_10->dev.parent = &VAR_7->dev;

 VAR_10->evbit[0] = FUNC_1(VAR_2) | FUNC_1(VAR_3);
 VAR_10->keycode = VAR_9->keycode;
 VAR_10->keycodesize = sizeof(unsigned char);
 VAR_10->keycodemax = FUNC_0(VAR_6);
 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_6); VAR_12++)
  FUNC_12(VAR_6[VAR_12], VAR_10->keybit);
 FUNC_2(0, VAR_10->keybit);

 FUNC_11(VAR_7, VAR_9);

 VAR_11 = FUNC_10(VAR_7, VAR_8);
 if (VAR_11)
  goto fail2;

 VAR_11 = FUNC_5(VAR_9->dev);
 if (VAR_11)
  goto fail3;

 return 0;

 fail3: FUNC_9(VAR_7);
 fail2: FUNC_11(VAR_7, ((void*)0));
 fail1: FUNC_4(VAR_10);
 FUNC_6(VAR_9);
 return VAR_11;
}
