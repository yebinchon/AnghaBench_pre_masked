
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sec_alg_tfm_ctx {int cipher_alg; int req_template; int key; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
typedef enum sec_cipher_alg { ____Placeholder_sec_cipher_alg } sec_cipher_alg ;


 struct crypto_tfm* FUNC_0 (struct crypto_skcipher*) ;
 struct sec_alg_tfm_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 (struct sec_alg_tfm_ctx*,int *,int) ;

__attribute__((used)) static void FUNC_4(struct crypto_skcipher *VAR_0,
       const u8 *VAR_1,
       unsigned int VAR_2,
       enum sec_cipher_alg VAR_3)
{
 struct crypto_tfm *VAR_4 = FUNC_0(VAR_0);
 struct sec_alg_tfm_ctx *VAR_5 = FUNC_1(VAR_4);

 VAR_5->cipher_alg = VAR_3;
 FUNC_2(VAR_5->key, VAR_1, VAR_2);
 FUNC_3(VAR_5, &VAR_5->req_template,
           VAR_5->cipher_alg);
}
