
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcp_async_ctx {int fallback; } ;
struct crypto_ablkcipher {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct ablkcipher_request {int info; int nbytes; int dst; int src; TYPE_1__ base; } ;


 int FUNC_0 (int ,int ) ;
 struct dcp_async_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_2 (struct ablkcipher_request*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int *) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_9(struct ablkcipher_request *VAR_1, int VAR_2)
{
 struct crypto_ablkcipher *VAR_3 = FUNC_2(VAR_1);
 struct dcp_async_ctx *VAR_4 = FUNC_1(VAR_3);
 FUNC_0(VAR_0, VAR_4->fallback);
 int VAR_5;

 FUNC_7(VAR_0, VAR_4->fallback);
 FUNC_5(VAR_0, VAR_1->base.flags, ((void*)0), ((void*)0));
 FUNC_6(VAR_0, VAR_1->src, VAR_1->dst,
       VAR_1->nbytes, VAR_1->info);

 if (VAR_2)
  VAR_5 = FUNC_4(VAR_0);
 else
  VAR_5 = FUNC_3(VAR_0);

 FUNC_8(VAR_0);

 return VAR_5;
}
