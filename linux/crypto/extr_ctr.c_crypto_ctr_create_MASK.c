
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cra_blocksize; } ;
struct TYPE_4__ {int chunksize; void* decrypt; void* encrypt; TYPE_1__ base; } ;
struct skcipher_instance {int (* free ) (struct skcipher_instance*) ;TYPE_2__ alg; } ;
struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;
struct crypto_alg {int cra_blocksize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct skcipher_instance*) ;
 int FUNC_1 (struct skcipher_instance*) ;
 void* VAR_1 ;
 int FUNC_2 (struct crypto_alg*) ;
 struct skcipher_instance* FUNC_3 (struct crypto_template*,struct rtattr**,struct crypto_alg**) ;
 int FUNC_4 (struct crypto_template*,struct skcipher_instance*) ;
 int FUNC_5 (struct skcipher_instance*) ;

__attribute__((used)) static int FUNC_6(struct crypto_template *VAR_2, struct rtattr **VAR_3)
{
 struct skcipher_instance *VAR_4;
 struct crypto_alg *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_2, VAR_3, &VAR_5);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);


 VAR_6 = -VAR_0;
 if (VAR_5->cra_blocksize < 4)
  goto out_free_inst;


 if (VAR_5->cra_blocksize % 4)
  goto out_free_inst;


 VAR_4->alg.base.cra_blocksize = 1;





 VAR_4->alg.chunksize = VAR_5->cra_blocksize;

 VAR_4->alg.encrypt = VAR_1;
 VAR_4->alg.decrypt = VAR_1;

 VAR_6 = FUNC_4(VAR_2, VAR_4);
 if (VAR_6)
  goto out_free_inst;
 goto out_put_alg;

out_free_inst:
 VAR_4->free(VAR_4);
out_put_alg:
 FUNC_2(VAR_5);
 return VAR_6;
}
