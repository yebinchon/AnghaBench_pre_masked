
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ctx {scalar_t__ keylen; } ;
struct talitos_ahash_req_ctx {int dummy; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ,int) ;
 struct talitos_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_0)
{
 struct talitos_ctx *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_0);

 VAR_1->keylen = 0;
 FUNC_1(FUNC_0(VAR_0),
     sizeof(struct talitos_ahash_req_ctx));

 return 0;
}
