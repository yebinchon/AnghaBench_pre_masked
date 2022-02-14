
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_engine {int queue_lock; int pump_requests; int kworker; int busy; int queue; int running; } ;
struct crypto_async_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct crypto_async_request*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct crypto_engine *VAR_1,
       struct crypto_async_request *VAR_2,
       bool VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_2(&VAR_1->queue_lock, VAR_4);

 if (!VAR_1->running) {
  FUNC_3(&VAR_1->queue_lock, VAR_4);
  return -VAR_0;
 }

 VAR_5 = FUNC_0(&VAR_1->queue, VAR_2);

 if (!VAR_1->busy && VAR_3)
  FUNC_1(VAR_1->kworker, &VAR_1->pump_requests);

 FUNC_3(&VAR_1->queue_lock, VAR_4);
 return VAR_5;
}
