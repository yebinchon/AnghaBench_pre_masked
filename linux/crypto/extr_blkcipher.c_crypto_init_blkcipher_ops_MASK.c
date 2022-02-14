
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct blkcipher_alg {int ivsize; } ;
struct TYPE_2__ {struct blkcipher_alg cra_blkcipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct blkcipher_alg *VAR_6 = &VAR_3->__crt_alg->cra_blkcipher;

 if (VAR_6->ivsize > VAR_2 / 8)
  return -VAR_1;

 if ((VAR_5 & VAR_0) == VAR_0)
  return FUNC_1(VAR_3);
 else
  return FUNC_0(VAR_3);
}
