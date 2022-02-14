
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int mac_len; } ;
union fc_ctx_flags {int f; TYPE_2__ w0; } ;
struct TYPE_4__ {struct flexi_crypto_context* fctx; } ;
struct nitrox_crypto_ctx {TYPE_1__ u; } ;
struct TYPE_6__ {int f; } ;
struct flexi_crypto_context {TYPE_3__ flags; } ;
struct crypto_aead {unsigned int authsize; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nitrox_crypto_ctx* FUNC_2 (struct crypto_aead*) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_0,
       unsigned int VAR_1)
{
 struct nitrox_crypto_ctx *VAR_2 = FUNC_2(VAR_0);
 struct flexi_crypto_context *VAR_3 = VAR_2->u.fctx;
 union fc_ctx_flags VAR_4;

 VAR_4.f = FUNC_0(VAR_3->flags.f);
 VAR_4.w0.mac_len = VAR_1;
 VAR_3->flags.f = FUNC_1(VAR_4.f);

 VAR_0->authsize = VAR_1;

 return 0;
}
