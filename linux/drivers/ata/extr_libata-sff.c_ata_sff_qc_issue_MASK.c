
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int protocol; } ;
struct ata_queued_cmd {TYPE_2__ tf; TYPE_1__* dev; struct ata_port* ap; } ;
struct ata_port {int flags; void* hsm_task_state; } ;
struct ata_link {int dummy; } ;
struct TYPE_3__ {int flags; int devno; struct ata_link* link; } ;


 unsigned int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct ata_port*,int ,int,int ) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (struct ata_link*,int ) ;
 int FUNC_3 (struct ata_port*,TYPE_2__*) ;

unsigned int FUNC_4(struct ata_queued_cmd *VAR_8)
{
 struct ata_port *VAR_9 = VAR_8->ap;
 struct ata_link *VAR_10 = VAR_8->dev->link;




 if (VAR_9->flags & VAR_2)
  VAR_8->tf.flags |= VAR_3;


 FUNC_0(VAR_9, VAR_8->dev->devno, 1, 0);


 switch (VAR_8->tf.protocol) {
 case 129:
  if (VAR_8->tf.flags & VAR_3)
   FUNC_1(VAR_8);

  FUNC_3(VAR_9, &VAR_8->tf);
  VAR_9->hsm_task_state = VAR_7;

  if (VAR_8->tf.flags & VAR_3)
   FUNC_2(VAR_10, 0);

  break;

 case 128:
  if (VAR_8->tf.flags & VAR_3)
   FUNC_1(VAR_8);

  FUNC_3(VAR_9, &VAR_8->tf);

  if (VAR_8->tf.flags & VAR_4) {

   VAR_9->hsm_task_state = VAR_6;
   FUNC_2(VAR_10, 0);




  } else {

   VAR_9->hsm_task_state = VAR_5;

   if (VAR_8->tf.flags & VAR_3)
    FUNC_2(VAR_10, 0);





  }

  break;

 case 130:
 case 131:
  if (VAR_8->tf.flags & VAR_3)
   FUNC_1(VAR_8);

  FUNC_3(VAR_9, &VAR_8->tf);

  VAR_9->hsm_task_state = VAR_6;


  if ((!(VAR_8->dev->flags & VAR_1)) ||
      (VAR_8->tf.flags & VAR_3))
   FUNC_2(VAR_10, 0);
  break;

 default:
  return VAR_0;
 }

 return 0;
}
