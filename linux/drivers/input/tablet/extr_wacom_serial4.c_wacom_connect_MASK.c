
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wacom {int extra_z_bits; int eraser_mask; int flags; int max_x; int max_y; struct input_dev* dev; int res_y; int res_x; int phys; scalar_t__ idx; scalar_t__ tool; } ;
struct serio_driver {int dummy; } ;
struct TYPE_5__ {int extra; } ;
struct serio {char* phys; int dev; TYPE_2__ id; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_4__ {int product; int vendor; int bustype; } ;
struct input_dev {int* evbit; int relbit; int keybit; int propbit; int absbit; TYPE_3__ dev; TYPE_1__ id; int phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
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
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int,int,int ,int ) ;
 int FUNC_7 (struct wacom*) ;
 struct wacom* FUNC_8 (int,int ) ;
 int FUNC_9 (struct serio*) ;
 int FUNC_10 (struct serio*,struct serio_driver*) ;
 int FUNC_11 (struct serio*,struct wacom*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int,char*,char*) ;
 int FUNC_14 (struct wacom*,struct serio*) ;

__attribute__((used)) static int FUNC_15(struct serio *VAR_26, struct serio_driver *VAR_27)
{
 struct wacom *VAR_28;
 struct input_dev *VAR_29;
 int VAR_30 = -VAR_14;

 VAR_28 = FUNC_8(sizeof(struct wacom), VAR_21);
 VAR_29 = FUNC_3();
 if (!VAR_28 || !VAR_29)
  goto free_device;

 VAR_28->dev = VAR_29;
 VAR_28->extra_z_bits = 1;
 VAR_28->eraser_mask = 0x04;
 VAR_28->tool = VAR_28->idx = 0;
 FUNC_13(VAR_28->phys, sizeof(VAR_28->phys), "%s/input0", VAR_26->phys);
 VAR_29->phys = VAR_28->phys;
 VAR_29->id.bustype = VAR_13;
 VAR_29->id.vendor = VAR_25;
 VAR_29->id.product = VAR_26->id.extra;
 VAR_29->dev.parent = &VAR_26->dev;

 VAR_29->evbit[0] =
  FUNC_0(VAR_16) | FUNC_0(VAR_15) | FUNC_0(VAR_17);
 FUNC_12(VAR_0, VAR_29->absbit);
 FUNC_12(VAR_10, VAR_29->keybit);
 FUNC_12(VAR_11, VAR_29->keybit);
 FUNC_12(VAR_9, VAR_29->keybit);
 FUNC_12(VAR_12, VAR_29->keybit);
 FUNC_12(VAR_7, VAR_29->keybit);
 FUNC_12(VAR_4, VAR_29->keybit);
 FUNC_12(VAR_6, VAR_29->keybit);
 FUNC_12(VAR_5, VAR_29->keybit);

 FUNC_11(VAR_26, VAR_28);

 VAR_30 = FUNC_10(VAR_26, VAR_27);
 if (VAR_30)
  goto free_device;

 VAR_30 = FUNC_14(VAR_28, VAR_26);
 if (VAR_30)
  goto close_serio;

 FUNC_12(VAR_22, VAR_29->propbit);
 if (!(VAR_28->flags & VAR_18))
  FUNC_1(VAR_23, VAR_29->propbit);

 if (VAR_28->flags & VAR_20)
  FUNC_1(VAR_8, VAR_29->keybit);

 if (VAR_28->flags & VAR_19)
  FUNC_1(VAR_24, VAR_29->relbit);

 FUNC_2(VAR_28->dev, VAR_2, VAR_28->res_x);
 FUNC_2(VAR_28->dev, VAR_3, VAR_28->res_y);
 FUNC_6(VAR_28->dev, VAR_2, 0, VAR_28->max_x, 0, 0);
 FUNC_6(VAR_28->dev, VAR_3, 0, VAR_28->max_y, 0, 0);
 FUNC_6(VAR_28->dev, VAR_1, -1,
        (1 << (7 + VAR_28->extra_z_bits)) - 1, 0, 0);

 VAR_30 = FUNC_5(VAR_28->dev);
 if (VAR_30)
  goto close_serio;

 return 0;

close_serio:
 FUNC_9(VAR_26);
free_device:
 FUNC_11(VAR_26, ((void*)0));
 FUNC_4(VAR_29);
 FUNC_7(VAR_28);
 return VAR_30;
}
