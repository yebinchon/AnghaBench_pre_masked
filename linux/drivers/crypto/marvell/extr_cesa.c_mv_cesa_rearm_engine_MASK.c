
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_cesa_engine {int lock; struct crypto_async_request* req; } ;
struct mv_cesa_ctx {TYPE_1__* ops; } ;
struct crypto_async_request {int tfm; int (* complete ) (struct crypto_async_request*,int ) ;} ;
struct TYPE_2__ {int (* step ) (struct crypto_async_request*) ;} ;


 int VAR_0 ;
 struct mv_cesa_ctx* FUNC_0 (int ) ;
 struct crypto_async_request* FUNC_1 (struct mv_cesa_engine*,struct crypto_async_request**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct crypto_async_request*,int ) ;
 int FUNC_5 (struct crypto_async_request*) ;

__attribute__((used)) static void FUNC_6(struct mv_cesa_engine *VAR_1)
{
 struct crypto_async_request *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
 struct mv_cesa_ctx *VAR_4;


 FUNC_2(&VAR_1->lock);
 if (!VAR_1->req) {
  VAR_2 = FUNC_1(VAR_1, &VAR_3);
  VAR_1->req = VAR_2;
 }
 FUNC_3(&VAR_1->lock);

 if (!VAR_2)
  return;

 if (VAR_3)
  VAR_3->complete(VAR_3, -VAR_0);

 VAR_4 = FUNC_0(VAR_2->tfm);
 VAR_4->ops->step(VAR_2);
}
