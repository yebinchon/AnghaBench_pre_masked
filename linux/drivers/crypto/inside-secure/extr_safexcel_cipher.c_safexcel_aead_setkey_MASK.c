
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct safexcel_crypto_priv {int flags; int dev; } ;
struct TYPE_2__ {int needs_inv; scalar_t__ ctxr_dma; } ;
struct safexcel_cipher_ctx {scalar_t__ mode; int alg; int hash_alg; scalar_t__ state_sz; scalar_t__ key_len; int opad; int ipad; int key; TYPE_1__ base; int nonce; struct safexcel_crypto_priv* priv; } ;
struct safexcel_ahash_export_state {scalar_t__ state; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_authenc_keys {scalar_t__ enckeylen; scalar_t__ enckey; int authkeylen; int authkey; } ;
struct crypto_aes_ctx {int dummy; } ;
struct crypto_aead {int dummy; } ;
typedef int keys ;


 scalar_t__ VAR_0 ;





 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (struct crypto_aes_ctx*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int) ;
 struct crypto_tfm* FUNC_3 (struct crypto_aead*) ;
 scalar_t__ FUNC_4 (struct crypto_authenc_keys*,int const*,unsigned int) ;
 struct safexcel_cipher_ctx* FUNC_5 (struct crypto_tfm*) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_9 (struct crypto_authenc_keys*,int) ;
 int FUNC_10 (char*,int ,int ,struct safexcel_ahash_export_state*,struct safexcel_ahash_export_state*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct crypto_aead*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct crypto_aead *VAR_7, const u8 *VAR_8,
    unsigned int VAR_9)
{
 struct crypto_tfm *VAR_10 = FUNC_3(VAR_7);
 struct safexcel_cipher_ctx *VAR_11 = FUNC_5(VAR_10);
 struct safexcel_ahash_export_state VAR_12, VAR_13;
 struct safexcel_crypto_priv *VAR_14 = VAR_11->priv;
 struct crypto_authenc_keys VAR_15;
 struct crypto_aes_ctx VAR_16;
 int VAR_17 = -VAR_5;

 if (FUNC_4(&VAR_15, VAR_8, VAR_9) != 0)
  goto badkey;

 if (VAR_11->mode == VAR_1) {

  if (VAR_15.enckeylen < (VAR_0 +
          VAR_4))
   goto badkey;

  VAR_11->nonce = *(u32 *)(VAR_15.enckey + VAR_15.enckeylen -
          VAR_4);

  VAR_15.enckeylen -= VAR_1;
 }


 switch (VAR_11->alg) {
 case 129:
  VAR_17 = FUNC_12(VAR_7, VAR_15.enckey, VAR_15.enckeylen);
  if (FUNC_11(VAR_17))
   goto badkey_expflags;
  break;
 case 128:
  VAR_17 = FUNC_0(&VAR_16, VAR_15.enckey, VAR_15.enckeylen);
  if (FUNC_11(VAR_17))
   goto badkey;
  break;
 default:
  FUNC_6(VAR_14->dev, "aead: unsupported cipher algorithm\n");
  goto badkey;
 }

 if (VAR_14->flags & VAR_6 && VAR_11->base.ctxr_dma &&
     FUNC_7(VAR_11->key, VAR_15.enckey, VAR_15.enckeylen))
  VAR_11->base.needs_inv = 1;


 switch (VAR_11->hash_alg) {
 case 134:
  if (FUNC_10("safexcel-sha1", VAR_15.authkey,
      VAR_15.authkeylen, &VAR_12, &VAR_13))
   goto badkey;
  break;
 case 133:
  if (FUNC_10("safexcel-sha224", VAR_15.authkey,
      VAR_15.authkeylen, &VAR_12, &VAR_13))
   goto badkey;
  break;
 case 132:
  if (FUNC_10("safexcel-sha256", VAR_15.authkey,
      VAR_15.authkeylen, &VAR_12, &VAR_13))
   goto badkey;
  break;
 case 131:
  if (FUNC_10("safexcel-sha384", VAR_15.authkey,
      VAR_15.authkeylen, &VAR_12, &VAR_13))
   goto badkey;
  break;
 case 130:
  if (FUNC_10("safexcel-sha512", VAR_15.authkey,
      VAR_15.authkeylen, &VAR_12, &VAR_13))
   goto badkey;
  break;
 default:
  FUNC_6(VAR_14->dev, "aead: unsupported hash algorithm\n");
  goto badkey;
 }

 FUNC_2(VAR_7, FUNC_1(VAR_7) &
        VAR_3);

 if (VAR_14->flags & VAR_6 && VAR_11->base.ctxr_dma &&
     (FUNC_7(VAR_11->ipad, VAR_12.state, VAR_11->state_sz) ||
      FUNC_7(VAR_11->opad, VAR_13.state, VAR_11->state_sz)))
  VAR_11->base.needs_inv = 1;


 FUNC_8(VAR_11->key, &VAR_15.enckey, VAR_15.enckeylen);
 VAR_11->key_len = VAR_15.enckeylen;

 FUNC_8(VAR_11->ipad, &VAR_12.state, VAR_11->state_sz);
 FUNC_8(VAR_11->opad, &VAR_13.state, VAR_11->state_sz);

 FUNC_9(&VAR_15, sizeof(VAR_15));
 return 0;

badkey:
 FUNC_2(VAR_7, VAR_2);
badkey_expflags:
 FUNC_9(&VAR_15, sizeof(VAR_15));
 return VAR_17;
}
