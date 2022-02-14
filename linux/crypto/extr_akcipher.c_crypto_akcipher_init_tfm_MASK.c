
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_tfm {int dummy; } ;
struct TYPE_2__ {int exit; } ;
struct crypto_akcipher {TYPE_1__ base; } ;
struct akcipher_alg {int (* init ) (struct crypto_akcipher*) ;scalar_t__ exit; } ;


 struct crypto_akcipher* FUNC_0 (struct crypto_tfm*) ;
 struct akcipher_alg* FUNC_1 (struct crypto_akcipher*) ;
 int VAR_0 ;
 int FUNC_2 (struct crypto_akcipher*) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_1)
{
 struct crypto_akcipher *VAR_2 = FUNC_0(VAR_1);
 struct akcipher_alg *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->exit)
  VAR_2->base.exit = VAR_0;

 if (VAR_3->init)
  return VAR_3->init(VAR_2);

 return 0;
}
