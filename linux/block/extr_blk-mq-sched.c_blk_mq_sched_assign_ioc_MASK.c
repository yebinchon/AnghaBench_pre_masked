
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int queue_lock; } ;
struct TYPE_3__ {struct io_cq* icq; } ;
struct request {TYPE_1__ elv; struct request_queue* q; } ;
struct io_cq {int ioc; } ;
struct io_context {int dummy; } ;
struct TYPE_4__ {struct io_context* io_context; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ) ;
 struct io_cq* FUNC_1 (struct io_context*,struct request_queue*,int ) ;
 struct io_cq* FUNC_2 (struct io_context*,struct request_queue*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct request *VAR_2)
{
 struct request_queue *VAR_3 = VAR_2->q;
 struct io_context *VAR_4;
 struct io_cq *VAR_5;




 VAR_4 = VAR_1->io_context;
 if (!VAR_4)
  return;

 FUNC_3(&VAR_3->queue_lock);
 VAR_5 = FUNC_2(VAR_4, VAR_3);
 FUNC_4(&VAR_3->queue_lock);

 if (!VAR_5) {
  VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_0);
  if (!VAR_5)
   return;
 }
 FUNC_0(VAR_5->ioc);
 VAR_2->elv.icq = VAR_5;
}
