
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int protocol; } ;
struct ata_queued_cmd {int hw_tag; unsigned long long tag; int err_mask; TYPE_2__* dev; int nbytes; int n_elem; int sg; int flags; TYPE_1__ tf; struct ata_port* ap; } ;
struct ata_port {unsigned long long qc_active; int flags; TYPE_3__* ops; int nr_active_links; } ;
struct TYPE_8__ {int action; } ;
struct ata_link {unsigned long long active_tag; int sactive; TYPE_4__ eh_info; } ;
struct TYPE_7__ {int (* qc_issue ) (struct ata_queued_cmd*) ;int (* qc_prep ) (struct ata_queued_cmd*) ;scalar_t__ error_handler; } ;
struct TYPE_6__ {int flags; struct ata_link* link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ata_link*) ;
 int FUNC_7 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_8 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_9 (unsigned long long) ;
 int FUNC_10 (struct ata_queued_cmd*) ;
 int FUNC_11 (struct ata_queued_cmd*) ;
 int FUNC_12 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_13 (int) ;

void FUNC_14(struct ata_queued_cmd *VAR_5)
{
 struct ata_port *VAR_6 = VAR_5->ap;
 struct ata_link *VAR_7 = VAR_5->dev->link;
 u8 VAR_8 = VAR_5->tf.protocol;





 FUNC_0(VAR_6->ops->error_handler && FUNC_9(VAR_7->active_tag));

 if (FUNC_4(VAR_8)) {
  FUNC_0(VAR_7->sactive & (1 << VAR_5->hw_tag));

  if (!VAR_7->sactive)
   VAR_6->nr_active_links++;
  VAR_7->sactive |= 1 << VAR_5->hw_tag;
 } else {
  FUNC_0(VAR_7->sactive);

  VAR_6->nr_active_links++;
  VAR_7->active_tag = VAR_5->tag;
 }

 VAR_5->flags |= VAR_4;
 VAR_6->qc_active |= 1ULL << VAR_5->tag;





 if (FUNC_2(VAR_8) && (!VAR_5->sg || !VAR_5->n_elem || !VAR_5->nbytes))
  goto sys_err;

 if (FUNC_3(VAR_8) || (FUNC_5(VAR_8) &&
     (VAR_6->flags & VAR_3)))
  if (FUNC_8(VAR_5))
   goto sys_err;


 if (FUNC_13(VAR_5->dev->flags & VAR_1)) {
  VAR_7->eh_info.action |= VAR_2;
  FUNC_1(&VAR_7->eh_info, "waking up from sleep");
  FUNC_6(VAR_7);
  return;
 }

 VAR_6->ops->qc_prep(VAR_5);
 FUNC_12(VAR_5);
 VAR_5->err_mask |= VAR_6->ops->qc_issue(VAR_5);
 if (FUNC_13(VAR_5->err_mask))
  goto err;
 return;

sys_err:
 VAR_5->err_mask |= VAR_0;
err:
 FUNC_7(VAR_5);
}
