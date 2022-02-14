
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct serio_driver {int dummy; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct serio {char* phys; TYPE_2__ dev; TYPE_1__ id; scalar_t__ parent; } ;
struct psmouse {int (* disconnect ) (struct psmouse*) ;int (* pt_deactivate ) (struct psmouse*) ;TYPE_3__* protocol; int (* pt_activate ) (struct psmouse*) ;struct input_dev* dev; int smartscroll; int resync_time; int resetafter; int resolution; int rate; int phys; int resync_work; int ps2dev; } ;
struct input_dev {int dummy; } ;
struct TYPE_6__ {int smbus_companion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct psmouse*) ;
 struct psmouse* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct serio*) ;
 int FUNC_10 (struct psmouse*) ;
 int VAR_7 ;
 int FUNC_11 (struct psmouse*) ;
 int FUNC_12 (struct psmouse*) ;
 int VAR_8 ;
 scalar_t__ FUNC_13 (struct psmouse*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (struct psmouse*,int ) ;
 int VAR_14 ;
 int FUNC_15 (struct psmouse*,int *) ;
 int FUNC_16 (struct serio*) ;
 struct psmouse* FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct serio*,struct serio_driver*) ;
 int FUNC_19 (struct serio*,struct psmouse*) ;
 int FUNC_20 (int ,int,char*,char*) ;
 int FUNC_21 (struct psmouse*) ;
 int FUNC_22 (struct psmouse*) ;
 int FUNC_23 (struct psmouse*) ;
 int FUNC_24 (int *,int *) ;
 int FUNC_25 (int,int) ;

__attribute__((used)) static int FUNC_26(struct serio *VAR_15, struct serio_driver *VAR_16)
{
 struct psmouse *VAR_17, *VAR_18 = ((void*)0);
 struct input_dev *VAR_19;
 int VAR_20 = 0, VAR_21 = -VAR_1;

 FUNC_7(&VAR_8);





 if (VAR_15->parent && VAR_15->id.type == VAR_6) {
  VAR_18 = FUNC_17(VAR_15->parent);
  FUNC_11(VAR_18);
 }

 VAR_17 = FUNC_6(sizeof(struct psmouse), VAR_2);
 VAR_19 = FUNC_1();
 if (!VAR_17 || !VAR_19)
  goto err_free;

 FUNC_9(&VAR_17->ps2dev, VAR_15);
 FUNC_0(&VAR_17->resync_work, VAR_12);
 VAR_17->dev = VAR_19;
 FUNC_20(VAR_17->phys, sizeof(VAR_17->phys), "%s/input0", VAR_15->phys);

 FUNC_14(VAR_17, VAR_5);

 FUNC_19(VAR_15, VAR_17);

 VAR_21 = FUNC_18(VAR_15, VAR_16);
 if (VAR_21)
  goto err_clear_drvdata;


 if (VAR_15->id.type == VAR_6)
  FUNC_25(10000, 15000);

 if (FUNC_13(VAR_17) < 0) {
  VAR_21 = -VAR_0;
  goto err_close_serio;
 }

 VAR_17->rate = VAR_9;
 VAR_17->resolution = VAR_11;
 VAR_17->resetafter = VAR_10;
 VAR_17->resync_time = VAR_18 ? 0 : VAR_13;
 VAR_17->smartscroll = VAR_14;

 FUNC_15(VAR_17, ((void*)0));

 if (!VAR_17->protocol->smbus_companion) {
  FUNC_14(VAR_17, VAR_3);
  FUNC_12(VAR_17);

  VAR_21 = FUNC_3(VAR_19);
  if (VAR_21)
   goto err_protocol_disconnect;
 } else {

  FUNC_2(VAR_19);
  VAR_17->dev = VAR_19 = ((void*)0);
 }

 if (VAR_18 && VAR_18->pt_activate)
  VAR_18->pt_activate(VAR_18);

 VAR_21 = FUNC_24(&VAR_15->dev.kobj, &VAR_7);
 if (VAR_21)
  goto err_pt_deactivate;





 if (!VAR_17->protocol->smbus_companion)
  FUNC_10(VAR_17);

 out:

 if (VAR_18)
  FUNC_10(VAR_18);

 FUNC_8(&VAR_8);
 return VAR_20;

 err_pt_deactivate:
 if (VAR_18 && VAR_18->pt_deactivate)
  VAR_18->pt_deactivate(VAR_18);
 if (VAR_19) {
  FUNC_4(VAR_19);
  VAR_19 = ((void*)0);
 }
 err_protocol_disconnect:
 if (VAR_17->disconnect)
  VAR_17->disconnect(VAR_17);
 FUNC_14(VAR_17, VAR_4);
 err_close_serio:
 FUNC_16(VAR_15);
 err_clear_drvdata:
 FUNC_19(VAR_15, ((void*)0));
 err_free:
 FUNC_2(VAR_19);
 FUNC_5(VAR_17);

 VAR_20 = VAR_21;
 goto out;
}
