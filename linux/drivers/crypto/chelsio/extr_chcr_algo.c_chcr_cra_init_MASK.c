
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; struct crypto_alg* __crt_alg; } ;
struct crypto_alg {int cra_name; } ;
struct chcr_context {int dummy; } ;
struct chcr_blkcipher_req_ctx {int dummy; } ;
struct ablk_ctx {int sw_cipher; } ;


 struct ablk_ctx* FUNC_0 (struct chcr_context*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct chcr_context*) ;
 int FUNC_4 (int ,int ,int ) ;
 struct chcr_context* FUNC_5 (struct crypto_tfm*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(struct crypto_tfm *VAR_1)
{
 struct crypto_alg *VAR_2 = VAR_1->__crt_alg;
 struct chcr_context *VAR_3 = FUNC_5(VAR_1);
 struct ablk_ctx *VAR_4 = FUNC_0(VAR_3);

 VAR_4->sw_cipher = FUNC_4(VAR_2->cra_name, 0,
    VAR_0);
 if (FUNC_1(VAR_4->sw_cipher)) {
  FUNC_6("failed to allocate fallback for %s\n", VAR_2->cra_name);
  return FUNC_2(VAR_4->sw_cipher);
 }

 VAR_1->crt_ablkcipher.reqsize = sizeof(struct chcr_blkcipher_req_ctx);
 return FUNC_3(FUNC_5(VAR_1));
}
