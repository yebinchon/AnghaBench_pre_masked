
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; int command; int feature; } ;
struct ata_queued_cmd {int err_mask; int flags; TYPE_3__ tf; int tag; struct ata_device* dev; struct ata_port* ap; } ;
struct ata_port {int pflags; TYPE_1__* ops; } ;
struct ata_eh_info {int * dev_action; } ;
struct ata_device {size_t devno; int flags; TYPE_2__* link; } ;
struct TYPE_5__ {struct ata_eh_info eh_info; } ;
struct TYPE_4__ {scalar_t__ error_handler; } ;






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
 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (struct ata_queued_cmd*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ata_queued_cmd*) ;
 int FUNC_6 (struct ata_queued_cmd*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ata_queued_cmd*) ;
 int FUNC_9 (struct ata_queued_cmd*) ;
 int FUNC_10 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(struct ata_queued_cmd *VAR_12)
{
 struct ata_port *VAR_13 = VAR_12->ap;


 FUNC_7(!!(VAR_12->tf.flags & VAR_7));
 if (VAR_13->ops->error_handler) {
  struct ata_device *VAR_14 = VAR_12->dev;
  struct ata_eh_info *VAR_15 = &VAR_14->link->eh_info;

  if (FUNC_11(VAR_12->err_mask))
   VAR_12->flags |= VAR_5;





  if (FUNC_11(FUNC_4(VAR_12->tag))) {
   FUNC_6(VAR_12);
   FUNC_10(VAR_12);
   FUNC_1(VAR_12);
   return;
  }





  if (FUNC_11(VAR_12->flags & VAR_5)) {
   FUNC_6(VAR_12);
   FUNC_9(VAR_12);
   FUNC_3(VAR_12);
   return;
  }

  FUNC_0(VAR_13->pflags & VAR_3);


  if (VAR_12->flags & VAR_6)
   FUNC_6(VAR_12);

  FUNC_8(VAR_12);



  switch (VAR_12->tf.command) {
  case 130:
   if (VAR_12->tf.feature != VAR_11 &&
       VAR_12->tf.feature != VAR_10 &&
       VAR_12->tf.feature != VAR_9 &&
       VAR_12->tf.feature != VAR_8)
    break;

  case 131:
  case 129:

   VAR_15->dev_action[VAR_14->devno] |= VAR_2;
   FUNC_2(VAR_13);
   break;

  case 128:
   VAR_14->flags |= VAR_1;
   break;
  }

  if (FUNC_11(VAR_14->flags & VAR_0))
   FUNC_5(VAR_12);

  FUNC_1(VAR_12);
 } else {
  if (VAR_12->flags & VAR_4)
   return;


  if (VAR_12->err_mask || VAR_12->flags & VAR_6)
   FUNC_6(VAR_12);

  FUNC_1(VAR_12);
 }
}
