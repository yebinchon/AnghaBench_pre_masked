
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec_alg_tfm_ctx {TYPE_1__* queue; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_2__ {int softqueue; } ;


 struct sec_alg_tfm_ctx* FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct crypto_skcipher*) ;

__attribute__((used)) static void FUNC_3(struct crypto_skcipher *VAR_0)
{
 struct sec_alg_tfm_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->queue->softqueue);
 FUNC_2(VAR_0);
}
