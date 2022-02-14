
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int protocol; } ;
struct ata_queued_cmd {int err_mask; TYPE_1__* dev; TYPE_3__ tf; } ;
struct ata_port {int hsm_task_state; TYPE_2__* ops; int print_id; } ;
struct TYPE_5__ {int (* sff_irq_clear ) (struct ata_port*) ;} ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (struct ata_port*,struct ata_queued_cmd*,int,int ) ;
 unsigned int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (struct ata_port*) ;
 int FUNC_4 (struct ata_port*) ;

__attribute__((used)) static unsigned int FUNC_5(struct ata_port *VAR_4,
     struct ata_queued_cmd *VAR_5,
     bool VAR_6)
{
 u8 VAR_7;

 FUNC_0("ata%u: protocol %d task_state %d\n",
  VAR_4->print_id, VAR_5->tf.protocol, VAR_4->hsm_task_state);


 switch (VAR_4->hsm_task_state) {
 case 129:
  if (!(VAR_5->dev->flags & VAR_2))
   return FUNC_2(VAR_4);
  break;
 case 128:
  return FUNC_2(VAR_4);
 default:
  break;
 }


 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7 & VAR_1) {
  if (VAR_6) {

   VAR_5->err_mask |= VAR_0;
   VAR_4->hsm_task_state = VAR_3;
  } else
   return FUNC_2(VAR_4);
 }


 if (VAR_4->ops->sff_irq_clear)
  VAR_4->ops->sff_irq_clear(VAR_4);

 FUNC_1(VAR_4, VAR_5, VAR_7, 0);

 return 1;
}
