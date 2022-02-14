
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; struct skcipher_request* data; int complete; } ;
struct skcipher_request {unsigned int cryptlen; int iv; int dst; int src; TYPE_1__ base; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_cts_reqctx {unsigned int offset; struct skcipher_request subreq; } ;
struct crypto_cts_ctx {int child; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_skcipher*) ;
 struct crypto_cts_ctx* FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct skcipher_request*) ;
 struct crypto_skcipher* FUNC_3 (struct skcipher_request*) ;
 int FUNC_4 (struct skcipher_request*) ;
 unsigned int FUNC_5 (unsigned int,int) ;
 struct crypto_cts_reqctx* FUNC_6 (struct skcipher_request*) ;
 int FUNC_7 (struct skcipher_request*,int ,int ,struct skcipher_request*) ;
 int FUNC_8 (struct skcipher_request*,int ,int ,unsigned int,int ) ;
 int FUNC_9 (struct skcipher_request*,int ) ;

__attribute__((used)) static int FUNC_10(struct skcipher_request *VAR_2)
{
 struct crypto_skcipher *VAR_3 = FUNC_3(VAR_2);
 struct crypto_cts_reqctx *VAR_4 = FUNC_6(VAR_2);
 struct crypto_cts_ctx *VAR_5 = FUNC_1(VAR_3);
 struct skcipher_request *VAR_6 = &VAR_4->subreq;
 int VAR_7 = FUNC_0(VAR_3);
 unsigned int VAR_8 = VAR_2->cryptlen;
 unsigned int VAR_9;

 FUNC_9(VAR_6, VAR_5->child);

 if (VAR_8 < VAR_7)
  return -VAR_0;

 if (VAR_8 == VAR_7) {
  FUNC_7(VAR_6, VAR_2->base.flags,
           VAR_2->base.complete,
           VAR_2->base.data);
  FUNC_8(VAR_6, VAR_2->src, VAR_2->dst, VAR_8,
        VAR_2->iv);
  return FUNC_2(VAR_6);
 }

 VAR_9 = FUNC_5(VAR_8 - 1, VAR_7);
 VAR_4->offset = VAR_9;

 FUNC_7(VAR_6, VAR_2->base.flags,
          VAR_1, VAR_2);
 FUNC_8(VAR_6, VAR_2->src, VAR_2->dst,
       VAR_9, VAR_2->iv);

 return FUNC_2(VAR_6) ?:
        FUNC_4(VAR_2);
}
