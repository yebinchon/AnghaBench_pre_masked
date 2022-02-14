
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mv_cesa_engine {struct crypto_async_request* req; } ;
struct mv_cesa_ctx {TYPE_1__* ops; } ;
struct crypto_async_request {int tfm; } ;
struct TYPE_2__ {int (* process ) (struct crypto_async_request*,int ) ;int (* step ) (struct crypto_async_request*) ;int (* complete ) (struct crypto_async_request*) ;} ;


 int VAR_0 ;
 struct mv_cesa_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct mv_cesa_engine*,struct crypto_async_request*) ;
 int FUNC_2 (struct crypto_async_request*,int ) ;
 int FUNC_3 (struct crypto_async_request*) ;
 int FUNC_4 (struct crypto_async_request*) ;

__attribute__((used)) static int FUNC_5(struct mv_cesa_engine *VAR_1, u32 VAR_2)
{
 struct crypto_async_request *VAR_3;
 struct mv_cesa_ctx *VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->req;
 VAR_4 = FUNC_0(VAR_3->tfm);
 VAR_5 = VAR_4->ops->process(VAR_3, VAR_2);

 if (VAR_5 == 0) {
  VAR_4->ops->complete(VAR_3);
  FUNC_1(VAR_1, VAR_3);
 } else if (VAR_5 == -VAR_0) {
  VAR_4->ops->step(VAR_3);
 }

 return VAR_5;
}
