
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_crypto_info {int (* enqueue ) (struct rk_crypto_info*,TYPE_1__*) ;} ;
struct rk_ahash_ctx {struct rk_crypto_info* dev; } ;
struct TYPE_2__ {int tfm; } ;
struct ahash_request {TYPE_1__ base; int nbytes; } ;


 struct rk_ahash_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct rk_crypto_info*,TYPE_1__*) ;
 int FUNC_2 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0)
{
 struct rk_ahash_ctx *VAR_1 = FUNC_0(VAR_0->base.tfm);
 struct rk_crypto_info *VAR_2 = VAR_1->dev;

 if (!VAR_0->nbytes)
  return FUNC_2(VAR_0);
 else
  return VAR_2->enqueue(VAR_2, &VAR_0->base);
}
