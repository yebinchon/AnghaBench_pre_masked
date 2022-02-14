
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* serio; } ;
struct psmouse {int pktsize; int resetafter; struct alps_data* private; scalar_t__ resync_time; int reconnect; int disconnect; int poll; int protocol_handler; TYPE_4__ ps2dev; struct input_dev* dev; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_5__ {int vendor; scalar_t__ version; int product; int bustype; } ;
struct input_dev {int* evbit; int* relbit; int* keybit; char* name; int propbit; TYPE_2__ dev; TYPE_1__ id; int phys; } ;
struct alps_data {int (* hw_init ) (struct psmouse*) ;int flags; scalar_t__ proto_version; int dev3_register_work; struct psmouse* psmouse; struct input_dev* dev2; int phys2; int (* set_abs_params ) (struct alps_data*,struct input_dev*) ;} ;
struct TYPE_7__ {char* phys; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
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
 int FUNC_2 (int *,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_5 (int ,int*) ;
 struct input_dev* FUNC_6 () ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_10 (struct input_dev*,int ,int ) ;
 int FUNC_11 (struct alps_data*) ;
 int FUNC_12 (struct psmouse*,char*,...) ;
 int FUNC_13 (struct psmouse*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int,char*,char*) ;
 int FUNC_16 (struct psmouse*) ;
 int FUNC_17 (struct alps_data*,struct input_dev*) ;

int FUNC_18(struct psmouse *VAR_37)
{
 struct alps_data *VAR_38 = VAR_37->private;
 struct input_dev *VAR_39 = VAR_37->dev;
 int VAR_40;

 VAR_40 = VAR_38->hw_init(VAR_37);
 if (VAR_40)
  goto init_fail;





 FUNC_3(VAR_24, VAR_39->evbit);
 FUNC_3(VAR_30, VAR_39->relbit);
 FUNC_3(VAR_31, VAR_39->relbit);




 VAR_39->evbit[FUNC_1(VAR_23)] |= FUNC_0(VAR_23);
 VAR_39->keybit[FUNC_1(VAR_19)] |= FUNC_0(VAR_19);
 VAR_39->keybit[FUNC_1(VAR_18)] |= FUNC_0(VAR_18);
 VAR_39->keybit[FUNC_1(VAR_15)] |=
  FUNC_0(VAR_15) | FUNC_0(VAR_17);

 VAR_39->evbit[FUNC_1(VAR_22)] |= FUNC_0(VAR_22);

 VAR_38->set_abs_params(VAR_38, VAR_39);

 if (VAR_38->flags & VAR_8) {
  VAR_39->evbit[FUNC_1(VAR_24)] |= FUNC_0(VAR_24);
  VAR_39->relbit[FUNC_1(VAR_29)] |= FUNC_0(VAR_29);
 }

 if (VAR_38->flags & (VAR_5 | VAR_6)) {
  VAR_39->keybit[FUNC_1(VAR_14)] |= FUNC_0(VAR_14);
  VAR_39->keybit[FUNC_1(VAR_13)] |= FUNC_0(VAR_13);
 }

 if (VAR_38->flags & VAR_4) {
  VAR_39->keybit[FUNC_1(VAR_9)] |= FUNC_0(VAR_9);
  VAR_39->keybit[FUNC_1(VAR_10)] |= FUNC_0(VAR_10);
  VAR_39->keybit[FUNC_1(VAR_11)] |= FUNC_0(VAR_11);
  VAR_39->keybit[FUNC_1(VAR_12)] |= FUNC_0(VAR_12);
 } else if (VAR_38->flags & VAR_1) {
  FUNC_14(VAR_25, VAR_39->propbit);
  FUNC_5(VAR_17, VAR_39->keybit);
 } else {
  VAR_39->keybit[FUNC_1(VAR_16)] |= FUNC_0(VAR_16);
 }

 if (VAR_38->flags & VAR_2) {
  struct input_dev *VAR_41;

  VAR_41 = FUNC_6();
  if (!VAR_41) {
   FUNC_12(VAR_37,
        "failed to allocate trackstick device\n");
   VAR_40 = -VAR_21;
   goto init_fail;
  }

  FUNC_15(VAR_38->phys2, sizeof(VAR_38->phys2), "%s/input1",
    VAR_37->ps2dev.serio->phys);
  VAR_41->phys = VAR_38->phys2;





  VAR_41->name = "AlpsPS/2 ALPS DualPoint Stick";

  VAR_41->id.bustype = VAR_20;
  VAR_41->id.vendor = 0x0002;
  VAR_41->id.product = VAR_28;
  VAR_41->id.version = VAR_38->proto_version;
  VAR_41->dev.parent = &VAR_37->ps2dev.serio->dev;

  FUNC_10(VAR_41, VAR_24, VAR_30);
  FUNC_10(VAR_41, VAR_24, VAR_31);
  if (VAR_38->flags & VAR_3) {
   FUNC_10(VAR_41, VAR_22, VAR_0);
   FUNC_9(VAR_41, VAR_0, 0, 127, 0, 0);
  }
  FUNC_10(VAR_41, VAR_23, VAR_15);
  FUNC_10(VAR_41, VAR_23, VAR_17);
  FUNC_10(VAR_41, VAR_23, VAR_16);

  FUNC_4(VAR_26, VAR_41->propbit);
  FUNC_4(VAR_27, VAR_41->propbit);

  VAR_40 = FUNC_8(VAR_41);
  if (VAR_40) {
   FUNC_12(VAR_37,
        "failed to register trackstick device: %d\n",
        VAR_40);
   FUNC_7(VAR_41);
   goto init_fail;
  }

  VAR_38->dev2 = VAR_41;
 }

 VAR_38->psmouse = VAR_37;

 FUNC_2(&VAR_38->dev3_register_work,
     VAR_36);

 VAR_37->protocol_handler = VAR_34;
 VAR_37->poll = VAR_33;
 VAR_37->disconnect = VAR_32;
 VAR_37->reconnect = VAR_35;
 VAR_37->pktsize = VAR_38->proto_version == VAR_7 ? 8 : 6;


 VAR_37->resync_time = 0;


 VAR_37->resetafter = VAR_37->pktsize * 2;

 return 0;

init_fail:
 FUNC_13(VAR_37);




 FUNC_11(VAR_37->private);
 VAR_37->private = ((void*)0);
 return VAR_40;
}
