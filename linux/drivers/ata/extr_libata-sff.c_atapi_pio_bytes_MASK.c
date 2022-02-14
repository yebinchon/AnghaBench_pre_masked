
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned int nsect; unsigned int lbam; unsigned int lbah; } ;
struct TYPE_6__ {int flags; } ;
struct ata_queued_cmd {int err_mask; TYPE_4__ result_tf; TYPE_2__ tf; struct ata_device* dev; struct ata_port* ap; } ;
struct ata_port {int hsm_task_state; int print_id; TYPE_3__* ops; } ;
struct ata_eh_info {int dummy; } ;
struct ata_device {TYPE_1__* link; } ;
struct TYPE_7__ {int (* sff_tf_read ) (struct ata_port*,TYPE_4__*) ;} ;
struct TYPE_5__ {struct ata_eh_info eh_info; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,unsigned int) ;
 int FUNC_1 (struct ata_queued_cmd*,unsigned int) ;
 int FUNC_2 (struct ata_eh_info*,char*,unsigned int,unsigned int) ;
 int FUNC_3 (struct ata_port*) ;
 int FUNC_4 (struct ata_port*,TYPE_4__*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ata_queued_cmd *VAR_5)
{
 struct ata_port *VAR_6 = VAR_5->ap;
 struct ata_device *VAR_7 = VAR_5->dev;
 struct ata_eh_info *VAR_8 = &VAR_7->link->eh_info;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14 = (VAR_5->tf.flags & VAR_3) ? 1 : 0;







 VAR_6->ops->sff_tf_read(VAR_6, &VAR_5->result_tf);
 VAR_9 = VAR_5->result_tf.nsect;
 VAR_10 = VAR_5->result_tf.lbam;
 VAR_11 = VAR_5->result_tf.lbah;
 VAR_12 = (VAR_11 << 8) | VAR_10;


 if (FUNC_5(VAR_9 & VAR_1))
  goto atapi_check;


 VAR_13 = ((VAR_9 & VAR_2) == 0) ? 1 : 0;
 if (FUNC_5(VAR_14 != VAR_13))
  goto atapi_check;

 if (FUNC_5(!VAR_12))
  goto atapi_check;

 FUNC_0("ata%u: xfering %d bytes\n", VAR_6->print_id, VAR_12);

 if (FUNC_5(FUNC_1(VAR_5, VAR_12)))
  goto err_out;
 FUNC_3(VAR_6);

 return;

 atapi_check:
 FUNC_2(VAR_8, "ATAPI check failed (ireason=0x%x bytes=%u)",
     VAR_9, VAR_12);
 err_out:
 VAR_5->err_mask |= VAR_0;
 VAR_6->hsm_task_state = VAR_4;
}
