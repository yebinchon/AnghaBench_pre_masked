
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int protocol; } ;
struct ata_queued_cmd {TYPE_1__ tf; TYPE_2__* dev; int cdb; } ;
struct ata_port {TYPE_3__* ops; void* hsm_task_state; } ;
struct TYPE_6__ {int (* bmdma_start ) (struct ata_queued_cmd*) ;int (* sff_data_xfer ) (struct ata_queued_cmd*,int ,int,int) ;} ;
struct TYPE_5__ {int cdb_len; } ;





 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ata_port*) ;
 int FUNC_4 (struct ata_queued_cmd*,int ,int,int) ;
 int FUNC_5 (struct ata_queued_cmd*) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_2, struct ata_queued_cmd *VAR_3)
{

 FUNC_1("send cdb\n");
 FUNC_2(VAR_3->dev->cdb_len < 12);

 VAR_2->ops->sff_data_xfer(VAR_3, VAR_3->cdb, VAR_3->dev->cdb_len, 1);
 FUNC_3(VAR_2);


 switch (VAR_3->tf.protocol) {
 case 128:
  VAR_2->hsm_task_state = VAR_0;
  break;
 case 129:
  VAR_2->hsm_task_state = VAR_1;
  break;







 default:
  FUNC_0();
 }
}
