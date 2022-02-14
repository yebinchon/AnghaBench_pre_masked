
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int decrypt; int encrypt; } ;
struct skcipher_instance {int (* free ) (struct skcipher_instance*) ;TYPE_1__ alg; } ;
struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;
struct crypto_alg {int cra_blocksize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct skcipher_instance*) ;
 int FUNC_1 (struct skcipher_instance*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct crypto_alg*) ;
 int FUNC_3 (int ) ;
 struct skcipher_instance* FUNC_4 (struct crypto_template*,struct rtattr**,struct crypto_alg**) ;
 int FUNC_5 (struct crypto_template*,struct skcipher_instance*) ;
 int FUNC_6 (struct skcipher_instance*) ;

__attribute__((used)) static int FUNC_7(struct crypto_template *VAR_3, struct rtattr **VAR_4)
{
 struct skcipher_instance *VAR_5;
 struct crypto_alg *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(VAR_3, VAR_4, &VAR_6);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_7 = -VAR_0;
 if (!FUNC_3(VAR_6->cra_blocksize))
  goto out_free_inst;

 VAR_5->alg.encrypt = VAR_2;
 VAR_5->alg.decrypt = VAR_1;

 VAR_7 = FUNC_5(VAR_3, VAR_5);
 if (VAR_7)
  goto out_free_inst;
 goto out_put_alg;

out_free_inst:
 VAR_5->free(VAR_5);
out_put_alg:
 FUNC_2(VAR_6);
 return VAR_7;
}
