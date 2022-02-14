
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bio {int dummy; } ;
struct bfq_queue {int ref; int entity; } ;
struct bfq_io_cq {int ioprio; } ;
struct bfq_group {int dummy; } ;
struct bfq_data {struct bfq_queue oom_bfqq; TYPE_1__* queue; } ;
struct TYPE_4__ {int pid; } ;
struct TYPE_3__ {int node; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bio*) ;
 struct bfq_queue** FUNC_3 (struct bfq_data*,struct bfq_group*,int const,int const) ;
 struct bfq_group* FUNC_4 (struct bfq_data*,int ) ;
 int FUNC_5 (struct bfq_data*,struct bfq_queue*,struct bfq_io_cq*,int ,int) ;
 int FUNC_6 (int *,struct bfq_group*) ;
 int FUNC_7 (struct bfq_data*,struct bfq_queue*,char*,...) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 struct bfq_queue* FUNC_8 (int ,int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static struct bfq_queue *FUNC_11(struct bfq_data *VAR_5,
           struct bio *VAR_6, bool VAR_7,
           struct bfq_io_cq *VAR_8)
{
 const int VAR_9 = FUNC_1(VAR_8->ioprio);
 const int VAR_10 = FUNC_0(VAR_8->ioprio);
 struct bfq_queue **VAR_11 = ((void*)0);
 struct bfq_queue *VAR_12;
 struct bfq_group *VAR_13;

 FUNC_9();

 VAR_13 = FUNC_4(VAR_5, FUNC_2(VAR_6));
 if (!VAR_13) {
  VAR_12 = &VAR_5->oom_bfqq;
  goto out;
 }

 if (!VAR_7) {
  VAR_11 = FUNC_3(VAR_5, VAR_13, VAR_10,
        VAR_9);
  VAR_12 = *VAR_11;
  if (VAR_12)
   goto out;
 }

 VAR_12 = FUNC_8(VAR_3,
         VAR_0 | VAR_2 | VAR_1,
         VAR_5->queue->node);

 if (VAR_12) {
  FUNC_5(VAR_5, VAR_12, VAR_8, VAR_4->pid,
         VAR_7);
  FUNC_6(&VAR_12->entity, VAR_13);
  FUNC_7(VAR_5, VAR_12, "allocated");
 } else {
  VAR_12 = &VAR_5->oom_bfqq;
  FUNC_7(VAR_5, VAR_12, "using oom bfqq");
  goto out;
 }





 if (VAR_11) {
  VAR_12->ref++;






  FUNC_7(VAR_5, VAR_12, "get_queue, bfqq not in async: %p, %d",
        VAR_12, VAR_12->ref);
  *VAR_11 = VAR_12;
 }

out:
 VAR_12->ref++;
 FUNC_7(VAR_5, VAR_12, "get_queue, at end: %p, %d", VAR_12, VAR_12->ref);
 FUNC_10();
 return VAR_12;
}
