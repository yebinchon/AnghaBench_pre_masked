
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p8_aes_cbc_ctx {int fallback; } ;
struct crypto_skcipher {int dummy; } ;


 int FUNC_0 (int ) ;
 struct p8_aes_cbc_ctx* FUNC_1 (struct crypto_skcipher*) ;

__attribute__((used)) static void FUNC_2(struct crypto_skcipher *VAR_0)
{
 struct p8_aes_cbc_ctx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->fallback);
}
