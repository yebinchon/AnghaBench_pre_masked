
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct crypto_authenc_keys {int enckeylen; int enckey; int authkeylen; int authkey; } ;
struct crypto_authenc_esn_ctx {struct crypto_skcipher* enc; struct crypto_ahash* auth; } ;
struct crypto_ahash {int dummy; } ;
struct crypto_aead {int dummy; } ;
typedef int keys ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct crypto_authenc_esn_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int) ;
 int FUNC_3 (struct crypto_ahash*,int) ;
 int FUNC_4 (struct crypto_ahash*) ;
 int FUNC_5 (struct crypto_ahash*,int) ;
 int FUNC_6 (struct crypto_ahash*,int ,int ) ;
 scalar_t__ FUNC_7 (struct crypto_authenc_keys*,int const*,unsigned int) ;
 int FUNC_8 (struct crypto_skcipher*,int) ;
 int FUNC_9 (struct crypto_skcipher*) ;
 int FUNC_10 (struct crypto_skcipher*,int) ;
 int FUNC_11 (struct crypto_skcipher*,int ,int ) ;
 int FUNC_12 (struct crypto_authenc_keys*,int) ;

__attribute__((used)) static int FUNC_13(struct crypto_aead *VAR_4, const u8 *VAR_5,
         unsigned int VAR_6)
{
 struct crypto_authenc_esn_ctx *VAR_7 = FUNC_0(VAR_4);
 struct crypto_ahash *VAR_8 = VAR_7->auth;
 struct crypto_skcipher *VAR_9 = VAR_7->enc;
 struct crypto_authenc_keys VAR_10;
 int VAR_11 = -VAR_3;

 if (FUNC_7(&VAR_10, VAR_5, VAR_6) != 0)
  goto badkey;

 FUNC_3(VAR_8, VAR_0);
 FUNC_5(VAR_8, FUNC_1(VAR_4) &
         VAR_0);
 VAR_11 = FUNC_6(VAR_8, VAR_10.authkey, VAR_10.authkeylen);
 FUNC_2(VAR_4, FUNC_4(VAR_8) &
        VAR_2);

 if (VAR_11)
  goto out;

 FUNC_8(VAR_9, VAR_0);
 FUNC_10(VAR_9, FUNC_1(VAR_4) &
      VAR_0);
 VAR_11 = FUNC_11(VAR_9, VAR_10.enckey, VAR_10.enckeylen);
 FUNC_2(VAR_4, FUNC_9(VAR_9) &
        VAR_2);

out:
 FUNC_12(&VAR_10, sizeof(VAR_10));
 return VAR_11;

badkey:
 FUNC_2(VAR_4, VAR_1);
 goto out;
}
