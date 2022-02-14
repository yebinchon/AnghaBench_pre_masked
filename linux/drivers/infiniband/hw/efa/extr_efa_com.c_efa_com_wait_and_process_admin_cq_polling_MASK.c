
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efa_comp_ctx {scalar_t__ status; int comp_status; } ;
struct TYPE_4__ {int no_completion; } ;
struct TYPE_3__ {int lock; } ;
struct efa_com_admin_queue {int poll_interval; int state; TYPE_2__ stats; int efa_dev; TYPE_1__ cq; int completion_timeout; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct efa_com_admin_queue*) ;
 int FUNC_4 (struct efa_com_admin_queue*,struct efa_comp_ctx*) ;
 int FUNC_5 (int ,char*) ;
 unsigned long VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (unsigned long) ;
 unsigned long FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct efa_comp_ctx *VAR_4,
           struct efa_com_admin_queue *VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_6 = VAR_3 + FUNC_10(VAR_5->completion_timeout);

 while (1) {
  FUNC_7(&VAR_5->cq.lock, VAR_7);
  FUNC_3(VAR_5);
  FUNC_8(&VAR_5->cq.lock, VAR_7);

  if (VAR_4->status != VAR_1)
   break;

  if (FUNC_9(VAR_6)) {
   FUNC_5(
    VAR_5->efa_dev,
    "Wait for completion (polling) timeout\n");

   FUNC_0(&VAR_5->stats.no_completion);

   FUNC_1(VAR_0, &VAR_5->state);
   VAR_8 = -VAR_2;
   goto out;
  }

  FUNC_6(VAR_5->poll_interval);
 }

 VAR_8 = FUNC_2(VAR_4->comp_status);
out:
 FUNC_4(VAR_5, VAR_4);
 return VAR_8;
}
