
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** priv; int icq; } ;
struct request {int rq_flags; TYPE_1__ elv; int cmd_flags; int q; int rb_node; int io_start_time_ns; int start_time_ns; } ;
struct bfq_queue {struct bfq_data* bfqd; } ;
struct bfq_data {int lock; struct request* waited_rq; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bfq_queue* FUNC_1 (struct request*) ;
 int FUNC_2 (struct bfq_queue*,struct bfq_data*) ;
 int FUNC_3 (struct bfq_queue*) ;
 int FUNC_4 (int ,struct request*) ;
 int FUNC_5 (struct bfq_data*,struct bfq_queue*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct bfq_queue*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct request *VAR_2)
{
 struct bfq_queue *VAR_3 = FUNC_1(VAR_2);
 struct bfq_data *VAR_4;
 if (FUNC_12(!(VAR_2->rq_flags & VAR_0)))
  return;






 if (!VAR_2->elv.icq || !VAR_3)
  return;

 VAR_4 = VAR_3->bfqd;

 if (VAR_2->rq_flags & VAR_1)
  FUNC_6(FUNC_8(VAR_3),
          VAR_2->start_time_ns,
          VAR_2->io_start_time_ns,
          VAR_2->cmd_flags);

 if (FUNC_9(VAR_2->rq_flags & VAR_1)) {
  unsigned long VAR_5;

  FUNC_10(&VAR_4->lock, VAR_5);

  if (VAR_2 == VAR_4->waited_rq)
   FUNC_5(VAR_4, VAR_3);

  FUNC_2(VAR_3, VAR_4);
  FUNC_3(VAR_3);

  FUNC_11(&VAR_4->lock, VAR_5);
 } else {
  if (!FUNC_0(&VAR_2->rb_node)) {
   FUNC_4(VAR_2->q, VAR_2);
   FUNC_7(FUNC_8(VAR_3),
          VAR_2->cmd_flags);
  }
  FUNC_3(VAR_3);
 }
 VAR_2->elv.priv[0] = ((void*)0);
 VAR_2->elv.priv[1] = ((void*)0);
}
