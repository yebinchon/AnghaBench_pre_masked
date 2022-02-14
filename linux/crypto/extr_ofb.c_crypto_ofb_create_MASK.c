
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cra_blocksize; } ;
struct TYPE_4__ {void* decrypt; void* encrypt; int chunksize; TYPE_1__ base; } ;
struct skcipher_instance {int (* free ) (struct skcipher_instance*) ;TYPE_2__ alg; } ;
struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;
struct crypto_alg {int cra_blocksize; } ;


 scalar_t__ FUNC_0 (struct skcipher_instance*) ;
 int FUNC_1 (struct skcipher_instance*) ;
 int FUNC_2 (struct crypto_alg*) ;
 void* VAR_0 ;
 struct skcipher_instance* FUNC_3 (struct crypto_template*,struct rtattr**,struct crypto_alg**) ;
 int FUNC_4 (struct crypto_template*,struct skcipher_instance*) ;
 int FUNC_5 (struct skcipher_instance*) ;

__attribute__((used)) static int FUNC_6(struct crypto_template *VAR_1, struct rtattr **VAR_2)
{
 struct skcipher_instance *VAR_3;
 struct crypto_alg *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_1, VAR_2, &VAR_4);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);


 VAR_3->alg.base.cra_blocksize = 1;





 VAR_3->alg.chunksize = VAR_4->cra_blocksize;

 VAR_3->alg.encrypt = VAR_0;
 VAR_3->alg.decrypt = VAR_0;

 VAR_5 = FUNC_4(VAR_1, VAR_3);
 if (VAR_5)
  VAR_3->free(VAR_3);

 FUNC_2(VAR_4);
 return VAR_5;
}
