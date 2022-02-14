
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tsc_ser {struct input_dev* dev; int phys; struct serio* serio; } ;
struct serio_driver {int dummy; } ;
struct serio {char* phys; int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int product; int version; int vendor; int bustype; } ;
struct input_dev {char* name; int* evbit; int keybit; TYPE_2__ dev; TYPE_1__ id; int phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 struct input_dev* FUNC_2 () ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_6 (struct tsc_ser*) ;
 struct tsc_ser* FUNC_7 (int,int ) ;
 int FUNC_8 (struct serio*) ;
 int FUNC_9 (struct serio*,struct serio_driver*) ;
 int FUNC_10 (struct serio*,struct tsc_ser*) ;
 int FUNC_11 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_12(struct serio *VAR_9, struct serio_driver *VAR_10)
{
 struct tsc_ser *VAR_11;
 struct input_dev *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_7(sizeof(struct tsc_ser), VAR_7);
 VAR_12 = FUNC_2();
 if (!VAR_11 || !VAR_12) {
  VAR_13 = -VAR_4;
  goto fail1;
 }

 VAR_11->serio = VAR_9;
 VAR_11->dev = VAR_12;
 FUNC_11(VAR_11->phys, sizeof(VAR_11->phys), "%s/input0", VAR_9->phys);

 VAR_12->name = "TSC-10/25/40 Serial TouchScreen";
 VAR_12->phys = VAR_11->phys;
 VAR_12->id.bustype = VAR_3;
 VAR_12->id.vendor = VAR_8;
 VAR_12->id.product = 40;
 VAR_12->id.version = 0x0001;
 VAR_12->dev.parent = &VAR_9->dev;

 VAR_12->evbit[0] = FUNC_0(VAR_6) | FUNC_0(VAR_5);
 FUNC_1(VAR_2, VAR_12->keybit);
 FUNC_5(VAR_11->dev, VAR_0, 0, 0x3ff, 0, 0);
 FUNC_5(VAR_11->dev, VAR_1, 0, 0x3ff, 0, 0);

 FUNC_10(VAR_9, VAR_11);

 VAR_13 = FUNC_9(VAR_9, VAR_10);
 if (VAR_13)
  goto fail2;

 VAR_13 = FUNC_4(VAR_11->dev);
 if (VAR_13)
  goto fail3;

 return 0;

fail3:
 FUNC_8(VAR_9);
fail2:
 FUNC_10(VAR_9, ((void*)0));
fail1:
 FUNC_3(VAR_12);
 FUNC_6(VAR_11);
 return VAR_13;
}
