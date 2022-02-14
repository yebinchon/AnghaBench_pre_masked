
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spaceball {struct input_dev* dev; int phys; } ;
struct serio_driver {int dummy; } ;
struct TYPE_4__ {int id; } ;
struct serio {char* phys; int dev; TYPE_1__ id; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_5__ {int product; int version; int vendor; int bustype; } ;
struct input_dev {int* evbit; int* keybit; TYPE_3__ dev; TYPE_2__ id; int phys; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;



 int VAR_23 ;
 struct input_dev* FUNC_2 () ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,scalar_t__,int,int,int,int) ;
 int FUNC_6 (struct spaceball*) ;
 struct spaceball* FUNC_7 (int,int ) ;
 int FUNC_8 (struct serio*) ;
 int FUNC_9 (struct serio*,struct serio_driver*) ;
 int FUNC_10 (struct serio*,struct spaceball*) ;
 int FUNC_11 (int ,int,char*,char*) ;
 int * VAR_24 ;

__attribute__((used)) static int FUNC_12(struct serio *VAR_25, struct serio_driver *VAR_26)
{
 struct spaceball *VAR_27;
 struct input_dev *VAR_28;
 int VAR_29 = -VAR_18;
 int VAR_30, VAR_31;

 if ((VAR_31 = VAR_25->id.id) > VAR_23)
  return -VAR_17;

 VAR_27 = FUNC_7(sizeof(struct spaceball), VAR_21);
 VAR_28 = FUNC_2();
 if (!VAR_27 || !VAR_28)
  goto fail1;

 VAR_27->dev = VAR_28;
 FUNC_11(VAR_27->phys, sizeof(VAR_27->phys), "%s/input0", VAR_25->phys);

 VAR_28->name = VAR_24[VAR_31];
 VAR_28->phys = VAR_27->phys;
 VAR_28->id.bustype = VAR_16;
 VAR_28->id.vendor = VAR_22;
 VAR_28->id.product = VAR_31;
 VAR_28->id.version = 0x0100;
 VAR_28->dev.parent = &VAR_25->dev;

 VAR_28->evbit[0] = FUNC_0(VAR_20) | FUNC_0(VAR_19);

 switch (VAR_31) {
  case 129:
  case 128:
   VAR_28->keybit[FUNC_1(VAR_2)] |= FUNC_0(VAR_11);
   VAR_28->keybit[FUNC_1(VAR_12)] |= FUNC_0(VAR_12) |
    FUNC_0(VAR_13) | FUNC_0(VAR_14) |
    FUNC_0(VAR_15);

  default:
   VAR_28->keybit[FUNC_1(VAR_2)] |= FUNC_0(VAR_4) |
    FUNC_0(VAR_5) | FUNC_0(VAR_6) |
    FUNC_0(VAR_7) | FUNC_0(VAR_8) |
    FUNC_0(VAR_9) | FUNC_0(VAR_10);

  case 130:
   VAR_28->keybit[FUNC_1(VAR_2)] |= FUNC_0(VAR_3) |
    FUNC_0(VAR_10);
 }

 for (VAR_30 = 0; VAR_30 < 3; VAR_30++) {
  FUNC_5(VAR_28, VAR_1 + VAR_30, -8000, 8000, 8, 40);
  FUNC_5(VAR_28, VAR_0 + VAR_30, -1600, 1600, 2, 8);
 }

 FUNC_10(VAR_25, VAR_27);

 VAR_29 = FUNC_9(VAR_25, VAR_26);
 if (VAR_29)
  goto fail2;

 VAR_29 = FUNC_4(VAR_27->dev);
 if (VAR_29)
  goto fail3;

 return 0;

 fail3: FUNC_8(VAR_25);
 fail2: FUNC_10(VAR_25, ((void*)0));
 fail1: FUNC_3(VAR_28);
 FUNC_6(VAR_27);
 return VAR_29;
}
