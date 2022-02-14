
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct serio_driver {int dummy; } ;
struct serio {char* phys; int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int version; scalar_t__ product; int vendor; int bustype; } ;
struct input_dev {char* name; TYPE_2__ dev; TYPE_1__ id; int phys; } ;
struct egalax {int phys; struct input_dev* input; struct serio* serio; } ;


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
 struct input_dev* FUNC_0 () ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct input_dev*,int ,int ) ;
 int FUNC_5 (struct egalax*) ;
 struct egalax* FUNC_6 (int,int ) ;
 int FUNC_7 (struct serio*) ;
 int FUNC_8 (struct serio*,struct serio_driver*) ;
 int FUNC_9 (struct serio*,struct egalax*) ;
 int FUNC_10 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_11(struct serio *VAR_12, struct serio_driver *VAR_13)
{
 struct egalax *VAR_14;
 struct input_dev *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_6(sizeof(struct egalax), VAR_10);
 VAR_15 = FUNC_0();
 if (!VAR_14 || !VAR_15) {
  VAR_16 = -VAR_8;
  goto err_free_mem;
 }

 VAR_14->serio = VAR_12;
 VAR_14->input = VAR_15;
 FUNC_10(VAR_14->phys, sizeof(VAR_14->phys),
   "%s/input0", VAR_12->phys);

 VAR_15->name = "EETI eGalaxTouch Serial TouchScreen";
 VAR_15->phys = VAR_14->phys;
 VAR_15->id.bustype = VAR_3;
 VAR_15->id.vendor = VAR_11;
 VAR_15->id.product = 0;
 VAR_15->id.version = 0x0001;
 VAR_15->dev.parent = &VAR_12->dev;

 FUNC_4(VAR_15, VAR_9, VAR_2);
 FUNC_3(VAR_15, VAR_0,
        VAR_6, VAR_4, 0, 0);
 FUNC_3(VAR_15, VAR_1,
        VAR_7, VAR_5, 0, 0);

 FUNC_9(VAR_12, VAR_14);

 VAR_16 = FUNC_8(VAR_12, VAR_13);
 if (VAR_16)
  goto err_reset_drvdata;

 VAR_16 = FUNC_2(VAR_15);
 if (VAR_16)
  goto err_close_serio;

 return 0;

err_close_serio:
 FUNC_7(VAR_12);
err_reset_drvdata:
 FUNC_9(VAR_12, ((void*)0));
err_free_mem:
 FUNC_1(VAR_15);
 FUNC_5(VAR_14);
 return VAR_16;
}
