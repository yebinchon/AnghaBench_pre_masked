
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qce_sha_reqctx {int dummy; } ;
struct qce_sha_ctx {int dummy; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ahash {int dummy; } ;


 struct crypto_ahash* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_ahash*,int) ;
 struct qce_sha_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (struct qce_sha_ctx*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_0)
{
 struct crypto_ahash *VAR_1 = FUNC_0(VAR_0);
 struct qce_sha_ctx *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_1, sizeof(struct qce_sha_reqctx));
 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 return 0;
}
