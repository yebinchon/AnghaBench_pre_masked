
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xtkbd {struct input_dev* dev; int * keycode; int phys; struct serio* serio; } ;
struct serio_driver {int dummy; } ;
struct serio {char* phys; int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int vendor; int product; int version; int bustype; } ;
struct input_dev {char* name; int* evbit; int keycodesize; int keybit; int keycodemax; int * keycode; TYPE_2__ dev; TYPE_1__ id; int phys; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct xtkbd*) ;
 struct xtkbd* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (struct serio*) ;
 int FUNC_10 (struct serio*,struct serio_driver*) ;
 int FUNC_11 (struct serio*,struct xtkbd*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int,char*,char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_14(struct serio *VAR_6, struct serio_driver *VAR_7)
{
 struct xtkbd *VAR_8;
 struct input_dev *VAR_9;
 int VAR_10 = -VAR_1;
 int VAR_11;

 VAR_8 = FUNC_7(sizeof(struct xtkbd), VAR_4);
 VAR_9 = FUNC_3();
 if (!VAR_8 || !VAR_9)
  goto fail1;

 VAR_8->serio = VAR_6;
 VAR_8->dev = VAR_9;
 FUNC_13(VAR_8->phys, sizeof(VAR_8->phys), "%s/input0", VAR_6->phys);
 FUNC_8(VAR_8->keycode, VAR_5, sizeof(VAR_8->keycode));

 VAR_9->name = "XT Keyboard";
 VAR_9->phys = VAR_8->phys;
 VAR_9->id.bustype = VAR_0;
 VAR_9->id.vendor = 0x0001;
 VAR_9->id.product = 0x0001;
 VAR_9->id.version = 0x0100;
 VAR_9->dev.parent = &VAR_6->dev;

 VAR_9->evbit[0] = FUNC_1(VAR_2) | FUNC_1(VAR_3);
 VAR_9->keycode = VAR_8->keycode;
 VAR_9->keycodesize = sizeof(unsigned char);
 VAR_9->keycodemax = FUNC_0(VAR_5);

 for (VAR_11 = 0; VAR_11 < 255; VAR_11++)
  FUNC_12(VAR_8->keycode[VAR_11], VAR_9->keybit);
 FUNC_2(0, VAR_9->keybit);

 FUNC_11(VAR_6, VAR_8);

 VAR_10 = FUNC_10(VAR_6, VAR_7);
 if (VAR_10)
  goto fail2;

 VAR_10 = FUNC_5(VAR_8->dev);
 if (VAR_10)
  goto fail3;

 return 0;

 fail3: FUNC_9(VAR_6);
 fail2: FUNC_11(VAR_6, ((void*)0));
 fail1: FUNC_4(VAR_9);
 FUNC_6(VAR_8);
 return VAR_10;
}
