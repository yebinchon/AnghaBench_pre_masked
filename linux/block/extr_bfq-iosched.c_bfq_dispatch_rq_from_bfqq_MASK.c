
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct bfq_queue {struct request* next_rq; } ;
struct bfq_data {int wait_dispatch; struct bfq_queue* in_service_queue; int queue; struct request* waited_rq; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfq_data*,struct bfq_queue*,int,int ) ;
 int FUNC_1 (struct bfq_queue*,unsigned long) ;
 scalar_t__ FUNC_2 (struct bfq_queue*) ;
 int FUNC_3 (int ,struct request*) ;
 unsigned long FUNC_4 (struct request*,struct bfq_queue*) ;
 int FUNC_5 (struct bfq_data*) ;
 int FUNC_6 (struct bfq_data*,struct bfq_queue*) ;

__attribute__((used)) static struct request *FUNC_7(struct bfq_data *VAR_1,
       struct bfq_queue *VAR_2)
{
 struct request *VAR_3 = VAR_2->next_rq;
 unsigned long VAR_4;

 VAR_4 = FUNC_4(VAR_3, VAR_2);

 FUNC_1(VAR_2, VAR_4);

 if (VAR_2 == VAR_1->in_service_queue && VAR_1->wait_dispatch) {
  VAR_1->wait_dispatch = 0;
  VAR_1->waited_rq = VAR_3;
 }

 FUNC_3(VAR_1->queue, VAR_3);

 if (VAR_2 != VAR_1->in_service_queue)
  goto return_rq;
 FUNC_6(VAR_1, VAR_2);






 if (!(FUNC_5(VAR_1) > 1 && FUNC_2(VAR_2)))
  goto return_rq;

 FUNC_0(VAR_1, VAR_2, 0, VAR_0);

return_rq:
 return VAR_3;
}
