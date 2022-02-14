
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skcipher_request {int cryptlen; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct rctx {TYPE_2__ subreq; } ;
struct crypto_async_request {struct skcipher_request* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct skcipher_request*,int ) ;
 int FUNC_1 (struct skcipher_request*,int) ;
 struct rctx* FUNC_2 (struct skcipher_request*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct skcipher_request*,int) ;

__attribute__((used)) static void FUNC_5(struct crypto_async_request *VAR_4, int VAR_5)
{
 struct skcipher_request *VAR_6 = VAR_4->data;

 if (!VAR_5) {
  struct rctx *VAR_7 = FUNC_2(VAR_6);

  VAR_7->subreq.base.flags &= ~VAR_0;
  VAR_5 = FUNC_4(VAR_6, 0);

  if (!VAR_5 && FUNC_3(VAR_6->cryptlen % VAR_2)) {
   VAR_5 = FUNC_0(VAR_6, VAR_3);
   if (VAR_5 == -VAR_1)
    return;
  }
 }

 FUNC_1(VAR_6, VAR_5);
}
