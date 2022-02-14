
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_skcipher {int dummy; } ;
struct adiantum_tfm_ctx {int hash; int blockcipher; int streamcipher; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct adiantum_tfm_ctx* FUNC_3 (struct crypto_skcipher*) ;

__attribute__((used)) static void FUNC_4(struct crypto_skcipher *VAR_0)
{
 struct adiantum_tfm_ctx *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1->streamcipher);
 FUNC_0(VAR_1->blockcipher);
 FUNC_1(VAR_1->hash);
}
