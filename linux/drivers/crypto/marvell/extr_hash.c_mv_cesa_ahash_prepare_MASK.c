
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_cesa_engine {int dummy; } ;
struct TYPE_2__ {struct mv_cesa_engine* engine; } ;
struct mv_cesa_ahash_req {TYPE_1__ base; } ;
struct crypto_async_request {int dummy; } ;
struct ahash_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ahash_request* FUNC_0 (struct crypto_async_request*) ;
 struct mv_cesa_ahash_req* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct crypto_async_request *VAR_1,
      struct mv_cesa_engine *VAR_2)
{
 struct ahash_request *VAR_3 = FUNC_0(VAR_1);
 struct mv_cesa_ahash_req *VAR_4 = FUNC_1(VAR_3);

 VAR_4->base.engine = VAR_2;

 if (FUNC_4(&VAR_4->base) == VAR_0)
  FUNC_2(VAR_3);
 else
  FUNC_3(VAR_3);
}
