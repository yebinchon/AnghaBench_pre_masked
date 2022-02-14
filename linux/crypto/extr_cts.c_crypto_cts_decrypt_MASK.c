
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int flags; struct skcipher_request* data; int complete; } ;
struct skcipher_request {unsigned int cryptlen; int iv; int dst; int src; TYPE_1__ base; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_cts_reqctx {unsigned int offset; struct skcipher_request subreq; } ;
struct crypto_cts_ctx {int child; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct skcipher_request*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_cts_ctx* FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (struct skcipher_request*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (struct skcipher_request*) ;
 int FUNC_6 (int *,int ,int) ;
 unsigned int FUNC_7 (unsigned int,int) ;
 int FUNC_8 (int *,int ,unsigned int,int,int ) ;
 struct crypto_cts_reqctx* FUNC_9 (struct skcipher_request*) ;
 int FUNC_10 (struct skcipher_request*,int ,int ,struct skcipher_request*) ;
 int FUNC_11 (struct skcipher_request*,int ,int ,unsigned int,int ) ;
 int FUNC_12 (struct skcipher_request*,int ) ;

__attribute__((used)) static int FUNC_13(struct skcipher_request *VAR_2)
{
 struct crypto_skcipher *VAR_3 = FUNC_4(VAR_2);
 struct crypto_cts_reqctx *VAR_4 = FUNC_9(VAR_2);
 struct crypto_cts_ctx *VAR_5 = FUNC_2(VAR_3);
 struct skcipher_request *VAR_6 = &VAR_4->subreq;
 int VAR_7 = FUNC_1(VAR_3);
 unsigned int VAR_8 = VAR_2->cryptlen;
 unsigned int VAR_9;
 u8 *VAR_10;

 FUNC_12(VAR_6, VAR_5->child);

 if (VAR_8 < VAR_7)
  return -VAR_0;

 if (VAR_8 == VAR_7) {
  FUNC_10(VAR_6, VAR_2->base.flags,
           VAR_2->base.complete,
           VAR_2->base.data);
  FUNC_11(VAR_6, VAR_2->src, VAR_2->dst, VAR_8,
        VAR_2->iv);
  return FUNC_3(VAR_6);
 }

 FUNC_10(VAR_6, VAR_2->base.flags,
          VAR_1, VAR_2);

 VAR_10 = FUNC_0(VAR_2);

 VAR_9 = FUNC_7(VAR_8 - 1, VAR_7);
 VAR_4->offset = VAR_9;

 if (VAR_9 <= VAR_7)
  FUNC_6(VAR_10, VAR_2->iv, VAR_7);
 else
  FUNC_8(VAR_10, VAR_2->src, VAR_9 - 2 * VAR_7,
      VAR_7, 0);

 FUNC_11(VAR_6, VAR_2->src, VAR_2->dst,
       VAR_9, VAR_2->iv);

 return FUNC_3(VAR_6) ?:
        FUNC_5(VAR_2);
}
