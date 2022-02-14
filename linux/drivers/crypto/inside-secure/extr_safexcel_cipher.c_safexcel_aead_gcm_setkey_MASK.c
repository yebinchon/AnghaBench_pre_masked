
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_aes_ctx {int * key_enc; } ;
typedef struct crypto_aes_ctx u32 ;
struct safexcel_crypto_priv {int flags; } ;
struct TYPE_2__ {int needs_inv; scalar_t__ ctxr_dma; } ;
struct safexcel_cipher_ctx {scalar_t__* key; unsigned int key_len; scalar_t__* ipad; TYPE_1__ base; int hkaes; struct safexcel_crypto_priv* priv; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_aead {int dummy; } ;
typedef int aes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct crypto_aes_ctx*,int const*,unsigned int) ;
 scalar_t__ FUNC_1 (struct crypto_aes_ctx) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (struct crypto_aead*,int) ;
 struct crypto_tfm* FUNC_5 (struct crypto_aead*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int const*,unsigned int) ;
 struct safexcel_cipher_ctx* FUNC_11 (struct crypto_tfm*) ;
 int FUNC_12 (struct crypto_aes_ctx*,int ,int) ;
 int FUNC_13 (struct crypto_aes_ctx*,int) ;

__attribute__((used)) static int FUNC_14(struct crypto_aead *VAR_5, const u8 *VAR_6,
        unsigned int VAR_7)
{
 struct crypto_tfm *VAR_8 = FUNC_5(VAR_5);
 struct safexcel_cipher_ctx *VAR_9 = FUNC_11(VAR_8);
 struct safexcel_crypto_priv *VAR_10 = VAR_9->priv;
 struct crypto_aes_ctx VAR_11;
 u32 VAR_12[VAR_0 >> 2];
 int VAR_13, VAR_14;

 VAR_13 = FUNC_0(&VAR_11, VAR_6, VAR_7);
 if (VAR_13) {
  FUNC_4(VAR_5, VAR_2);
  FUNC_13(&VAR_11, sizeof(VAR_11));
  return VAR_13;
 }

 if (VAR_10->flags & VAR_4 && VAR_9->base.ctxr_dma) {
  for (VAR_14 = 0; VAR_14 < VAR_7 / sizeof(u32); VAR_14++) {
   if (VAR_9->key[VAR_14] != FUNC_2(VAR_11.key_enc[VAR_14])) {
    VAR_9->base.needs_inv = 1;
    break;
   }
  }
 }

 for (VAR_14 = 0; VAR_14 < VAR_7 / sizeof(u32); VAR_14++)
  VAR_9->key[VAR_14] = FUNC_2(VAR_11.key_enc[VAR_14]);

 VAR_9->key_len = VAR_7;


 FUNC_6(VAR_9->hkaes, VAR_1);
 FUNC_9(VAR_9->hkaes, FUNC_3(VAR_5) &
    VAR_1);
 VAR_13 = FUNC_10(VAR_9->hkaes, VAR_6, VAR_7);
 FUNC_4(VAR_5, FUNC_8(VAR_9->hkaes) &
         VAR_3);
 if (VAR_13)
  return VAR_13;

 FUNC_12(VAR_12, 0, VAR_0);
 FUNC_7(VAR_9->hkaes, (u8 *)VAR_12, (u8 *)VAR_12);

 if (VAR_10->flags & VAR_4 && VAR_9->base.ctxr_dma) {
  for (VAR_14 = 0; VAR_14 < VAR_0 / sizeof(u32); VAR_14++) {
   if (VAR_9->ipad[VAR_14] != FUNC_1(VAR_12[VAR_14])) {
    VAR_9->base.needs_inv = 1;
    break;
   }
  }
 }

 for (VAR_14 = 0; VAR_14 < VAR_0 / sizeof(u32); VAR_14++)
  VAR_9->ipad[VAR_14] = FUNC_1(VAR_12[VAR_14]);

 FUNC_13(VAR_12, VAR_0);
 FUNC_13(&VAR_11, sizeof(VAR_11));
 return 0;
}
