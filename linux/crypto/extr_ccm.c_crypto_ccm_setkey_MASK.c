
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;
struct crypto_ccm_ctx {struct crypto_ahash* mac; struct crypto_skcipher* ctr; } ;
struct crypto_ahash {int dummy; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct crypto_ccm_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int) ;
 int FUNC_3 (struct crypto_ahash*,int) ;
 int FUNC_4 (struct crypto_ahash*) ;
 int FUNC_5 (struct crypto_ahash*,int) ;
 int FUNC_6 (struct crypto_ahash*,int const*,unsigned int) ;
 int FUNC_7 (struct crypto_skcipher*,int) ;
 int FUNC_8 (struct crypto_skcipher*) ;
 int FUNC_9 (struct crypto_skcipher*,int) ;
 int FUNC_10 (struct crypto_skcipher*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct crypto_aead *VAR_2, const u8 *VAR_3,
        unsigned int VAR_4)
{
 struct crypto_ccm_ctx *VAR_5 = FUNC_0(VAR_2);
 struct crypto_skcipher *VAR_6 = VAR_5->ctr;
 struct crypto_ahash *VAR_7 = VAR_5->mac;
 int VAR_8 = 0;

 FUNC_7(VAR_6, VAR_0);
 FUNC_9(VAR_6, FUNC_1(VAR_2) &
           VAR_0);
 VAR_8 = FUNC_10(VAR_6, VAR_3, VAR_4);
 FUNC_2(VAR_2, FUNC_8(VAR_6) &
         VAR_1);
 if (VAR_8)
  goto out;

 FUNC_3(VAR_7, VAR_0);
 FUNC_5(VAR_7, FUNC_1(VAR_2) &
        VAR_0);
 VAR_8 = FUNC_6(VAR_7, VAR_3, VAR_4);
 FUNC_2(VAR_2, FUNC_4(VAR_7) &
         VAR_1);

out:
 return VAR_8;
}
