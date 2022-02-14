
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int aes_keylen; } ;
union fc_ctx_flags {int f; TYPE_2__ w0; } ;
typedef int u8 ;
struct TYPE_6__ {struct flexi_crypto_context* fctx; } ;
struct nitrox_crypto_ctx {TYPE_1__ u; } ;
struct TYPE_9__ {int key; } ;
struct TYPE_10__ {TYPE_4__ u; } ;
struct TYPE_8__ {int f; } ;
struct flexi_crypto_context {TYPE_5__ crypto; TYPE_3__ flags; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nitrox_crypto_ctx* FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ,int const*,unsigned int) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct crypto_aead *VAR_2, const u8 *VAR_3,
     unsigned int VAR_4)
{
 int VAR_5;
 struct nitrox_crypto_ctx *VAR_6 = FUNC_2(VAR_2);
 struct flexi_crypto_context *VAR_7;
 union fc_ctx_flags VAR_8;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 < 0) {
  FUNC_3(VAR_2, VAR_0);
  return -VAR_1;
 }


 VAR_7 = VAR_6->u.fctx;
 VAR_8.f = FUNC_0(VAR_7->flags.f);
 VAR_8.w0.aes_keylen = VAR_5;
 VAR_7->flags.f = FUNC_1(VAR_8.f);


 FUNC_6(&VAR_7->crypto, 0, sizeof(VAR_7->crypto));
 FUNC_5(VAR_7->crypto.u.key, VAR_3, VAR_4);

 return 0;
}
