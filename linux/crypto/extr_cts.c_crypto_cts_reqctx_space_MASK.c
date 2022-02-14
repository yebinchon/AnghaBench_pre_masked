
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_cts_reqctx {int dummy; } ;
struct crypto_cts_ctx {struct crypto_skcipher* child; } ;


 int * FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_cts_ctx* FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 struct crypto_cts_reqctx* FUNC_5 (struct skcipher_request*) ;

__attribute__((used)) static inline u8 *FUNC_6(struct skcipher_request *VAR_0)
{
 struct crypto_cts_reqctx *VAR_1 = FUNC_5(VAR_0);
 struct crypto_skcipher *VAR_2 = FUNC_4(VAR_0);
 struct crypto_cts_ctx *VAR_3 = FUNC_2(VAR_2);
 struct crypto_skcipher *VAR_4 = VAR_3->child;

 return FUNC_0((u8 *)(VAR_1 + 1) + FUNC_3(VAR_4),
    FUNC_1(VAR_2) + 1);
}
