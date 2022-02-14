
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cipher_type; int aes_keylen; int iv_source; } ;
union fc_ctx_flags {TYPE_2__ w0; scalar_t__ f; } ;
typedef int u8 ;
typedef int u64 ;
struct TYPE_5__ {struct flexi_crypto_context* fctx; } ;
struct nitrox_crypto_ctx {TYPE_1__ u; } ;
struct TYPE_7__ {int key; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct flexi_crypto_context {TYPE_4__ crypto; union fc_ctx_flags flags; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
typedef enum flexi_cipher { ____Placeholder_flexi_cipher } flexi_cipher ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct crypto_tfm* FUNC_1 (struct crypto_skcipher*) ;
 char* FUNC_2 (struct crypto_tfm*) ;
 struct nitrox_crypto_ctx* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,int const*,unsigned int) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline int FUNC_8(struct crypto_skcipher *VAR_3,
      int VAR_4, const u8 *VAR_5,
      unsigned int VAR_6)
{
 struct crypto_tfm *VAR_7 = FUNC_1(VAR_3);
 struct nitrox_crypto_ctx *VAR_8 = FUNC_3(VAR_7);
 struct flexi_crypto_context *VAR_9;
 union fc_ctx_flags *VAR_10;
 enum flexi_cipher VAR_11;
 const char *VAR_12;

 VAR_12 = FUNC_2(VAR_7);
 VAR_11 = FUNC_4(VAR_12);
 if (FUNC_7(VAR_11 == VAR_0)) {
  FUNC_6("unsupported cipher: %s\n", VAR_12);
  return -VAR_1;
 }


 VAR_9 = VAR_8->u.fctx;
 VAR_10 = &VAR_9->flags;
 VAR_10->f = 0;
 VAR_10->w0.cipher_type = VAR_11;
 VAR_10->w0.aes_keylen = VAR_4;
 VAR_10->w0.iv_source = VAR_2;
 VAR_10->f = FUNC_0(*(u64 *)&VAR_10->w0);

 FUNC_5(VAR_9->crypto.u.key, VAR_5, VAR_6);

 return 0;
}
