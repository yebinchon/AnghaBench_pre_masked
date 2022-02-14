
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {uintptr_t ctx_handle; TYPE_2__* fctx; } ;
struct nitrox_crypto_ctx {TYPE_3__ u; struct crypto_ctx_hdr* chdr; int ndev; } ;
struct ctx_hdr {int dummy; } ;
struct crypto_ctx_hdr {scalar_t__ vaddr; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_4__ {scalar_t__ f; } ;
struct TYPE_5__ {TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nitrox_crypto_ctx* FUNC_0 (struct crypto_aead*) ;
 struct crypto_ctx_hdr* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_aead *VAR_2)
{
 struct nitrox_crypto_ctx *VAR_3 = FUNC_0(VAR_2);
 struct crypto_ctx_hdr *VAR_4;


 VAR_3->ndev = FUNC_2();
 if (!VAR_3->ndev)
  return -VAR_0;


 VAR_4 = FUNC_1(VAR_3->ndev);
 if (!VAR_4) {
  FUNC_3(VAR_3->ndev);
  return -VAR_1;
 }
 VAR_3->chdr = VAR_4;
 VAR_3->u.ctx_handle = (uintptr_t)((u8 *)VAR_4->vaddr +
      sizeof(struct ctx_hdr));
 VAR_3->u.fctx->flags.f = 0;

 return 0;
}
