
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vmmouse_data {struct input_dev* abs_dev; int dev_name; int phys; } ;
struct TYPE_8__ {TYPE_3__* serio; } ;
struct psmouse {struct vmmouse_data* private; int reconnect; int disconnect; int protocol_handler; TYPE_4__ ps2dev; int model; struct input_dev* dev; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_5__ {int vendor; int version; int product; int bustype; } ;
struct input_dev {TYPE_2__ dev; TYPE_1__ id; int name; int phys; } ;
struct TYPE_7__ {char* phys; int dev; } ;


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
 int VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;
 struct input_dev* FUNC_0 () ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct input_dev*,int ,int ) ;
 int FUNC_5 (struct vmmouse_data*) ;
 struct vmmouse_data* FUNC_6 (int,int ) ;
 int FUNC_7 (struct psmouse*) ;
 int FUNC_8 (int ,int,char*,char*,...) ;
 int FUNC_9 (struct psmouse*) ;
 int VAR_18 ;
 int FUNC_10 (struct psmouse*) ;
 int VAR_19 ;
 int VAR_20 ;

int FUNC_11(struct psmouse *VAR_21)
{
 struct vmmouse_data *VAR_22;
 struct input_dev *VAR_23 = VAR_21->dev, *VAR_24;
 int VAR_25;

 FUNC_7(VAR_21);
 VAR_25 = FUNC_10(VAR_21);
 if (VAR_25)
  return VAR_25;

 VAR_22 = FUNC_6(sizeof(*VAR_22), VAR_10);
 VAR_24 = FUNC_0();
 if (!VAR_22 || !VAR_24) {
  VAR_25 = -VAR_6;
  goto init_fail;
 }

 VAR_22->abs_dev = VAR_24;
 VAR_21->private = VAR_22;


 FUNC_8(VAR_22->phys, sizeof(VAR_22->phys), "%s/input1",
   VAR_21->ps2dev.serio->phys);


 FUNC_8(VAR_22->dev_name, sizeof(VAR_22->dev_name), "%s %s %s",
   VAR_16, VAR_17, VAR_15);
 VAR_24->phys = VAR_22->phys;
 VAR_24->name = VAR_22->dev_name;
 VAR_24->id.bustype = VAR_5;
 VAR_24->id.vendor = 0x0002;
 VAR_24->id.product = VAR_11;
 VAR_24->id.version = VAR_21->model;
 VAR_24->dev.parent = &VAR_21->ps2dev.serio->dev;


 FUNC_4(VAR_24, VAR_8, VAR_2);
 FUNC_4(VAR_24, VAR_8, VAR_4);
 FUNC_4(VAR_24, VAR_8, VAR_3);
 FUNC_4(VAR_24, VAR_7, VAR_0);
 FUNC_4(VAR_24, VAR_7, VAR_1);
 FUNC_3(VAR_24, VAR_0, 0, VAR_13, 0, 0);
 FUNC_3(VAR_24, VAR_1, 0, VAR_14, 0, 0);

 VAR_25 = FUNC_2(VAR_22->abs_dev);
 if (VAR_25)
  goto init_fail;


 FUNC_4(VAR_23, VAR_9, VAR_12);

 VAR_21->protocol_handler = VAR_19;
 VAR_21->disconnect = VAR_18;
 VAR_21->reconnect = VAR_20;

 return 0;

init_fail:
 FUNC_9(VAR_21);
 FUNC_7(VAR_21);
 FUNC_1(VAR_24);
 FUNC_5(VAR_22);
 VAR_21->private = ((void*)0);

 return VAR_25;
}
