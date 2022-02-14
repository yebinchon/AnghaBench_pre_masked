
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct safexcel_crypto_priv {int flags; } ;
struct TYPE_2__ {int needs_inv; scalar_t__ ctxr_dma; } ;
struct safexcel_cipher_ctx {scalar_t__* key; unsigned int key_len; TYPE_1__ base; struct safexcel_crypto_priv* priv; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_aes_ctx {int * key_enc; } ;
typedef int aes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_aes_ctx*,int const*,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct crypto_skcipher*,int ) ;
 struct crypto_tfm* FUNC_3 (struct crypto_skcipher*) ;
 struct safexcel_cipher_ctx* FUNC_4 (struct crypto_tfm*) ;
 int FUNC_5 (struct crypto_aes_ctx*,int) ;

__attribute__((used)) static int FUNC_6(struct crypto_skcipher *VAR_2,
     const u8 *VAR_3, unsigned int VAR_4)
{
 struct crypto_tfm *VAR_5 = FUNC_3(VAR_2);
 struct safexcel_cipher_ctx *VAR_6 = FUNC_4(VAR_5);
 struct safexcel_crypto_priv *VAR_7 = VAR_6->priv;
 struct crypto_aes_ctx VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_0(&VAR_8, VAR_3, VAR_4);
 if (VAR_9) {
  FUNC_2(VAR_2, VAR_0);
  return VAR_9;
 }

 if (VAR_7->flags & VAR_1 && VAR_6->base.ctxr_dma) {
  for (VAR_10 = 0; VAR_10 < VAR_4 / sizeof(u32); VAR_10++) {
   if (VAR_6->key[VAR_10] != FUNC_1(VAR_8.key_enc[VAR_10])) {
    VAR_6->base.needs_inv = 1;
    break;
   }
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_4 / sizeof(u32); VAR_10++)
  VAR_6->key[VAR_10] = FUNC_1(VAR_8.key_enc[VAR_10]);

 VAR_6->key_len = VAR_4;

 FUNC_5(&VAR_8, sizeof(VAR_8));
 return 0;
}
