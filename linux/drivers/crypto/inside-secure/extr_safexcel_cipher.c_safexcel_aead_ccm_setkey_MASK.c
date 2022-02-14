
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct safexcel_crypto_priv {int flags; } ;
struct TYPE_2__ {int needs_inv; scalar_t__ ctxr_dma; } ;
struct safexcel_cipher_ctx {scalar_t__* key; unsigned int key_len; int state_sz; int hash_alg; int * ipad; TYPE_1__ base; struct safexcel_crypto_priv* priv; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_aes_ctx {int * key_enc; } ;
struct crypto_aead {int dummy; } ;
typedef int aes ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct crypto_aes_ctx*,int const*,unsigned int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct crypto_aead*,int ) ;
 struct crypto_tfm* FUNC_4 (struct crypto_aead*) ;
 struct safexcel_cipher_ctx* FUNC_5 (struct crypto_tfm*) ;
 int FUNC_6 (struct crypto_aes_ctx*,int) ;

__attribute__((used)) static int FUNC_7(struct crypto_aead *VAR_8, const u8 *VAR_9,
        unsigned int VAR_10)
{
 struct crypto_tfm *VAR_11 = FUNC_4(VAR_8);
 struct safexcel_cipher_ctx *VAR_12 = FUNC_5(VAR_11);
 struct safexcel_crypto_priv *VAR_13 = VAR_12->priv;
 struct crypto_aes_ctx VAR_14;
 int VAR_15, VAR_16;

 VAR_15 = FUNC_0(&VAR_14, VAR_9, VAR_10);
 if (VAR_15) {
  FUNC_3(VAR_8, VAR_6);
  FUNC_6(&VAR_14, sizeof(VAR_14));
  return VAR_15;
 }

 if (VAR_13->flags & VAR_7 && VAR_12->base.ctxr_dma) {
  for (VAR_16 = 0; VAR_16 < VAR_10 / sizeof(u32); VAR_16++) {
   if (VAR_12->key[VAR_16] != FUNC_2(VAR_14.key_enc[VAR_16])) {
    VAR_12->base.needs_inv = 1;
    break;
   }
  }
 }

 for (VAR_16 = 0; VAR_16 < VAR_10 / sizeof(u32); VAR_16++) {
  VAR_12->key[VAR_16] = FUNC_2(VAR_14.key_enc[VAR_16]);
  VAR_12->ipad[VAR_16 + 2 * VAR_0 / sizeof(u32)] =
   FUNC_1(VAR_14.key_enc[VAR_16]);
 }

 VAR_12->key_len = VAR_10;
 VAR_12->state_sz = 2 * VAR_0 + VAR_10;

 if (VAR_10 == VAR_1)
  VAR_12->hash_alg = VAR_4;
 else if (VAR_10 == VAR_2)
  VAR_12->hash_alg = VAR_5;
 else
  VAR_12->hash_alg = VAR_3;

 FUNC_6(&VAR_14, sizeof(VAR_14));
 return 0;
}
