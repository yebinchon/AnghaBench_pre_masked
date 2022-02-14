
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int data; int complete; int flags; } ;
struct skcipher_request {int cryptlen; int dst; int src; TYPE_1__ base; int iv; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_rfc3686_req_ctx {int * iv; struct skcipher_request subreq; } ;
struct crypto_rfc3686_ctx {int nonce; struct crypto_skcipher* child; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (struct crypto_skcipher*) ;
 struct crypto_rfc3686_ctx* FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct skcipher_request*) ;
 struct crypto_skcipher* FUNC_5 (struct skcipher_request*) ;
 int FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (struct skcipher_request*) ;
 int FUNC_8 (struct skcipher_request*,int ,int ,int ) ;
 int FUNC_9 (struct skcipher_request*,int ,int ,int ,int *) ;
 int FUNC_10 (struct skcipher_request*,struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_11(struct skcipher_request *VAR_2)
{
 struct crypto_skcipher *VAR_3 = FUNC_5(VAR_2);
 struct crypto_rfc3686_ctx *VAR_4 = FUNC_3(VAR_3);
 struct crypto_skcipher *VAR_5 = VAR_4->child;
 unsigned long VAR_6 = FUNC_2(VAR_3);
 struct crypto_rfc3686_req_ctx *VAR_7 =
  (void *)FUNC_0((u8 *)FUNC_7(VAR_2), VAR_6 + 1);
 struct skcipher_request *VAR_8 = &VAR_7->subreq;
 u8 *VAR_9 = VAR_7->iv;


 FUNC_6(VAR_9, VAR_4->nonce, VAR_1);
 FUNC_6(VAR_9 + VAR_1, VAR_2->iv, VAR_0);


 *(__be32 *)(VAR_9 + VAR_1 + VAR_0) =
  FUNC_1(1);

 FUNC_10(VAR_8, VAR_5);
 FUNC_8(VAR_8, VAR_2->base.flags,
          VAR_2->base.complete, VAR_2->base.data);
 FUNC_9(VAR_8, VAR_2->src, VAR_2->dst,
       VAR_2->cryptlen, VAR_9);

 return FUNC_4(VAR_8);
}
