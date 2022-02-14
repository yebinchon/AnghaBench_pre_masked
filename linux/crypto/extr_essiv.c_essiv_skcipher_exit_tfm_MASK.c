
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int skcipher; } ;
struct essiv_tfm_ctx {int hash; int essiv_cipher; TYPE_1__ u; } ;
struct crypto_skcipher {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct essiv_tfm_ctx* FUNC_3 (struct crypto_skcipher*) ;

__attribute__((used)) static void FUNC_4(struct crypto_skcipher *VAR_0)
{
 struct essiv_tfm_ctx *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1->u.skcipher);
 FUNC_0(VAR_1->essiv_cipher);
 FUNC_1(VAR_1->hash);
}
