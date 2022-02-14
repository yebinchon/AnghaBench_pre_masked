
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aead; } ;
struct essiv_tfm_ctx {int hash; int essiv_cipher; TYPE_1__ u; } ;
struct crypto_aead {int dummy; } ;


 struct essiv_tfm_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct crypto_aead *VAR_0)
{
 struct essiv_tfm_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->u.aead);
 FUNC_2(VAR_1->essiv_cipher);
 FUNC_3(VAR_1->hash);
}
