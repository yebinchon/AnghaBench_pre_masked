
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_skcipher {int dummy; } ;
struct TYPE_2__ {scalar_t__ cipher; } ;
struct crypto4xx_ctx {TYPE_1__ sw_cipher; } ;


 int FUNC_0 (struct crypto4xx_ctx*) ;
 int FUNC_1 (scalar_t__) ;
 struct crypto4xx_ctx* FUNC_2 (struct crypto_skcipher*) ;

__attribute__((used)) static void FUNC_3(struct crypto_skcipher *VAR_0)
{
 struct crypto4xx_ctx *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1);
 if (VAR_1->sw_cipher.cipher)
  FUNC_1(VAR_1->sw_cipher.cipher);
}
