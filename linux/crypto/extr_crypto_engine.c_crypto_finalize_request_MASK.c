
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* unprepare_request ) (struct crypto_engine*,struct crypto_async_request*) ;} ;
struct crypto_engine_ctx {TYPE_1__ op; } ;
struct crypto_engine {int cur_req_prepared; int pump_requests; int kworker; int queue_lock; struct crypto_async_request* cur_req; int dev; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int) ;int tfm; } ;


 struct crypto_engine_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct crypto_engine*,struct crypto_async_request*) ;
 int FUNC_6 (struct crypto_async_request*,int) ;

__attribute__((used)) static void FUNC_7(struct crypto_engine *VAR_0,
        struct crypto_async_request *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 bool VAR_4 = 0;
 int VAR_5;
 struct crypto_engine_ctx *VAR_6;

 FUNC_3(&VAR_0->queue_lock, VAR_3);
 if (VAR_0->cur_req == VAR_1)
  VAR_4 = 1;
 FUNC_4(&VAR_0->queue_lock, VAR_3);

 if (VAR_4) {
  VAR_6 = FUNC_0(VAR_1->tfm);
  if (VAR_0->cur_req_prepared &&
      VAR_6->op.unprepare_request) {
   VAR_5 = VAR_6->op.unprepare_request(VAR_0, VAR_1);
   if (VAR_5)
    FUNC_1(VAR_0->dev, "failed to unprepare request\n");
  }
  FUNC_3(&VAR_0->queue_lock, VAR_3);
  VAR_0->cur_req = ((void*)0);
  VAR_0->cur_req_prepared = 0;
  FUNC_4(&VAR_0->queue_lock, VAR_3);
 }

 VAR_1->complete(VAR_1, VAR_2);

 FUNC_2(VAR_0->kworker, &VAR_0->pump_requests);
}
