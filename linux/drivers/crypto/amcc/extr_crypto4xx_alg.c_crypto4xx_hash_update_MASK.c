
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct crypto4xx_ctx {int sa_len; int sa_in; } ;
struct TYPE_2__ {int tfm; } ;
struct ahash_request {int nbytes; int src; TYPE_1__ base; int result; } ;


 int FUNC_0 (TYPE_1__*,struct crypto4xx_ctx*,int ,struct scatterlist*,int ,int *,int ,int ,int ,int ,int *) ;
 unsigned int FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 struct crypto4xx_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct scatterlist*,int ,unsigned int) ;

int FUNC_5(struct ahash_request *VAR_0)
{
 struct crypto_ahash *VAR_1 = FUNC_2(VAR_0);
 struct crypto4xx_ctx *VAR_2 = FUNC_3(VAR_0->base.tfm);
 struct scatterlist VAR_3;
 unsigned int VAR_4 = FUNC_1(VAR_1);

 FUNC_4(&VAR_3, VAR_0->result, VAR_4);

 return FUNC_0(&VAR_0->base, VAR_2, VAR_0->src, &VAR_3,
      VAR_0->nbytes, ((void*)0), 0, VAR_2->sa_in,
      VAR_2->sa_len, 0, ((void*)0));
}
