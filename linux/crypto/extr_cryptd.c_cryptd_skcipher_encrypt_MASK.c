
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int complete; } ;
struct skcipher_request {TYPE_1__ base; int iv; int cryptlen; int dst; int src; } ;
struct crypto_sync_skcipher {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_async_request {int dummy; } ;
struct cryptd_skcipher_request_ctx {int complete; } ;
struct cryptd_skcipher_ctx {struct crypto_sync_skcipher* child; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct crypto_sync_skcipher*) ;
 int FUNC_1 (struct skcipher_request*,int) ;
 struct cryptd_skcipher_ctx* FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (int ) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 struct skcipher_request* FUNC_5 (struct crypto_async_request*) ;
 struct cryptd_skcipher_request_ctx* FUNC_6 (struct skcipher_request*) ;
 int FUNC_7 (int ,int ,int *,int *) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,struct crypto_sync_skcipher*) ;
 int FUNC_10 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct crypto_async_request *VAR_3,
        int VAR_4)
{
 struct skcipher_request *VAR_5 = FUNC_5(VAR_3);
 struct cryptd_skcipher_request_ctx *VAR_6 = FUNC_6(VAR_5);
 struct crypto_skcipher *VAR_7 = FUNC_4(VAR_5);
 struct cryptd_skcipher_ctx *VAR_8 = FUNC_2(VAR_7);
 struct crypto_sync_skcipher *VAR_9 = VAR_8->child;
 FUNC_0(VAR_2, VAR_9);

 if (FUNC_11(VAR_4 == -VAR_1))
  goto out;

 FUNC_9(VAR_2, VAR_9);
 FUNC_7(VAR_2, VAR_0,
          ((void*)0), ((void*)0));
 FUNC_8(VAR_2, VAR_5->src, VAR_5->dst, VAR_5->cryptlen,
       VAR_5->iv);

 VAR_4 = FUNC_3(VAR_2);
 FUNC_10(VAR_2);

 VAR_5->base.complete = VAR_6->complete;

out:
 FUNC_1(VAR_5, VAR_4);
}
