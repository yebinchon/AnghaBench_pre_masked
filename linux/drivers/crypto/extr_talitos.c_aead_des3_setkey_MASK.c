
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct talitos_ctx {size_t keylen; size_t enckeylen; size_t authkeylen; int * key; int dma_key; struct device* dev; } ;
struct device {int dummy; } ;
struct crypto_authenc_keys {size_t authkeylen; scalar_t__ enckeylen; int enckey; int authkey; } ;
struct crypto_aead {int dummy; } ;
typedef int keys ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct talitos_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*,int ) ;
 int FUNC_2 (struct crypto_authenc_keys*,int const*,unsigned int) ;
 int FUNC_3 (struct device*,int *,size_t,int ) ;
 int FUNC_4 (struct device*,int ,size_t,int ) ;
 int FUNC_5 (int *,int ,size_t) ;
 int FUNC_6 (struct crypto_authenc_keys*,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct crypto_aead*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct crypto_aead *VAR_4,
       const u8 *VAR_5, unsigned int VAR_6)
{
 struct talitos_ctx *VAR_7 = FUNC_0(VAR_4);
 struct device *VAR_8 = VAR_7->dev;
 struct crypto_authenc_keys VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(&VAR_9, VAR_5, VAR_6);
 if (FUNC_7(VAR_10))
  goto badkey;

 VAR_10 = -VAR_2;
 if (VAR_9.authkeylen + VAR_9.enckeylen > VAR_3)
  goto badkey;

 VAR_10 = FUNC_8(VAR_4, VAR_9.enckey, VAR_9.enckeylen);
 if (VAR_10)
  goto out;

 if (VAR_7->keylen)
  FUNC_4(VAR_8, VAR_7->dma_key, VAR_7->keylen, VAR_1);

 FUNC_5(VAR_7->key, VAR_9.authkey, VAR_9.authkeylen);
 FUNC_5(&VAR_7->key[VAR_9.authkeylen], VAR_9.enckey, VAR_9.enckeylen);

 VAR_7->keylen = VAR_9.authkeylen + VAR_9.enckeylen;
 VAR_7->enckeylen = VAR_9.enckeylen;
 VAR_7->authkeylen = VAR_9.authkeylen;
 VAR_7->dma_key = FUNC_3(VAR_8, VAR_7->key, VAR_7->keylen,
          VAR_1);

out:
 FUNC_6(&VAR_9, sizeof(VAR_9));
 return VAR_10;

badkey:
 FUNC_1(VAR_4, VAR_0);
 goto out;
}
