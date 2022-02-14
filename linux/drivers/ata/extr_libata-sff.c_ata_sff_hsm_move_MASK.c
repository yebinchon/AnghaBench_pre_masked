
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int flags; int protocol; } ;
struct ata_queued_cmd {int flags; int err_mask; TYPE_2__* dev; TYPE_1__ tf; } ;
struct ata_port {int hsm_task_state; int print_id; int lock; } ;
struct ata_eh_info {int dummy; } ;
struct ata_link {struct ata_eh_info eh_info; } ;
struct TYPE_4__ {int horkage; int devno; struct ata_link* link; } ;


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
 int FUNC_0 (char*,int ,int ,int,...) ;



 void* VAR_14 ;

 int FUNC_1 (int,char*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ata_eh_info*,char*,...) ;
 int FUNC_5 (struct ata_port*,struct ata_queued_cmd*) ;
 int FUNC_6 (struct ata_queued_cmd*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ata_queued_cmd*) ;
 int FUNC_9 (struct ata_port*) ;
 int FUNC_10 (struct ata_queued_cmd*) ;
 int FUNC_11 (struct ata_port*,struct ata_queued_cmd*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;

int FUNC_15(struct ata_port *VAR_15, struct ata_queued_cmd *VAR_16,
       u8 VAR_17, int VAR_18)
{
 struct ata_link *VAR_19 = VAR_16->dev->link;
 struct ata_eh_info *VAR_20 = &VAR_19->eh_info;
 int VAR_21;

 FUNC_13(VAR_15->lock);

 FUNC_2((VAR_16->flags & VAR_11) == 0);





 FUNC_2(VAR_18 != FUNC_5(VAR_15, VAR_16));

fsm_start:
 FUNC_0("ata%u: protocol %d task_state %d (dev_stat 0x%X)\n",
  VAR_15->print_id, VAR_16->tf.protocol, VAR_15->hsm_task_state, VAR_17);

 switch (VAR_15->hsm_task_state) {
 case 129:






  VAR_21 = (VAR_16->tf.flags & VAR_12);


  if (FUNC_14((VAR_17 & VAR_6) == 0)) {

   if (FUNC_12(VAR_17 & (VAR_7 | VAR_5)))

    VAR_16->err_mask |= VAR_0;
   else {

    FUNC_4(VAR_20,
     "ST_FIRST: !(DRQ|ERR|DF)");
    VAR_16->err_mask |= VAR_1;
   }

   VAR_15->hsm_task_state = 130;
   goto fsm_start;
  }







  if (FUNC_14(VAR_17 & (VAR_7 | VAR_5))) {





   if (!(VAR_16->dev->horkage & VAR_9)) {
    FUNC_4(VAR_20, "ST_FIRST: "
     "DRQ=1 with device error, "
     "dev_stat 0x%X", VAR_17);
    VAR_16->err_mask |= VAR_1;
    VAR_15->hsm_task_state = 130;
    goto fsm_start;
   }
  }

  if (VAR_16->tf.protocol == VAR_10) {
   VAR_15->hsm_task_state = 131;
   FUNC_8(VAR_16);
  } else

   FUNC_11(VAR_15, VAR_16);




  break;

 case 131:

  if (VAR_16->tf.protocol == VAR_3) {

   if ((VAR_17 & VAR_6) == 0) {



    VAR_15->hsm_task_state = 128;
    goto fsm_start;
   }







   if (FUNC_14(VAR_17 & (VAR_7 | VAR_5))) {
    FUNC_4(VAR_20, "ST-ATAPI: "
     "DRQ=1 with device error, "
     "dev_stat 0x%X", VAR_17);
    VAR_16->err_mask |= VAR_1;
    VAR_15->hsm_task_state = 130;
    goto fsm_start;
   }

   FUNC_10(VAR_16);

   if (FUNC_14(VAR_15->hsm_task_state == 130))

    goto fsm_start;

  } else {

   if (FUNC_14((VAR_17 & VAR_6) == 0)) {

    if (FUNC_12(VAR_17 & (VAR_7 | VAR_5))) {

     VAR_16->err_mask |= VAR_0;





     if (VAR_16->dev->horkage &
         VAR_8)
      VAR_16->err_mask |=
       VAR_2;
    } else {




     FUNC_4(VAR_20, "ST-ATA: "
      "DRQ=0 without device error, "
      "dev_stat 0x%X", VAR_17);
     VAR_16->err_mask |= VAR_1 |
       VAR_2;
    }

    VAR_15->hsm_task_state = 130;
    goto fsm_start;
   }
   if (FUNC_14(VAR_17 & (VAR_7 | VAR_5))) {

    VAR_16->err_mask |= VAR_0;

    if (!(VAR_16->tf.flags & VAR_13)) {
     FUNC_8(VAR_16);
     VAR_17 = FUNC_9(VAR_15);
    }

    if (VAR_17 & (VAR_4 | VAR_6)) {
     FUNC_4(VAR_20, "ST-ATA: "
      "BUSY|DRQ persists on ERR|DF, "
      "dev_stat 0x%X", VAR_17);
     VAR_16->err_mask |= VAR_1;
    }
    if (VAR_17 == 0x7f)
     VAR_16->err_mask |= VAR_2;





    VAR_15->hsm_task_state = 130;
    goto fsm_start;
   }

   FUNC_8(VAR_16);

   if (VAR_15->hsm_task_state == 128 &&
       (!(VAR_16->tf.flags & VAR_13))) {

    VAR_17 = FUNC_9(VAR_15);
    goto fsm_start;
   }
  }

  VAR_21 = 1;
  break;

 case 128:
  if (FUNC_14(!FUNC_7(VAR_17))) {
   VAR_16->err_mask |= FUNC_3(VAR_17);
   VAR_15->hsm_task_state = 130;
   goto fsm_start;
  }


  FUNC_0("ata%u: dev %u command complete, drv_stat 0x%x\n",
   VAR_15->print_id, VAR_16->dev->devno, VAR_17);

  FUNC_2(VAR_16->err_mask & (VAR_0 | VAR_1));

  VAR_15->hsm_task_state = VAR_14;


  FUNC_6(VAR_16, VAR_18);

  VAR_21 = 0;
  break;

 case 130:
  VAR_15->hsm_task_state = VAR_14;


  FUNC_6(VAR_16, VAR_18);

  VAR_21 = 0;
  break;
 default:
  VAR_21 = 0;
  FUNC_1(1, "ata%d: SFF host state machine in invalid state %d",
       VAR_15->print_id, VAR_15->hsm_task_state);
 }

 return VAR_21;
}
