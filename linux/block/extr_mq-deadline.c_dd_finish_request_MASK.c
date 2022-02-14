
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct request {int mq_hctx; struct request_queue* q; } ;
struct deadline_data {int zone_lock; int * fifo_list; } ;
struct TYPE_2__ {struct deadline_data* elevator_data; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct request *VAR_1)
{
 struct request_queue *VAR_2 = VAR_1->q;

 if (FUNC_1(VAR_2)) {
  struct deadline_data *VAR_3 = VAR_2->elevator->elevator_data;
  unsigned long VAR_4;

  FUNC_4(&VAR_3->zone_lock, VAR_4);
  FUNC_2(VAR_1);
  if (!FUNC_3(&VAR_3->fifo_list[VAR_0]))
   FUNC_0(VAR_1->mq_hctx);
  FUNC_5(&VAR_3->zone_lock, VAR_4);
 }
}
