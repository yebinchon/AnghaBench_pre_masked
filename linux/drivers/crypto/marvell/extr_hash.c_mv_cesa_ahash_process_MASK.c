
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_cesa_ahash_req {int base; } ;
struct crypto_async_request {int dummy; } ;
struct ahash_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ahash_request* FUNC_0 (struct crypto_async_request*) ;
 struct mv_cesa_ahash_req* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct crypto_async_request *VAR_1, u32 VAR_2)
{
 struct ahash_request *VAR_3 = FUNC_0(VAR_1);
 struct mv_cesa_ahash_req *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_4(&VAR_4->base) == VAR_0)
  return FUNC_3(&VAR_4->base, VAR_2);

 return FUNC_2(VAR_3, VAR_2);
}
