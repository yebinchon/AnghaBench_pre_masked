
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_tfm {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int aead; } ;
struct crypto4xx_ctx {TYPE_1__ sw_cipher; } ;


 int FUNC_0 (int ,unsigned int) ;
 struct crypto_tfm* FUNC_1 (struct crypto_aead*) ;
 struct crypto4xx_ctx* FUNC_2 (struct crypto_tfm*) ;

int FUNC_3(struct crypto_aead *VAR_0,
          unsigned int VAR_1)
{
 struct crypto_tfm *VAR_2 = FUNC_1(VAR_0);
 struct crypto4xx_ctx *VAR_3 = FUNC_2(VAR_2);

 return FUNC_0(VAR_3->sw_cipher.aead, VAR_1);
}
