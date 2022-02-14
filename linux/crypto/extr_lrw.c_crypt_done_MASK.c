
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct rctx {TYPE_2__ subreq; } ;
struct crypto_async_request {struct skcipher_request* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct skcipher_request*,int) ;
 struct rctx* FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (struct skcipher_request*) ;

__attribute__((used)) static void FUNC_3(struct crypto_async_request *VAR_1, int VAR_2)
{
 struct skcipher_request *VAR_3 = VAR_1->data;

 if (!VAR_2) {
  struct rctx *VAR_4 = FUNC_1(VAR_3);

  VAR_4->subreq.base.flags &= ~VAR_0;
  VAR_2 = FUNC_2(VAR_3);
 }

 FUNC_0(VAR_3, VAR_2);
}
