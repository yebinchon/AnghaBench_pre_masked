
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int auth_input_type; int iv_source; int hash_type; int cipher_type; } ;
union fc_ctx_flags {int f; TYPE_1__ w0; } ;
struct TYPE_6__ {TYPE_2__* fctx; } ;
struct nitrox_crypto_ctx {TYPE_3__ u; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_5__ {union fc_ctx_flags flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct nitrox_crypto_ctx* FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_3)
{
 int VAR_4;
 struct nitrox_crypto_ctx *VAR_5 = FUNC_1(VAR_3);
 union fc_ctx_flags *VAR_6;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_6 = &VAR_5->u.fctx->flags;
 VAR_6->w0.cipher_type = VAR_1;
 VAR_6->w0.hash_type = VAR_0;
 VAR_6->w0.iv_source = VAR_2;

 VAR_6->w0.auth_input_type = 1;
 VAR_6->f = FUNC_0(VAR_6->f);

 return 0;
}
