
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int complete; } ;
struct skcipher_request {int iv; int cryptlen; int dst; int src; TYPE_1__ base; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
typedef struct ablkcipher_request ablkcipher_request ;


 int FUNC_0 (struct ablkcipher_request*,int ,int ,int ) ;
 int FUNC_1 (struct ablkcipher_request*,int ,int ,int ,int ) ;
 int FUNC_2 (struct ablkcipher_request*,struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher** FUNC_3 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 struct ablkcipher_request* FUNC_5 (struct skcipher_request*) ;
 int FUNC_6 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_7(struct skcipher_request *VAR_0,
         int (*VAR_1)(struct ablkcipher_request *))
{
 struct crypto_skcipher *VAR_2 = FUNC_4(VAR_0);
 struct crypto_ablkcipher **VAR_3 = FUNC_3(VAR_2);
 struct ablkcipher_request *VAR_4 = FUNC_5(VAR_0);

 FUNC_2(VAR_4, *VAR_3);
 FUNC_0(VAR_4, FUNC_6(VAR_0),
     VAR_0->base.complete, VAR_0->base.data);
 FUNC_1(VAR_4, VAR_0->src, VAR_0->dst, VAR_0->cryptlen,
         VAR_0->iv);

 return VAR_1(VAR_4);
}
