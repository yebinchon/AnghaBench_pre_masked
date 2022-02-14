
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct talitos_edesc {int dummy; } ;
struct talitos_ctx {int dev; } ;
struct crypto_ablkcipher {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct ablkcipher_request {TYPE_1__ base; int nbytes; int info; int dst; int src; } ;


 struct talitos_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 unsigned int FUNC_1 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_2 (struct ablkcipher_request*) ;
 struct talitos_edesc* FUNC_3 (int ,int ,int ,int ,int ,int ,int ,unsigned int,int ,int ,int) ;

__attribute__((used)) static struct talitos_edesc *FUNC_4(struct ablkcipher_request *
          VAR_0, bool VAR_1)
{
 struct crypto_ablkcipher *VAR_2 = FUNC_2(VAR_0);
 struct talitos_ctx *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4 = FUNC_1(VAR_2);

 return FUNC_3(VAR_3->dev, VAR_0->src, VAR_0->dst,
       VAR_0->info, 0, VAR_0->nbytes, 0, VAR_4, 0,
       VAR_0->base.flags, VAR_1);
}
