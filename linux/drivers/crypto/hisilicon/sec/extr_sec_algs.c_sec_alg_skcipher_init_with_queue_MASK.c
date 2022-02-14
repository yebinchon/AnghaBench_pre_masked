
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec_alg_tfm_ctx {TYPE_1__* queue; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_2__ {int havesoftqueue; int softqueue; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct sec_alg_tfm_ctx* FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_5(struct crypto_skcipher *VAR_1)
{
 struct sec_alg_tfm_ctx *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_2->queue->softqueue);
 VAR_3 = FUNC_2(&VAR_2->queue->softqueue, 512, VAR_0);
 if (VAR_3) {
  FUNC_3(VAR_1);
  return VAR_3;
 }
 VAR_2->queue->havesoftqueue = 1;

 return 0;
}
