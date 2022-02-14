
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_ahash_req {int base; } ;
struct crypto_async_request {int dummy; } ;
struct ahash_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ahash_request* FUNC_0 (struct crypto_async_request*) ;
 struct mv_cesa_ahash_req* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct crypto_async_request *VAR_1)
{
 struct ahash_request *VAR_2 = FUNC_0(VAR_1);
 struct mv_cesa_ahash_req *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_4(&VAR_3->base) == VAR_0)
  FUNC_2(VAR_2);
 else
  FUNC_3(VAR_2);
}
