
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_ahash_ctx {TYPE_1__* dev; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_2__ {void (* disable_clk ) (TYPE_1__*) ;scalar_t__ addr_vir; } ;


 struct rk_ahash_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (unsigned long) ;
 void FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct rk_ahash_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_1((unsigned long)VAR_1->dev->addr_vir);
 return VAR_1->dev->disable_clk(VAR_1->dev);
}
