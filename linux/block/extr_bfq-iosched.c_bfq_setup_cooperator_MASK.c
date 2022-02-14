
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ parent; } ;
struct bfq_queue {TYPE_1__ entity; struct bfq_queue* new_bfqq; } ;
struct bfq_data {int nonrot_with_queueing; struct bfq_queue oom_bfqq; int in_serv_last_pos; struct bfq_queue* in_service_queue; } ;


 struct bfq_queue* FUNC_0 (struct bfq_data*,struct bfq_queue*,int ) ;
 int FUNC_1 (void*,int) ;
 scalar_t__ FUNC_2 (struct bfq_queue*,struct bfq_queue*) ;
 scalar_t__ FUNC_3 (void*,int,int ) ;
 struct bfq_queue* FUNC_4 (struct bfq_queue*,struct bfq_queue*) ;
 scalar_t__ FUNC_5 (struct bfq_queue*) ;
 int FUNC_6 (struct bfq_data*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct bfq_queue *
FUNC_9(struct bfq_data *VAR_0, struct bfq_queue *VAR_1,
       void *VAR_2, bool VAR_3)
{
 struct bfq_queue *VAR_4, *VAR_5;
 if (FUNC_7(VAR_0->nonrot_with_queueing))
  return ((void*)0);
 if (FUNC_5(VAR_1))
  return ((void*)0);

 if (VAR_1->new_bfqq)
  return VAR_1->new_bfqq;

 if (!VAR_2 || FUNC_8(VAR_1 == &VAR_0->oom_bfqq))
  return ((void*)0);


 if (FUNC_6(VAR_0) == 1)
  return ((void*)0);

 VAR_4 = VAR_0->in_service_queue;

 if (VAR_4 && VAR_4 != VAR_1 &&
     FUNC_7(VAR_4 != &VAR_0->oom_bfqq) &&
     FUNC_3(VAR_2, VAR_3,
       VAR_0->in_serv_last_pos) &&
     VAR_1->entity.parent == VAR_4->entity.parent &&
     FUNC_2(VAR_1, VAR_4)) {
  VAR_5 = FUNC_4(VAR_1, VAR_4);
  if (VAR_5)
   return VAR_5;
 }





 VAR_5 = FUNC_0(VAR_0, VAR_1,
   FUNC_1(VAR_2, VAR_3));

 if (VAR_5 && FUNC_7(VAR_5 != &VAR_0->oom_bfqq) &&
     FUNC_2(VAR_1, VAR_5))
  return FUNC_4(VAR_1, VAR_5);

 return ((void*)0);
}
