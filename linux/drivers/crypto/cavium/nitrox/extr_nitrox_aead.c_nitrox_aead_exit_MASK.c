
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ctx_handle; struct flexi_crypto_context* fctx; } ;
struct nitrox_crypto_ctx {int * ndev; TYPE_1__ u; scalar_t__ chdr; } ;
struct flexi_crypto_context {int auth; int crypto; } ;
struct crypto_keys {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct auth_keys {int dummy; } ;


 struct nitrox_crypto_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct crypto_aead *VAR_0)
{
 struct nitrox_crypto_ctx *VAR_1 = FUNC_0(VAR_0);


 if (VAR_1->u.ctx_handle) {
  struct flexi_crypto_context *VAR_2 = VAR_1->u.fctx;

  FUNC_2(&VAR_2->crypto, sizeof(struct crypto_keys));
  FUNC_2(&VAR_2->auth, sizeof(struct auth_keys));
  FUNC_1((void *)VAR_1->chdr);
 }
 FUNC_3(VAR_1->ndev);

 VAR_1->u.ctx_handle = 0;
 VAR_1->ndev = ((void*)0);
}
