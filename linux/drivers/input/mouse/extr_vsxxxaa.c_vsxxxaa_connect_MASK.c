
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsxxxaa {int phys; int name; struct serio* serio; struct input_dev* dev; } ;
struct serio_driver {int dummy; } ;
struct serio {char* phys; int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {int relbit; int keybit; int evbit; TYPE_2__ dev; TYPE_1__ id; int phys; int name; } ;


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
 int FUNC_0 (int ,int ) ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_5 (struct vsxxxaa*) ;
 struct vsxxxaa* FUNC_6 (int,int ) ;
 int FUNC_7 (struct serio*) ;
 int FUNC_8 (struct serio*,struct serio_driver*) ;
 int FUNC_9 (struct serio*,struct vsxxxaa*) ;
 int FUNC_10 (struct serio*,char) ;
 int FUNC_11 (int ,int,char*,char*) ;
 int FUNC_12 (int ,char*,int) ;

__attribute__((used)) static int FUNC_13(struct serio *VAR_14, struct serio_driver *VAR_15)
{
 struct vsxxxaa *VAR_16;
 struct input_dev *VAR_17;
 int VAR_18 = -VAR_7;

 VAR_16 = FUNC_6(sizeof(struct vsxxxaa), VAR_11);
 VAR_17 = FUNC_1();
 if (!VAR_16 || !VAR_17)
  goto fail1;

 VAR_16->dev = VAR_17;
 VAR_16->serio = VAR_14;
 FUNC_12(VAR_16->name, "DEC VSXXX-AA/-GA mouse or VSXXX-AB digitizer",
   sizeof(VAR_16->name));
 FUNC_11(VAR_16->phys, sizeof(VAR_16->phys), "%s/input0", VAR_14->phys);

 VAR_17->name = VAR_16->name;
 VAR_17->phys = VAR_16->phys;
 VAR_17->id.bustype = VAR_6;
 VAR_17->dev.parent = &VAR_14->dev;

 FUNC_0(VAR_9, VAR_17->evbit);
 FUNC_0(VAR_10, VAR_17->evbit);
 FUNC_0(VAR_8, VAR_17->evbit);
 FUNC_0(VAR_2, VAR_17->keybit);
 FUNC_0(VAR_3, VAR_17->keybit);
 FUNC_0(VAR_4, VAR_17->keybit);
 FUNC_0(VAR_5, VAR_17->keybit);
 FUNC_0(VAR_12, VAR_17->relbit);
 FUNC_0(VAR_13, VAR_17->relbit);
 FUNC_4(VAR_17, VAR_0, 0, 1023, 0, 0);
 FUNC_4(VAR_17, VAR_1, 0, 1023, 0, 0);

 FUNC_9(VAR_14, VAR_16);

 VAR_18 = FUNC_8(VAR_14, VAR_15);
 if (VAR_18)
  goto fail2;





 FUNC_10(VAR_14, 'T');

 VAR_18 = FUNC_3(VAR_17);
 if (VAR_18)
  goto fail3;

 return 0;

 fail3: FUNC_7(VAR_14);
 fail2: FUNC_9(VAR_14, ((void*)0));
 fail1: FUNC_2(VAR_17);
 FUNC_5(VAR_16);
 return VAR_18;
}
