
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nitrox_kcrypt_request {int dummy; } ;
struct TYPE_2__ {uintptr_t ctx_handle; } ;
struct nitrox_crypto_ctx {TYPE_1__ u; struct crypto_ctx_hdr* chdr; int ndev; } ;
struct ctx_hdr {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_ctx_hdr {scalar_t__ vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct crypto_ctx_hdr* FUNC_0 (int ) ;
 struct nitrox_crypto_ctx* FUNC_1 (struct crypto_skcipher*) ;
 scalar_t__ FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (struct crypto_skcipher*,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct crypto_skcipher *VAR_2)
{
 struct nitrox_crypto_ctx *VAR_3 = FUNC_1(VAR_2);
 struct crypto_ctx_hdr *VAR_4;


 VAR_3->ndev = FUNC_4();
 if (!VAR_3->ndev)
  return -VAR_0;


 VAR_4 = FUNC_0(VAR_3->ndev);
 if (!VAR_4) {
  FUNC_5(VAR_3->ndev);
  return -VAR_1;
 }
 VAR_3->chdr = VAR_4;
 VAR_3->u.ctx_handle = (uintptr_t)((u8 *)VAR_4->vaddr +
      sizeof(struct ctx_hdr));
 FUNC_3(VAR_2, FUNC_2(VAR_2) +
        sizeof(struct nitrox_kcrypt_request));
 return 0;
}
