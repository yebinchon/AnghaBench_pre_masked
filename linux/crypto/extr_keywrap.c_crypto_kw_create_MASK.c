
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cra_alignmask; void* cra_blocksize; } ;
struct TYPE_4__ {int decrypt; int encrypt; void* ivsize; TYPE_1__ base; } ;
struct skcipher_instance {int (* free ) (struct skcipher_instance*) ;TYPE_2__ alg; } ;
struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;
struct crypto_kw_block {int dummy; } ;
struct crypto_alg {int cra_blocksize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct skcipher_instance*) ;
 int FUNC_1 (struct skcipher_instance*) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct crypto_alg*) ;
 struct skcipher_instance* FUNC_3 (struct crypto_template*,struct rtattr**,struct crypto_alg**) ;
 int FUNC_4 (struct crypto_template*,struct skcipher_instance*) ;
 int FUNC_5 (struct skcipher_instance*) ;

__attribute__((used)) static int FUNC_6(struct crypto_template *VAR_4, struct rtattr **VAR_5)
{
 struct skcipher_instance *VAR_6;
 struct crypto_alg *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_4, VAR_5, &VAR_7);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_8 = -VAR_0;

 if (VAR_7->cra_blocksize != sizeof(struct crypto_kw_block))
  goto out_free_inst;

 VAR_6->alg.base.cra_blocksize = VAR_1;
 VAR_6->alg.base.cra_alignmask = 0;
 VAR_6->alg.ivsize = VAR_1;

 VAR_6->alg.encrypt = VAR_3;
 VAR_6->alg.decrypt = VAR_2;

 VAR_8 = FUNC_4(VAR_4, VAR_6);
 if (VAR_8)
  goto out_free_inst;
 goto out_put_alg;

out_free_inst:
 VAR_6->free(VAR_6);
out_put_alg:
 FUNC_2(VAR_7);
 return VAR_8;
}
