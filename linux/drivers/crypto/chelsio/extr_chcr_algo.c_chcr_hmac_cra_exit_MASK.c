
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmac_ctx {int * base_hash; } ;
struct crypto_tfm {int dummy; } ;
struct chcr_context {int dummy; } ;


 struct hmac_ctx* FUNC_0 (struct chcr_context*) ;
 int FUNC_1 (int *) ;
 struct chcr_context* FUNC_2 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct chcr_context *VAR_1 = FUNC_2(VAR_0);
 struct hmac_ctx *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->base_hash) {
  FUNC_1(VAR_2->base_hash);
  VAR_2->base_hash = ((void*)0);
 }
}
