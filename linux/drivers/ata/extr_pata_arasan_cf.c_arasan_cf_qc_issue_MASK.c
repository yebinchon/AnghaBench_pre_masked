
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int protocol; int flags; } ;
struct ata_queued_cmd {TYPE_4__ tf; TYPE_2__* dev; struct ata_port* ap; } ;
struct ata_port {int hsm_task_state; TYPE_3__* ops; TYPE_1__* host; } ;
struct arasan_cf_dev {struct ata_queued_cmd* qc; int dma_status; } ;
struct TYPE_7__ {int (* sff_tf_load ) (struct ata_port*,TYPE_4__*) ;} ;
struct TYPE_6__ {int devno; } ;
struct TYPE_5__ {struct arasan_cf_dev* private_data; } ;


 unsigned int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct arasan_cf_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ata_port*,int ) ;
 unsigned int FUNC_5 (struct ata_queued_cmd*) ;
 int FUNC_6 (struct ata_port*) ;
 int FUNC_7 (struct ata_port*,TYPE_4__*) ;

__attribute__((used)) static unsigned int FUNC_8(struct ata_queued_cmd *VAR_3)
{
 struct ata_port *VAR_4 = VAR_3->ap;
 struct arasan_cf_dev *VAR_5 = VAR_4->host->private_data;


 if (!FUNC_3(VAR_3->tf.protocol))
  return FUNC_5(VAR_3);


 FUNC_6(VAR_4);
 FUNC_4(VAR_4, VAR_3->dev->devno);
 FUNC_6(VAR_4);


 switch (VAR_3->tf.protocol) {
 case 128:
  FUNC_1(VAR_3->tf.flags & VAR_1);

  VAR_4->ops->sff_tf_load(VAR_4, &VAR_3->tf);
  VAR_5->dma_status = 0;
  VAR_5->qc = VAR_3;
  FUNC_2(VAR_5);
  VAR_4->hsm_task_state = VAR_2;
  break;

 default:
  FUNC_0(1);
  return VAR_0;
 }

 return 0;
}
