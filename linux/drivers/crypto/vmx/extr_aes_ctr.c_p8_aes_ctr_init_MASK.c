
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct p8_aes_ctr_ctx {struct crypto_skcipher* fallback; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (char*,int ,int) ;
 struct p8_aes_ctr_ctx* FUNC_3 (struct crypto_skcipher*) ;
 scalar_t__ FUNC_4 (struct crypto_skcipher*) ;
 int FUNC_5 (struct crypto_skcipher*,scalar_t__) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(struct crypto_skcipher *VAR_2)
{
 struct p8_aes_ctr_ctx *VAR_3 = FUNC_3(VAR_2);
 struct crypto_skcipher *VAR_4;

 VAR_4 = FUNC_2("ctr(aes)", 0,
      VAR_1 |
      VAR_0);
 if (FUNC_0(VAR_4)) {
  FUNC_6("Failed to allocate ctr(aes) fallback: %ld\n",
         FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }

 FUNC_5(VAR_2, sizeof(struct skcipher_request) +
        FUNC_4(VAR_4));
 VAR_3->fallback = VAR_4;
 return 0;
}
