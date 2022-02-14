
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int aead; } ;
struct crypto4xx_ctx {TYPE_1__ sw_cipher; } ;


 int FUNC_0 (struct crypto4xx_ctx*) ;
 struct crypto4xx_ctx* FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct crypto_aead *VAR_0)
{
 struct crypto4xx_ctx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1);
 FUNC_2(VAR_1->sw_cipher.aead);
}
