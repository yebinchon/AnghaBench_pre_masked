
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct talitos_private {int dummy; } ;
struct talitos_edesc {int dummy; } ;
struct talitos_ctx {int dev; } ;
struct talitos_ahash_req_ctx {int psrc; scalar_t__ nbuf; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct ahash_request {TYPE_1__ base; } ;


 struct talitos_ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 struct talitos_ctx* FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 struct talitos_private* FUNC_3 (int ) ;
 int FUNC_4 (struct talitos_private*) ;
 struct talitos_edesc* FUNC_5 (int ,int ,int *,int *,int ,unsigned int,int ,int ,int ,int ,int) ;

__attribute__((used)) static struct talitos_edesc *FUNC_6(struct ahash_request *VAR_0,
            unsigned int VAR_1)
{
 struct crypto_ahash *VAR_2 = FUNC_2(VAR_0);
 struct talitos_ctx *VAR_3 = FUNC_1(VAR_2);
 struct talitos_ahash_req_ctx *VAR_4 = FUNC_0(VAR_0);
 struct talitos_private *VAR_5 = FUNC_3(VAR_3->dev);
 bool VAR_6 = FUNC_4(VAR_5);

 if (VAR_6)
  VAR_1 -= VAR_4->nbuf;

 return FUNC_5(VAR_3->dev, VAR_4->psrc, ((void*)0), ((void*)0), 0,
       VAR_1, 0, 0, 0, VAR_0->base.flags, 0);
}
