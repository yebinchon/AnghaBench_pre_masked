
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct efa_comp_ctx {scalar_t__ status; int comp_status; int cmd_opcode; int wait_event; } ;
struct TYPE_6__ {int cc; int lock; } ;
struct TYPE_5__ {int cc; int pc; } ;
struct TYPE_4__ {int no_completion; } ;
struct efa_com_admin_queue {int state; TYPE_3__ cq; TYPE_2__ sq; int efa_dev; TYPE_1__ stats; int completion_timeout; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct efa_com_admin_queue*) ;
 int FUNC_5 (struct efa_com_admin_queue*,struct efa_comp_ctx*) ;
 int FUNC_6 (int ,char*,int ,int ,scalar_t__,struct efa_comp_ctx*,int ,int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct efa_comp_ctx *VAR_4,
       struct efa_com_admin_queue *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 FUNC_10(&VAR_4->wait_event,
        FUNC_9(VAR_5->completion_timeout));







 if (VAR_4->status == VAR_2) {
  FUNC_7(&VAR_5->cq.lock, VAR_6);
  FUNC_4(VAR_5);
  FUNC_8(&VAR_5->cq.lock, VAR_6);

  FUNC_0(&VAR_5->stats.no_completion);

  if (VAR_4->status == VAR_1)
   FUNC_6(
    VAR_5->efa_dev,
    "The device sent a completion but the driver didn't receive any MSI-X interrupt for admin cmd %s(%d) status %d (ctx: 0x%p, sq producer: %d, sq consumer: %d, cq consumer: %d)\n",
    FUNC_2(VAR_4->cmd_opcode),
    VAR_4->cmd_opcode, VAR_4->status,
    VAR_4, VAR_5->sq.pc, VAR_5->sq.cc, VAR_5->cq.cc);
  else
   FUNC_6(
    VAR_5->efa_dev,
    "The device didn't send any completion for admin cmd %s(%d) status %d (ctx 0x%p, sq producer: %d, sq consumer: %d, cq consumer: %d)\n",
    FUNC_2(VAR_4->cmd_opcode),
    VAR_4->cmd_opcode, VAR_4->status,
    VAR_4, VAR_5->sq.pc, VAR_5->sq.cc, VAR_5->cq.cc);

  FUNC_1(VAR_0, &VAR_5->state);
  VAR_7 = -VAR_3;
  goto out;
 }

 VAR_7 = FUNC_3(VAR_4->comp_status);
out:
 FUNC_5(VAR_5, VAR_4);
 return VAR_7;
}
