
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int protocol; int flags; } ;
struct ata_queued_cmd {TYPE_2__ tf; struct ata_port* ap; } ;
struct ata_port {int dev; int hsm_task_state; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* sff_tf_load ) (struct ata_port*,TYPE_2__*) ;} ;




 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct ata_queued_cmd*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ata_queued_cmd*) ;
 int FUNC_5 (struct ata_queued_cmd*) ;
 int FUNC_6 (struct ata_port*,TYPE_2__*) ;

__attribute__((used)) static unsigned int FUNC_7(struct ata_queued_cmd *VAR_2)
{
 struct ata_port *VAR_3 = VAR_2->ap;

 switch (VAR_2->tf.protocol) {
 case 128:
  FUNC_1(VAR_2->tf.flags & VAR_0);

  VAR_3->ops->sff_tf_load(VAR_3, &VAR_2->tf);
  FUNC_4(VAR_2);
  FUNC_5(VAR_2);
  VAR_3->hsm_task_state = VAR_1;
  break;

 case 129:
  FUNC_3(VAR_3->dev, "Error, ATAPI not supported\n");
  FUNC_0();

 default:
  return FUNC_2(VAR_2);
 }

 return 0;
}
