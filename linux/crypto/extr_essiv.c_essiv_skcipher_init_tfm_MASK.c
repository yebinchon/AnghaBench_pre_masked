
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct skcipher_instance {int dummy; } ;
struct TYPE_3__ {struct crypto_skcipher* skcipher; } ;
struct essiv_tfm_ctx {TYPE_1__ u; } ;
struct TYPE_4__ {int skcipher_spawn; } ;
struct essiv_instance_ctx {TYPE_2__ u; } ;
struct crypto_skcipher {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*) ;
 struct essiv_tfm_ctx* FUNC_3 (struct crypto_skcipher*) ;
 scalar_t__ FUNC_4 (struct crypto_skcipher*) ;
 int FUNC_5 (struct crypto_skcipher*,scalar_t__) ;
 struct crypto_skcipher* FUNC_6 (int *) ;
 int FUNC_7 (struct essiv_instance_ctx*,struct essiv_tfm_ctx*) ;
 struct skcipher_instance* FUNC_8 (struct crypto_skcipher*) ;
 struct essiv_instance_ctx* FUNC_9 (struct skcipher_instance*) ;

__attribute__((used)) static int FUNC_10(struct crypto_skcipher *VAR_0)
{
 struct skcipher_instance *VAR_1 = FUNC_8(VAR_0);
 struct essiv_instance_ctx *VAR_2 = FUNC_9(VAR_1);
 struct essiv_tfm_ctx *VAR_3 = FUNC_3(VAR_0);
 struct crypto_skcipher *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_6(&VAR_2->u.skcipher_spawn);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_5(VAR_0, sizeof(struct skcipher_request) +
             FUNC_4(VAR_4));

 VAR_5 = FUNC_7(VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_4);
  return VAR_5;
 }

 VAR_3->u.skcipher = VAR_4;
 return 0;
}
